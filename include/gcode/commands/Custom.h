//
//  Custom.h
//  ofApp
//
//  Created by Ali Nakipoglu on 7/9/13.
//
//

#pragma once

#include <string>

#include <gcode/commands/ICommand.h>
#include <gcode/math/Vector.h>
#include <gcode/utils/StringUtils.h>
#include <gcode/Config.h>

namespace gcode {
    
    //////////////////////////////////////
    //////////COMMAND INTERFACE///////////
    //////////////////////////////////////
    
    class Custom: public ICommand
    {
        
    public:
        
        Custom( const std::string & value_ )
        
        :value( value_ )
        
        {}
        
        ~Custom()
        {};
        
    public:
        
        virtual std::string getSource()
        {
            return value;
        };
        
    private:
        
        std::string     value;
        
    };
}