
error_t division(arthimetic_inputs *ai)
{
    if(ai->input_2==0)
    {
        ai->output=0;
        return ERROR_DIVISION_BY_ZERO;
    }
    else
    {
        ai->output=ai->input_1/ai->input_2;
        return SUCCESS;
    }
}
