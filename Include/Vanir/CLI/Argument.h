//==================================================================================//
//                                                                                  //
//  Copyright (c) 2019 Hugo Kindel <kindelhugo@gmail.com>                           //
//                                                                                  //
//  This file is part of the Vanir project.                                         //
//  Licensed under MIT License:                                                     //
//                                                                                  //
//  Permission is hereby granted, free of charge, to any person obtaining           //
//  a copy of this software and associated documentation files (the "Software"),    //
//  to deal in the Software without restriction, including without limitation       //
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,        //
//  and/or sell copies of the Software, and to permit persons to whom the           //
//  Software is furnished to do so, subject to the following conditions:            //
//                                                                                  //
//  The above copyright notice and this permission notice shall be included in      //
//  all copies or substantial portions of the Software.                             //
//                                                                                  //
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      //
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        //
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     //
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          //
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   //
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   //
//  SOFTWARE.                                                                       //
//                                                                                  //
//==================================================================================//

#ifndef VANIR_ARGUMENT_H
#define VANIR_ARGUMENT_H

#include <Vanir/Common.h>
#include <Vanir/CLI/ArgumentType.h>

namespace Vanir
{
    struct VANIR_EXPORT Argument
    {
        explicit Argument(std::string  name = std::string(),
                std::vector<std::string> description = std::vector<std::string>(),
                void (*functionToCall)(const std::string&) = nullptr,
                ArgumentType type = ArgumentType_Argument,
                std::string  supplement = std::string(),
                std::vector<Argument> subOptions = std::vector<Argument>());

        std::string Name;
        std::vector<std::string> Description;
        void (*FunctionToCall)(const std::string&);
        ArgumentType Type;
        std::string Supplement;
        std::vector<Argument> SubOptions;
    };

} /* Namespace Vanir. */

#endif /* VANIR_ARGUMENT_H. */