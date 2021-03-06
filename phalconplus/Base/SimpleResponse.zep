namespace PhalconPlus\Base;

final class SimpleResponse extends Response
{
    /**
     * @var array
     */
    private result = [];

    /**
     * @deprecated
     */
    public function getResult()
    {
        return (array) this->result;
    }

    public function setResult(array result = [])
    {
        let this->result = result;
        return this;
    }

   /**
    * @deprecated
    */
    public function pushItem(var val, var key = null)
    {
        if !is_null(key) {
            let this->result[key] = val;
        } else {
            array_push(this->result, val);
        }
        return this;
    }
   
    public function setItem(var val, var key = null)
    {
        if !is_null(key) {
            let this->result[key] = val;
        } else {
            array_push(this->result, val);
        }
        return this;
    }

    public function getItem(var key = null)
    {
        if !is_null(key) {
            var val;
            if fetch val, this->result[key] {
                return val;
            }
        } else {
            return reset(this->result);
        }
    }

}