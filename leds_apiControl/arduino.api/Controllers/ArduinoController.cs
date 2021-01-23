using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using System;
using System.IO.Ports;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace arduino.api.Controllers
{
    [ApiController]
    [Route("[controller]")]
    public class ArduinoController : Controller
    {
        // POST: ArduinoController/Create
        [HttpPost]
        public ActionResult Index(string color)
        {
            //var ports = SerialPort.GetPortNames();

            const int baudRate = 9600;
            var portName = "COM9";

            SerialPort sp = new SerialPort(portName);
            sp.Encoding = Encoding.UTF8;
            sp.BaudRate = baudRate;
            sp.ReadTimeout = 1000;
            sp.WriteTimeout = 1000;
            sp.Open();

            sp.WriteLine(color);

            sp.Close();
            return Ok();
        }
    }
}
