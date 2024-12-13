public class MyCalendar
{
    List<(int, int)> _calender;

    public MyCalendar()
    {
        _calender = new List<(int, int)>() { (0, 0) };
    }

    public bool Book(int startTime, int endTime)
    {
        bool flag = true;
        foreach (var (slotStart, slotEnd) in _calender)
        {
            flag &= (endTime <= slotStart || startTime >= slotEnd);
        }
        if (flag)
        {
            _calender.Add((startTime, endTime));
        }
        return flag;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * bool param_1 = obj.Book(startTime,endTime);
 */