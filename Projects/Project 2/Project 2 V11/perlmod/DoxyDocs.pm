$doxydocs=
{
  classes => [
    {
      name => 'std::allocator',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::allocator'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::array',
      inner => [
        {
          name => 'std::array::const_iterator'
        },
        {
          name => 'std::array::const_reverse_iterator'
        },
        {
          name => 'std::array::iterator'
        },
        {
          name => 'std::array::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::array'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::atomic',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::atomic'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::atomic_ref',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::atomic_ref'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::auto_ptr',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'operator->',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::auto_ptr'
        },
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::auto_ptr'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'operator->',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::bad_alloc',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::bad_cast',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::bad_exception',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::bad_typeid',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Player::BadChc',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Player::BadFlag',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Player::BadMns',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Player::Badrc',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Player::BadRC',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'std::basic_fstream',
      base => [
        {
          name => 'std::basic_iostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::fstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wfstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_ifstream',
      base => [
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::ifstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wifstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_ios',
      base => [
        {
          name => 'std::ios_base',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::basic_istream< char >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_istream< wchar_t >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostream< char >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostream< wchar_t >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'virtual',
          protection => 'public'
        },
        {
          name => 'std::ios',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wios',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_iostream',
      base => [
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::basic_fstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_fstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_stringstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_stringstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_fstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_stringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_istream',
      base => [
        {
          name => 'std::basic_ios< Char >',
          virtualness => 'virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::basic_ifstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ifstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_iostream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_iostream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_istringstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_istringstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ifstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_iostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_istringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::istream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wistream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_istringstream',
      base => [
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::istringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wistringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_ofstream',
      base => [
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::ofstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wofstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_ostream',
      base => [
        {
          name => 'std::basic_ios< Char >',
          virtualness => 'virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::basic_iostream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_iostream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ofstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ofstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostringstream< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostringstream< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_iostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ofstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ostringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::ostream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wostream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_ostringstream',
      base => [
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::ostringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wostringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string',
      derived => [
        {
          name => 'std::string',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u16string',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u32string',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u8string',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wstring',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::basic_string::const_iterator'
        },
        {
          name => 'std::basic_string::const_reverse_iterator'
        },
        {
          name => 'std::basic_string::iterator'
        },
        {
          name => 'std::basic_string::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string_view',
      derived => [
        {
          name => 'std::string_view',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u16string_view',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u32string_view',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::u8string_view',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wstring_view',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::basic_string_view::const_iterator'
        },
        {
          name => 'std::basic_string_view::const_reverse_iterator'
        },
        {
          name => 'std::basic_string_view::iterator'
        },
        {
          name => 'std::basic_string_view::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_stringstream',
      base => [
        {
          name => 'std::basic_iostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::stringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::wstringstream',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Char',
          definition_name => 'Char'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::bitset',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'Bits',
          definition_name => 'Bits'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Cell',
      includes => {
        local => 'no',
        name => 'Cell.h'
      },
      all_members => [
        {
          name => 'Cell',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'Cell',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'display',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'flagged',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'getDisp',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getFlgd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getHddn',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getnCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getnRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getSym',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'getVal',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'hidden',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'mine',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'ncol',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'nrow',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'operator=',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setDisp',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setFlgd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setHddn',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setncol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setnrow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setSym',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'setVal',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Cell'
        },
        {
          name => 'symbol',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        },
        {
          name => 'value',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Cell'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'Cell',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'Cell',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'm',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'operator=',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'Cell &',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'right',
                type => 'const Cell &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setDisp',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'char'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setSym',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'char'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setHddn',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setFlgd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setVal',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setnrow',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setncol',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'getDisp',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'char',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getSym',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'char',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getHddn',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getFlgd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getVal',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getnRow',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getnCol',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'display',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'what is seen by player '
                }
              ]
            },
            detailed => {},
            type => 'char'
          },
          {
            kind => 'variable',
            name => 'symbol',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'to be outputted, either mine(%),empty (-) or value '
                }
              ]
            },
            detailed => {},
            type => 'char'
          },
          {
            kind => 'variable',
            name => 'hidden',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'if the player can see cell '
                }
              ]
            },
            detailed => {},
            type => 'bool'
          },
          {
            kind => 'variable',
            name => 'flagged',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'if the player holds the cell '
                }
              ]
            },
            detailed => {},
            type => 'bool'
          },
          {
            kind => 'variable',
            name => 'nrow',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'which row cell is located '
                }
              ]
            },
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'ncol',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'which col cell is located '
                }
              ]
            },
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'mine',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'if the cell has a mine '
                }
              ]
            },
            detailed => {},
            type => 'bool'
          },
          {
            kind => 'variable',
            name => 'value',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'what the cell value is; hint for adjacent cell '
                }
              ]
            },
            detailed => {},
            type => 'int'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::complex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::map::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_map::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multimap::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multimap::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::set::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_set::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multiset::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multiset::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::array::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::list::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::vector::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::span::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string_view::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::deque::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::forward_list::const_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::forward_list::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::map::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_map::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multimap::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multimap::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::set::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_set::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multiset::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multiset::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::array::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::vector::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::span::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::deque::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string_view::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::list::const_reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::deque',
      inner => [
        {
          name => 'std::deque::const_iterator'
        },
        {
          name => 'std::deque::const_reverse_iterator'
        },
        {
          name => 'std::deque::iterator'
        },
        {
          name => 'std::deque::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::deque'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::domain_error',
      base => [
        {
          name => 'std::logic_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::error_category',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::error_code',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::error_condition',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::exception',
      derived => [
        {
          name => 'std::bad_alloc',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::bad_cast',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::bad_exception',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::bad_typeid',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::ios_base::failure',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::logic_error',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::runtime_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ios_base::failure',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::forward_list',
      inner => [
        {
          name => 'std::forward_list::const_iterator'
        },
        {
          name => 'std::forward_list::const_reverse_iterator'
        },
        {
          name => 'std::forward_list::iterator'
        },
        {
          name => 'std::forward_list::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::forward_list'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::fstream',
      base => [
        {
          name => 'std::basic_fstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Game',
      includes => {
        local => 'no',
        name => 'Game.h'
      },
      all_members => [
        {
          name => 'aPlay',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'cC',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'diff',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'Game',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'Game',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'Game',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'Game',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'gb',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'gmeCnt',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'gmeOver',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'inbrd',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'name',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'ncol',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Game'
        },
        {
          name => 'nmines',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Game'
        },
        {
          name => 'nrow',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Game'
        },
        {
          name => 'outbrd',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'play',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'player',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'rC',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'setUp',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Game'
        },
        {
          name => 'setUp',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        },
        {
          name => 'shoStrt',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Game'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'Game',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'Game',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'n',
                type => 'string'
              }
            ]
          },
          {
            kind => 'function',
            name => 'Game',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'n',
                type => 'string'
              },
              {
                declaration_name => 'p',
                type => 'string'
              },
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              },
              {
                declaration_name => 'm',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'Game',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'right',
                type => 'const Game &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'shoStrt',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'setUp',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'play',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'aPlay',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'gmeOver',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      protected_members => {
        members => [
          {
            kind => 'variable',
            name => 'nrow',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'ncol',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'nmines',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          }
        ]
      },
      private_methods => {
        members => [
          {
            kind => 'function',
            name => 'setUp',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'p',
                type => 'string'
              },
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              },
              {
                declaration_name => 'm',
                type => 'int'
              }
            ]
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'name',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'string'
          },
          {
            kind => 'variable',
            name => 'player',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'Player'
          },
          {
            kind => 'variable',
            name => 'inbrd',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'InBrd'
          },
          {
            kind => 'variable',
            name => 'outbrd',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'OutBrd'
          },
          {
            kind => 'variable',
            name => 'rC',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'cC',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'diff',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'gb',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'GmeBrd *'
          }
        ]
      },
      private_static_members => {
        members => [
          {
            kind => 'variable',
            name => 'gmeCnt',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static int',
            initializer => '= 0'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'GmeBrd',
      derived => [
        {
          name => 'InBrd',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'OutBrd',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'GmeBrd.h'
      },
      all_members => [
        {
          name => 'c',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'GmeBrd'
        },
        {
          name => 'col',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'dspBrd',
          virtualness => 'pure_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'mine',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'row',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'setCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => '~GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'GmeBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'GmeBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'cl',
                type => 'int'
              },
              {
                declaration_name => 'm',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => '~GmeBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getRow',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getCol',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'yes',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'setRow',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setCol',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'dspBrd',
            virtualness => 'pure_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ],
            reimplemented_by => [
              {
                name => 'dspBrd'
              },
              {
                name => 'dspBrd'
              }
            ]
          }
        ]
      },
      protected_static_members => {
        members => [
          {
            kind => 'variable',
            name => 'row',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static int'
          },
          {
            kind => 'variable',
            name => 'col',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static int'
          },
          {
            kind => 'variable',
            name => 'mine',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static int'
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'c',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'Cell **'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::ifstream',
      base => [
        {
          name => 'std::basic_ifstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'InBrd',
      base => [
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'InBrd.h'
      },
      all_members => [
        {
          name => 'addMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'addVal',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'c',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'InBrd'
        },
        {
          name => 'celdata',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'col',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'dspBrd',
          virtualness => 'virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'getCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'InBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'InBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'mine',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'operator=',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'OutBrd::rdBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => 'row',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'setCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'sweep',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        },
        {
          name => '~GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => '~InBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'InBrd'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'InBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'InBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'cl',
                type => 'int'
              },
              {
                declaration_name => 'm',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => '~InBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'celdata',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'addMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'addVal',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'dspBrd',
            virtualness => 'virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ],
            reimplements => {
              name => 'dspBrd'
            }
          },
          {
            kind => 'function',
            name => 'sweep',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int **',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'operator=',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'InBrd &',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'right',
                type => 'const InBrd &'
              }
            ]
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'c',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'Cell **'
          }
        ]
      },
      friend_methods => {
        members => [
          {
            kind => 'friend',
            name => 'OutBrd::rdBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'friend void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'InBrd &'
              }
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::invalid_argument',
      base => [
        {
          name => 'std::logic_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ios',
      base => [
        {
          name => 'std::basic_ios< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ios_base',
      derived => [
        {
          name => 'std::basic_ios< char >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ios< wchar_t >',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::basic_ios< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::ios_base::failure'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::istream',
      base => [
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::istringstream',
      base => [
        {
          name => 'std::basic_istringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::map::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_map::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multimap::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multimap::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::set::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_set::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multiset::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multiset::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::array::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::vector::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::span::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string_view::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::list::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::deque::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::forward_list::iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::jthread',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::length_error',
      base => [
        {
          name => 'std::logic_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Player::LessTn1',
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'std::list',
      inner => [
        {
          name => 'std::list::const_iterator'
        },
        {
          name => 'std::list::const_reverse_iterator'
        },
        {
          name => 'std::list::iterator'
        },
        {
          name => 'std::list::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::list'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::lock_guard',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::lock_guard'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::logic_error',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::domain_error',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::invalid_argument',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::length_error',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::out_of_range',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::map',
      inner => [
        {
          name => 'std::map::const_iterator'
        },
        {
          name => 'std::map::const_reverse_iterator'
        },
        {
          name => 'std::map::iterator'
        },
        {
          name => 'std::map::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        },
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::map'
        },
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::map'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          },
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multimap',
      inner => [
        {
          name => 'std::multimap::const_iterator'
        },
        {
          name => 'std::multimap::const_reverse_iterator'
        },
        {
          name => 'std::multimap::iterator'
        },
        {
          name => 'std::multimap::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        },
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::multimap'
        },
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::multimap'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          },
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multiset',
      inner => [
        {
          name => 'std::multiset::const_iterator'
        },
        {
          name => 'std::multiset::const_reverse_iterator'
        },
        {
          name => 'std::multiset::iterator'
        },
        {
          name => 'std::multiset::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        }
      ],
      all_members => [
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::multiset'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ofstream',
      base => [
        {
          name => 'std::basic_ofstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ostream',
      base => [
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::ostringstream',
      base => [
        {
          name => 'std::basic_ostringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::out_of_range',
      base => [
        {
          name => 'std::logic_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'OutBrd',
      base => [
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      includes => {
        local => 'no',
        name => 'OutBrd.h'
      },
      all_members => [
        {
          name => 'c',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'GmeBrd'
        },
        {
          name => 'cell',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'OutBrd'
        },
        {
          name => 'chkClr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'ckFlg',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'clear',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'col',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'dspBrd',
          virtualness => 'virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'flag',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'fRemain',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'getCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'getRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'loss',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'mine',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'OutBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'rdBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'reveal',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'row',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'GmeBrd'
        },
        {
          name => 'setCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'setRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        },
        {
          name => 'spcOpn',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'unflag',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => 'win',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'OutBrd'
        },
        {
          name => '~GmeBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'GmeBrd'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'OutBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'rdBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'a',
                type => 'InBrd &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'reveal',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'flag',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'unflag',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'spcOpn',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'loss',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'win',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'ckFlg',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'chkClr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'clear',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'fRemain',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'dspBrd',
            virtualness => 'virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'virtual void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ],
            reimplements => {
              name => 'dspBrd'
            }
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'cell',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'Cell **'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::overflow_error',
      base => [
        {
          name => 'std::runtime_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Player',
      base => [
        {
          name => 'Stats< int >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'Player::BadChc'
        },
        {
          name => 'Player::BadFlag'
        },
        {
          name => 'Player::BadMns'
        },
        {
          name => 'Player::Badrc'
        },
        {
          name => 'Player::BadRC'
        },
        {
          name => 'Player::LessTn1'
        }
      ],
      includes => {
        local => 'no',
        name => 'Player.h'
      },
      all_members => [
        {
          name => 'askFlg',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'autoChc',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'autoFlg',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'col',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'getChc',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'getCol',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'getMine',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'getName',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'getRow',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'invalid',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'losses',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats< int >'
        },
        {
          name => 'mine',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'name',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'names',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats< int >'
        },
        {
          name => 'number',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'Player',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'Player',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'point',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats< int >'
        },
        {
          name => 'points',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'pts',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'row',
          virtualness => 'non_virtual',
          protection => 'private',
          scope => 'Player'
        },
        {
          name => 'setBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'setBrd',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'setName',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'setName',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'stats',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Player'
        },
        {
          name => 'Stats',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Stats< int >'
        },
        {
          name => 'update',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats< int >'
        },
        {
          name => 'wins',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats< int >'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'Player',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'Default constructor for '
                },
                {
                  type => 'url',
                  link => 'd8/d53/class_player',
                  content => 'Player'
                },
                {
                  type => 'text',
                  content => ' class '
                }
              ]
            },
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'Player',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'string n is passed as a parameter to initialize n '
                }
              ]
            },
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'n',
                type => 'string'
              }
            ]
          },
          {
            kind => 'function',
            name => 'getName',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'string',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'setName',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'setBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getChc',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'rChoice',
                type => 'int &'
              },
              {
                declaration_name => 'cChoice',
                type => 'int &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'getRow',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getCol',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'getMine',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'askFlg',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'char',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'stats',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'win',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'points',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'float',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'win',
                type => 'bool'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setName',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'n',
                type => 'string'
              }
            ]
          },
          {
            kind => 'function',
            name => 'setBrd',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'r',
                type => 'int'
              },
              {
                declaration_name => 'c',
                type => 'int'
              },
              {
                declaration_name => 'm',
                type => 'int'
              }
            ]
          },
          {
            kind => 'function',
            name => 'autoChc',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'void',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'rChoice',
                type => 'int &'
              },
              {
                declaration_name => 'cChoice',
                type => 'int &'
              }
            ]
          },
          {
            kind => 'function',
            name => 'autoFlg',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'char',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      private_members => {
        members => [
          {
            kind => 'variable',
            name => 'name',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'string'
          },
          {
            kind => 'variable',
            name => 'row',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'col',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'mine',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'number',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int'
          },
          {
            kind => 'variable',
            name => 'pts',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'float'
          },
          {
            kind => 'variable',
            name => 'invalid',
            virtualness => 'non_virtual',
            protection => 'private',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::priority_queue',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::priority_queue'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::queue',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::queue'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::range_error',
      base => [
        {
          name => 'std::runtime_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::recursive_mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::recursive_timed_mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::list::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multiset::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::map::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::span::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::array::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::set::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_set::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::deque::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::vector::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multiset::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::forward_list::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multimap::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_map::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::multimap::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::basic_string::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string_view::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string::reverse_iterator',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL iterator class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::runtime_error',
      base => [
        {
          name => 'std::exception',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      derived => [
        {
          name => 'std::overflow_error',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::range_error',
          virtualness => 'non_virtual',
          protection => 'public'
        },
        {
          name => 'std::underflow_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::set',
      inner => [
        {
          name => 'std::set::const_iterator'
        },
        {
          name => 'std::set::const_reverse_iterator'
        },
        {
          name => 'std::set::iterator'
        },
        {
          name => 'std::set::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        }
      ],
      all_members => [
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::set'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::shared_lock',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::shared_lock'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::shared_mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::shared_ptr',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'operator->',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::shared_ptr'
        },
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::shared_ptr'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'operator->',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::shared_timed_mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::smart_ptr',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'operator->',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::smart_ptr'
        },
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::smart_ptr'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'operator->',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::span',
      inner => [
        {
          name => 'std::span::const_iterator'
        },
        {
          name => 'std::span::const_reverse_iterator'
        },
        {
          name => 'std::span::iterator'
        },
        {
          name => 'std::span::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::span'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::stack',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::stack'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'Stats',
      includes => {
        local => 'no',
        name => 'Stats.h'
      },
      template_parameters => [
        {
          type => 'class T'
        }
      ],
      all_members => [
        {
          name => 'losses',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats'
        },
        {
          name => 'names',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats'
        },
        {
          name => 'point',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats'
        },
        {
          name => 'points',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Stats'
        },
        {
          name => 'Stats',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'Stats'
        },
        {
          name => 'update',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats'
        },
        {
          name => 'wins',
          virtualness => 'non_virtual',
          protection => 'protected',
          scope => 'Stats'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'Stats',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'points',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'T',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'win',
                type => 'bool'
              }
            ]
          }
        ]
      },
      protected_methods => {
        members => [
          {
            kind => 'function',
            name => 'update',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'name',
                type => 'string'
              },
              {
                declaration_name => 'win',
                type => 'bool'
              }
            ]
          }
        ]
      },
      protected_members => {
        members => [
          {
            kind => 'variable',
            name => 'point',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'T'
          }
        ]
      },
      protected_static_members => {
        members => [
          {
            kind => 'variable',
            name => 'names',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static vector< string >'
          },
          {
            kind => 'variable',
            name => 'wins',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static vector< T >'
          },
          {
            kind => 'variable',
            name => 'losses',
            virtualness => 'non_virtual',
            protection => 'protected',
            static => 'yes',
            brief => {},
            detailed => {},
            type => 'static vector< T >'
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'std::string',
      base => [
        {
          name => 'std::basic_string< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::string::const_iterator'
        },
        {
          name => 'std::string::const_reverse_iterator'
        },
        {
          name => 'std::string::iterator'
        },
        {
          name => 'std::string::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::string_view',
      base => [
        {
          name => 'std::basic_string_view< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::string_view::const_iterator'
        },
        {
          name => 'std::string_view::const_reverse_iterator'
        },
        {
          name => 'std::string_view::iterator'
        },
        {
          name => 'std::string_view::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::stringstream',
      base => [
        {
          name => 'std::basic_stringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::system_error',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::thread',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::timed_mutex',
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string',
      base => [
        {
          name => 'std::basic_string< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u16string::const_iterator'
        },
        {
          name => 'std::u16string::const_reverse_iterator'
        },
        {
          name => 'std::u16string::iterator'
        },
        {
          name => 'std::u16string::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u16string_view',
      base => [
        {
          name => 'std::basic_string_view< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u16string_view::const_iterator'
        },
        {
          name => 'std::u16string_view::const_reverse_iterator'
        },
        {
          name => 'std::u16string_view::iterator'
        },
        {
          name => 'std::u16string_view::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string',
      base => [
        {
          name => 'std::basic_string< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u32string::const_iterator'
        },
        {
          name => 'std::u32string::const_reverse_iterator'
        },
        {
          name => 'std::u32string::iterator'
        },
        {
          name => 'std::u32string::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u32string_view',
      base => [
        {
          name => 'std::basic_string_view< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u32string_view::const_iterator'
        },
        {
          name => 'std::u32string_view::const_reverse_iterator'
        },
        {
          name => 'std::u32string_view::iterator'
        },
        {
          name => 'std::u32string_view::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string',
      base => [
        {
          name => 'std::basic_string< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u8string::const_iterator'
        },
        {
          name => 'std::u8string::const_reverse_iterator'
        },
        {
          name => 'std::u8string::iterator'
        },
        {
          name => 'std::u8string::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::u8string_view',
      base => [
        {
          name => 'std::basic_string_view< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::u8string_view::const_iterator'
        },
        {
          name => 'std::u8string_view::const_reverse_iterator'
        },
        {
          name => 'std::u8string_view::iterator'
        },
        {
          name => 'std::u8string_view::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::underflow_error',
      base => [
        {
          name => 'std::runtime_error',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unique_lock',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unique_lock'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unique_ptr',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'operator->',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unique_ptr'
        },
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unique_ptr'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'operator->',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_map',
      inner => [
        {
          name => 'std::unordered_map::const_iterator'
        },
        {
          name => 'std::unordered_map::const_reverse_iterator'
        },
        {
          name => 'std::unordered_map::iterator'
        },
        {
          name => 'std::unordered_map::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        },
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_map'
        },
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_map'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          },
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multimap',
      inner => [
        {
          name => 'std::unordered_multimap::const_iterator'
        },
        {
          name => 'std::unordered_multimap::const_reverse_iterator'
        },
        {
          name => 'std::unordered_multimap::iterator'
        },
        {
          name => 'std::unordered_multimap::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        },
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_multimap'
        },
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_multimap'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          },
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_multiset',
      inner => [
        {
          name => 'std::unordered_multiset::const_iterator'
        },
        {
          name => 'std::unordered_multiset::const_reverse_iterator'
        },
        {
          name => 'std::unordered_multiset::iterator'
        },
        {
          name => 'std::unordered_multiset::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        }
      ],
      all_members => [
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_multiset'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::unordered_set',
      inner => [
        {
          name => 'std::unordered_set::const_iterator'
        },
        {
          name => 'std::unordered_set::const_reverse_iterator'
        },
        {
          name => 'std::unordered_set::iterator'
        },
        {
          name => 'std::unordered_set::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'K',
          definition_name => 'K'
        }
      ],
      all_members => [
        {
          name => 'keys',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::unordered_set'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'keys',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'K'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::valarray',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::valarray'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::vector',
      inner => [
        {
          name => 'std::vector::const_iterator'
        },
        {
          name => 'std::vector::const_reverse_iterator'
        },
        {
          name => 'std::vector::iterator'
        },
        {
          name => 'std::vector::reverse_iterator'
        }
      ],
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'elements',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::vector'
        }
      ],
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'elements',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::weak_ptr',
      template_parameters => [
        {
          type => 'typename',
          declaration_name => 'T',
          definition_name => 'T'
        }
      ],
      all_members => [
        {
          name => 'operator->',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::weak_ptr'
        },
        {
          name => 'ptr',
          virtualness => 'non_virtual',
          protection => 'public',
          scope => 'std::weak_ptr'
        }
      ],
      public_methods => {
        members => [
          {
            kind => 'function',
            name => 'operator->',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T *',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          }
        ]
      },
      public_members => {
        members => [
          {
            kind => 'variable',
            name => 'ptr',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {
              doc => [
                {
                  type => 'parbreak'
                },
                {
                  type => 'text',
                  content => 'STL member. '
                }
              ]
            },
            detailed => {},
            type => 'T'
          }
        ]
      },
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wfstream',
      base => [
        {
          name => 'std::basic_fstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wifstream',
      base => [
        {
          name => 'std::basic_ifstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wios',
      base => [
        {
          name => 'std::basic_ios< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wistream',
      base => [
        {
          name => 'std::basic_istream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wistringstream',
      base => [
        {
          name => 'std::basic_istringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wofstream',
      base => [
        {
          name => 'std::basic_ofstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wostream',
      base => [
        {
          name => 'std::basic_ostream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wostringstream',
      base => [
        {
          name => 'std::basic_ostringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring',
      base => [
        {
          name => 'std::basic_string< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::wstring::const_iterator'
        },
        {
          name => 'std::wstring::const_reverse_iterator'
        },
        {
          name => 'std::wstring::iterator'
        },
        {
          name => 'std::wstring::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstring_view',
      base => [
        {
          name => 'std::basic_string_view< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      inner => [
        {
          name => 'std::wstring_view::const_iterator'
        },
        {
          name => 'std::wstring_view::const_reverse_iterator'
        },
        {
          name => 'std::wstring_view::iterator'
        },
        {
          name => 'std::wstring_view::reverse_iterator'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    },
    {
      name => 'std::wstringstream',
      base => [
        {
          name => 'std::basic_stringstream< Char >',
          virtualness => 'non_virtual',
          protection => 'public'
        }
      ],
      all_members => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL class. '
          }
        ]
      },
      detailed => {}
    }
  ],
  namespaces => [
    {
      name => 'std',
      classes => [
        {
          name => 'std::allocator'
        },
        {
          name => 'std::array'
        },
        {
          name => 'std::atomic'
        },
        {
          name => 'std::atomic_ref'
        },
        {
          name => 'std::auto_ptr'
        },
        {
          name => 'std::bad_alloc'
        },
        {
          name => 'std::bad_cast'
        },
        {
          name => 'std::bad_exception'
        },
        {
          name => 'std::bad_typeid'
        },
        {
          name => 'std::basic_fstream'
        },
        {
          name => 'std::basic_ifstream'
        },
        {
          name => 'std::basic_ios'
        },
        {
          name => 'std::basic_iostream'
        },
        {
          name => 'std::basic_istream'
        },
        {
          name => 'std::basic_istringstream'
        },
        {
          name => 'std::basic_ofstream'
        },
        {
          name => 'std::basic_ostream'
        },
        {
          name => 'std::basic_ostringstream'
        },
        {
          name => 'std::basic_string'
        },
        {
          name => 'std::basic_string_view'
        },
        {
          name => 'std::basic_stringstream'
        },
        {
          name => 'std::bitset'
        },
        {
          name => 'std::complex'
        },
        {
          name => 'std::deque'
        },
        {
          name => 'std::domain_error'
        },
        {
          name => 'std::error_category'
        },
        {
          name => 'std::error_code'
        },
        {
          name => 'std::error_condition'
        },
        {
          name => 'std::exception'
        },
        {
          name => 'std::forward_list'
        },
        {
          name => 'std::fstream'
        },
        {
          name => 'std::ifstream'
        },
        {
          name => 'std::invalid_argument'
        },
        {
          name => 'std::ios'
        },
        {
          name => 'std::ios_base'
        },
        {
          name => 'std::istream'
        },
        {
          name => 'std::istringstream'
        },
        {
          name => 'std::jthread'
        },
        {
          name => 'std::length_error'
        },
        {
          name => 'std::list'
        },
        {
          name => 'std::lock_guard'
        },
        {
          name => 'std::logic_error'
        },
        {
          name => 'std::map'
        },
        {
          name => 'std::multimap'
        },
        {
          name => 'std::multiset'
        },
        {
          name => 'std::mutex'
        },
        {
          name => 'std::ofstream'
        },
        {
          name => 'std::ostream'
        },
        {
          name => 'std::ostringstream'
        },
        {
          name => 'std::out_of_range'
        },
        {
          name => 'std::overflow_error'
        },
        {
          name => 'std::priority_queue'
        },
        {
          name => 'std::queue'
        },
        {
          name => 'std::range_error'
        },
        {
          name => 'std::recursive_mutex'
        },
        {
          name => 'std::recursive_timed_mutex'
        },
        {
          name => 'std::runtime_error'
        },
        {
          name => 'std::set'
        },
        {
          name => 'std::shared_lock'
        },
        {
          name => 'std::shared_mutex'
        },
        {
          name => 'std::shared_ptr'
        },
        {
          name => 'std::shared_timed_mutex'
        },
        {
          name => 'std::smart_ptr'
        },
        {
          name => 'std::span'
        },
        {
          name => 'std::stack'
        },
        {
          name => 'std::string'
        },
        {
          name => 'std::string_view'
        },
        {
          name => 'std::stringstream'
        },
        {
          name => 'std::system_error'
        },
        {
          name => 'std::thread'
        },
        {
          name => 'std::timed_mutex'
        },
        {
          name => 'std::u16string'
        },
        {
          name => 'std::u16string_view'
        },
        {
          name => 'std::u32string'
        },
        {
          name => 'std::u32string_view'
        },
        {
          name => 'std::u8string'
        },
        {
          name => 'std::u8string_view'
        },
        {
          name => 'std::underflow_error'
        },
        {
          name => 'std::unique_lock'
        },
        {
          name => 'std::unique_ptr'
        },
        {
          name => 'std::unordered_map'
        },
        {
          name => 'std::unordered_multimap'
        },
        {
          name => 'std::unordered_multiset'
        },
        {
          name => 'std::unordered_set'
        },
        {
          name => 'std::valarray'
        },
        {
          name => 'std::vector'
        },
        {
          name => 'std::weak_ptr'
        },
        {
          name => 'std::wfstream'
        },
        {
          name => 'std::wifstream'
        },
        {
          name => 'std::wios'
        },
        {
          name => 'std::wistream'
        },
        {
          name => 'std::wistringstream'
        },
        {
          name => 'std::wofstream'
        },
        {
          name => 'std::wostream'
        },
        {
          name => 'std::wostringstream'
        },
        {
          name => 'std::wstring'
        },
        {
          name => 'std::wstring_view'
        },
        {
          name => 'std::wstringstream'
        }
      ],
      namespaces => [
      ],
      user_defined => [
      ],
      brief => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'STL namespace. '
          }
        ]
      },
      detailed => {}
    }
  ],
  files => [
    {
      name => '.dep.inc',
      includes => [
      ],
      included_by => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Ante_Gabrielle_Project_2.cpp',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'cstdlib'
        },
        {
          name => 'ctime'
        },
        {
          name => 'iomanip'
        },
        {
          name => 'string'
        },
        {
          name => 'cstring'
        },
        {
          name => 'fstream'
        },
        {
          name => 'Game.h',
          ref => 'd9/dcd/_game_8h'
        },
        {
          name => 'Cell.h',
          ref => 'dd/dcf/_cell_8h'
        }
      ],
      included_by => [
      ],
      functions => {
        members => [
          {
            kind => 'function',
            name => 'reRun',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'bool',
            const => 'no',
            volatile => 'no',
            parameters => [
            ]
          },
          {
            kind => 'function',
            name => 'main',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {},
            type => 'int',
            const => 'no',
            volatile => 'no',
            parameters => [
              {
                declaration_name => 'argc',
                type => 'int'
              },
              {
                declaration_name => 'argv',
                type => 'char **'
              }
            ]
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'Cell.cpp',
      includes => [
        {
          name => 'Cell.h',
          ref => 'dd/dcf/_cell_8h'
        }
      ],
      included_by => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Cell.h',
      includes => [
      ],
      included_by => [
        {
          name => 'GmeBrd.h',
          ref => 'd2/d20/_gme_brd_8h'
        },
        {
          name => 'OutBrd.h',
          ref => 'dc/dea/_out_brd_8h'
        },
        {
          name => 'Ante_Gabrielle_Project_2.cpp',
          ref => 'd6/d4d/_ante___gabrielle___project__2_8cpp'
        },
        {
          name => 'Cell.cpp',
          ref => 'dd/ddd/_cell_8cpp'
        },
        {
          name => 'InBrd.cpp',
          ref => 'd5/d35/_in_brd_8cpp'
        }
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'CELL_H',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {}
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'Game.h',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'string'
        },
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'OutBrd.h',
          ref => 'dc/dea/_out_brd_8h'
        },
        {
          name => 'Player.h',
          ref => 'd1/d39/_player_8h'
        }
      ],
      included_by => [
        {
          name => 'Ante_Gabrielle_Project_2.cpp',
          ref => 'd6/d4d/_ante___gabrielle___project__2_8cpp'
        }
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'GAME_H',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {}
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'GmeBrd.h',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'Cell.h',
          ref => 'dd/dcf/_cell_8h'
        }
      ],
      included_by => [
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'InBrd.cpp',
          ref => 'd5/d35/_in_brd_8cpp'
        },
        {
          name => 'OutBrd.cpp',
          ref => 'da/df8/_out_brd_8cpp'
        }
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'InBrd.cpp',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'iomanip'
        },
        {
          name => 'cstdlib'
        },
        {
          name => 'ctime'
        },
        {
          name => 'GmeBrd.h',
          ref => 'd2/d20/_gme_brd_8h'
        },
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'OutBrd.h',
          ref => 'dc/dea/_out_brd_8h'
        },
        {
          name => 'Cell.h',
          ref => 'dd/dcf/_cell_8h'
        }
      ],
      included_by => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'InBrd.h',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'iomanip'
        },
        {
          name => 'cstdlib'
        },
        {
          name => 'ctime'
        },
        {
          name => 'GmeBrd.h',
          ref => 'd2/d20/_gme_brd_8h'
        },
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'OutBrd.h',
          ref => 'dc/dea/_out_brd_8h'
        }
      ],
      included_by => [
        {
          name => 'Game.h',
          ref => 'd9/dcd/_game_8h'
        },
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'InBrd.cpp',
          ref => 'd5/d35/_in_brd_8cpp'
        },
        {
          name => 'OutBrd.cpp',
          ref => 'da/df8/_out_brd_8cpp'
        }
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'OutBrd.cpp',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'iomanip'
        },
        {
          name => 'GmeBrd.h',
          ref => 'd2/d20/_gme_brd_8h'
        },
        {
          name => 'OutBrd.h',
          ref => 'dc/dea/_out_brd_8h'
        },
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        }
      ],
      included_by => [
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'OutBrd.h',
      includes => [
        {
          name => 'Cell.h',
          ref => 'dd/dcf/_cell_8h'
        }
      ],
      included_by => [
        {
          name => 'InBrd.h',
          ref => 'd3/d4b/_in_brd_8h'
        },
        {
          name => 'Game.h',
          ref => 'd9/dcd/_game_8h'
        },
        {
          name => 'InBrd.cpp',
          ref => 'd5/d35/_in_brd_8cpp'
        },
        {
          name => 'OutBrd.cpp',
          ref => 'da/df8/_out_brd_8cpp'
        }
      ],
      brief => {},
      detailed => {}
    },
    {
      name => 'Player.h',
      includes => [
        {
          name => 'iostream'
        },
        {
          name => 'cstdlib'
        },
        {
          name => 'cctype'
        },
        {
          name => 'regex'
        },
        {
          name => 'string'
        },
        {
          name => 'sstream'
        },
        {
          name => 'Stats.h',
          ref => 'd3/d48/_stats_8h'
        }
      ],
      included_by => [
        {
          name => 'Game.h',
          ref => 'd9/dcd/_game_8h'
        }
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'PLAYER_H',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {}
          }
        ]
      },
      brief => {},
      detailed => {}
    },
    {
      name => 'Stats.h',
      includes => [
        {
          name => 'string'
        },
        {
          name => 'vector'
        }
      ],
      included_by => [
        {
          name => 'Player.h',
          ref => 'd1/d39/_player_8h'
        }
      ],
      defines => {
        members => [
          {
            kind => 'define',
            name => 'STATS_H',
            virtualness => 'non_virtual',
            protection => 'public',
            static => 'no',
            brief => {},
            detailed => {}
          }
        ]
      },
      brief => {},
      detailed => {}
    }
  ],
  groups => [
  ],
  pages => [
    {
      name => 'index',
      title4 => 'Description:',
      detailed => {
        doc => [
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'Minesweeper is a game where a set number of mines are secretly scattered around the board. The player’s goal is to reveal or clear out all the cells of the boards except for the cells where the mines are. To accomplish this, the player picks a cell at a time and determines whether that cell has a mine. If the player thinks the chosen cell has a mine underneath, then the player flags it (or just leaves it alone). If the player thinks the cell doesn’t have a mine, then the player can clear it. To help the player solve the puzzle, cells that don’t have a mine have numbers that tell the player how many mines surround that particular cell. The player automatically loses if they clear a cell containing a mine.'
          },
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'This game was chosen for the project because I am familiar with the rules of the game and I thought it would be simple enough to implement in code. Not to mention, I thought it would be fun to implement a game board that essentially reveals what it is hidden underneath, be it a value or a mine. This feature of revealing what is inside of a cell is important because it provided a way to apply the concepts learned.'
          },
          {
            type => 'parbreak'
          },
          {
            type => 'text',
            content => 'For Project 2, this game was selected again, in the interest of time. On top of that, the board also presents means to transition the code with each cell now acting as objects and having its own properties. '
          },
          {
            type => 'linebreak'
          },
          {
            type => 'text',
            content => ' '
          }
        ]
      }
    }
  ]
};
1;
