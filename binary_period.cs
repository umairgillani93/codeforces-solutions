namespace Namespace {
    
    using np = numpy;
    
    using System.Collections.Generic;
    
    using System;
    
    using System.Linq;
    
    public static class Module {
        
        public static object binary_period(object number) {
            var zeros = new List<object> {
                0
            } * 30;
            var idx = 0;
            while (number > 0) {
                zeros[idx] = number % 2;
                number /= 2;
                idx += 1;
            }
            foreach (var c in Enumerable.Range(1, 1 + idx - 1)) {
                var check = true;
                foreach (var i in Enumerable.Range(0, idx - c)) {
                    if (zeros[i] != zeros[i + c]) {
                        check = false;
                        break;
                    }
                }
                if (check) {
                    return c;
                }
            }
            return -1;
        }
    }
}
