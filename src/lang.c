#include <stdlib.h>
#include <string.h>

#include "lang.h"
#include "util.h"

lang_spec_t langs[] = {
    { "actionscript", { "as", "mxml" } },
    { "ada", { "ada", "adb", "ads" } },
    { "asciidoc", { "adoc", "ad", "asc", "asciidoc" } },
    { "apl", { "apl" } },
    { "asm", { "asm", "s" } },
    { "asp", { "asp", "asa", "aspx", "asax", "ashx", "ascx", "asmx" } },
    { "aspx", { "asp", "asa", "aspx", "asax", "ashx", "ascx", "asmx" } },
    { "batch", { "bat", "cmd" } },
    { "bitbake", { "bb", "bbappend", "bbclass", "inc" } },
    { "bro", { "bro", "bif" } },
    { "cc", { "c", "h", "xs" } },
    { "cfmx", { "cfc", "cfm", "cfml" } },
    { "chpl", { "chpl" } },
    { "clojure", { "clj", "cljs", "cljc", "cljx" } },
    { "cmake", { "CMakeLists.txt", "cmake", "in" } },
    { "coffee", { "coffee", "cjsx" } },
    { "config", { "config" } },
    { "coq", { "coq", "g", "v" } },
    { "cpp", { "cpp", "cc", "C", "cxx", "m", "hpp", "hh", "h", "H", "hxx", "tpp" } },
    { "crystal", { "cr", "ecr" } },
    { "csharp", { "cs" } },
    { "cshtml", { "cshtml" } },
    { "css", { "css" } },
    { "cython", { "pyx", "pxd", "pxi" } },
    { "delphi", { "pas", "int", "dfm", "nfm", "dof", "dpk", "dpr", "dproj", "groupproj", "bdsgroup", "bdsproj" } },
    { "dlang", { "d", "di" } },
    { "dot", { "dot", "gv" } },
    { "dts", { "dts", "dtsi" } },
    { "ebuild", { "ebuild", "eclass" } },
    { "elisp", { "el" } },
    { "elixir", { "ex", "eex", "exs" } },
    { "elm", { "elm" } },
    { "erlang", { "erl", "hrl" } },
    { "factor", { "factor" } },
    { "fortran", { "f", "F", "f77", "f90", "F90", "f95", "f03", "for", "ftn", "fpp", "FPP" } },
    { "fsharp", { "fs", "fsi", "fsx" } },
    { "gettext", { "po", "pot", "mo" } },
    { "glsl", { "vert", "tesc", "tese", "geom", "frag", "comp" } },
    { "go", { "go" } },
    { "groovy", { "groovy", "gtmpl", "gpp", "grunit", "gradle" } },
    { "haml", { "haml" } },
    { "handlebars", { "hbs" } },
    { "haskell", { "hs", "hsig", "lhs" } },
    { "haxe", { "hx" } },
    { "hh", { "h" } },
    { "html", { "htm", "html", "shtml", "xhtml" } },
    { "idris", { "idr", "ipkg", "lidr" } },
    { "ini", { "ini" } },
    { "ipython", { "ipynb" } },
    { "isabelle", { "thy" } },
    { "j", { "ijs" } },
    { "jade", { "jade" } },
    { "java", { "java", "properties" } },
    { "jinja2", { "j2" } },
    { "js", { "es6", "js", "jsx", "vue" } },
    { "json", { "json" } },
    { "jsp", { "jsp", "jspx", "jhtm", "jhtml", "jspf", "tag", "tagf" } },
    { "julia", { "jl" } },
    { "kotlin", { "kt" } },
    { "less", { "less" } },
    { "liquid", { "liquid" } },
    { "lisp", { "lisp", "lsp" } },
    { "log", { "log" } },
    { "lua", { "lua" } },
    { "m4", { "m4" } },
    { "make", { "Makefiles", "mk", "mak" } },
    { "mako", { "mako" } },
    { "markdown", { "markdown", "mdown", "mdwn", "mkdn", "mkd", "md" } },
    { "mason", { "mas", "mhtml", "mpl", "mtxt" } },
    { "matlab", { "m" } },
    { "mathematica", { "m", "wl" } },
    { "md", { "markdown", "mdown", "mdwn", "mkdn", "mkd", "md" } },
    { "mercury", { "m", "moo" } },
    { "naccess", { "asa", "rsa" } },
    { "nim", { "nim" } },
    { "nix", { "nix" } },
    { "objc", { "m", "h" } },
    { "objcpp", { "mm", "h" } },
    { "ocaml", { "ml", "mli", "mll", "mly" } },
    { "octave", { "m" } },
    { "org", { "org" } },
    { "parrot", { "pir", "pasm", "pmc", "ops", "pod", "pg", "tg" } },
    { "pdb", { "pdb" } },
    { "perl", { "pl", "pm", "pm6", "pod", "t" } },
    { "php", { "php", "phpt", "php3", "php4", "php5", "phtml" } },
    { "pike", { "pike", "pmod" } },
    { "plist", { "plist" } },
    { "plone", { "pt", "cpt", "metadata", "cpy", "py", "xml", "zcml" } },
    { "powershell", { "ps1" } },
    { "proto", { "proto" } },
    { "ps1", { "ps1" } },
    { "pug", { "pug" } },
    { "puppet", { "pp" } },
    { "python", { "py" } },
    { "qml", { "qml" } },
    { "racket", { "rkt", "ss", "scm" } },
    { "rake", { "Rakefile" } },
    { "razor", { "cshtml" } },
    { "restructuredtext", { "rst" } },
    { "rs", { "rs" } },
    { "r", { "r", "R", "Rmd", "Rnw", "Rtex", "Rrst" } },
    { "rdoc", { "rdoc" } },
    { "ruby", { "rb", "rhtml", "rjs", "rxml", "erb", "rake", "spec" } },
    { "rust", { "rs" } },
    { "salt", { "sls" } },
    { "sass", { "sass", "scss" } },
    { "scala", { "scala" } },
    { "scheme", { "scm", "ss" } },
    { "shell", { "sh", "bash", "csh", "tcsh", "ksh", "zsh", "fish" } },
    { "smalltalk", { "st" } },
    { "sml", { "sml", "fun", "mlb", "sig" } },
    { "sql", { "sql", "ctl" } },
    { "stata", { "do", "ado" } },
    { "stylus", { "styl" } },
    { "swift", { "swift" } },
    { "tcl", { "tcl", "itcl", "itk" } },
    { "terraform", { "tf", "tfvars" } },
    { "tex", { "tex", "cls", "sty" } },
    { "thrift", { "thrift" } },
    { "tla", { "tla" } },
    { "tt", { "tt", "tt2", "ttml" } },
    { "toml", { "toml" } },
    { "ts", { "ts", "tsx" } },
    { "twig", { "twig" } },
    { "vala", { "vala", "vapi" } },
    { "vb", { "bas", "cls", "frm", "ctl", "vb", "resx" } },
    { "velocity", { "vm", "vtl", "vsl" } },
    { "verilog", { "v", "vh", "sv", "svh" } },
    { "vhdl", { "vhd", "vhdl" } },
    { "vim", { "vim" } },
    { "wix", { "wxi", "wxs" } },
    { "wsdl", { "wsdl" } },
    { "wadl", { "wadl" } },
    { "xml", { "xml", "dtd", "xsl", "xslt", "xsd", "ent", "tld", "plist", "wsdl" } },
    { "yaml", { "yaml", "yml" } }
};

size_t get_lang_count() {
    return sizeof(langs) / sizeof(lang_spec_t);
}

char *make_lang_regex(char *file_type_array, size_t num_types) {
    int regex_capacity = 100;
    char *regex = ag_malloc(regex_capacity);
    int regex_length = 3;
    int subsequent = 0;
    char *file_type;
    size_t i;

    strcpy(regex, "\\.(");

    for (i = 0; i < num_types; ++i) {
        file_type = file_type_array + i * SINGLE_EXT_LEN;
        int file_type_len = strlen(file_type);
        while (regex_length + file_type_len + 3 + subsequent > regex_capacity) {
            regex_capacity *= 2;
            regex = ag_realloc(regex, regex_capacity);
        }

        // Consider extensions with a dot as full file name masks. Escape the
        // dot and append mask to front of regex.
        char *dot_pos = strchr(file_type, '.');
        if (dot_pos) {
            if (strchr(dot_pos + 1, '.')) {
                die("File name masks with more than one dot not supported: %s",
                    file_type);
            }

            memmove(regex + file_type_len + 2, regex, regex_length);

            int pre_dot_len = dot_pos - file_type;
            strncpy(regex, file_type, pre_dot_len);
            regex[pre_dot_len] = '\\';
            strcpy(regex + pre_dot_len + 1, dot_pos);

            regex[file_type_len + 1] = '|'; // replace null
            regex_length += file_type_len + 2;
        } else {
            if (subsequent) {
                regex[regex_length++] = '|';
            } else {
                subsequent = 1;
            }
            strcpy(regex + regex_length, file_type);
            regex_length += file_type_len;
        }
    }

    if (subsequent) {
        regex[regex_length++] = ')';
        regex[regex_length++] = '$';
        regex[regex_length++] = 0;
    } else {
        // Remove '|\.(' if we had no extensions at all.
        regex_length -= 4;
        regex[regex_length++] = 0;
    }

    return regex;
}

size_t combine_file_extensions(size_t *extension_index, size_t len, char **exts) {
    /* Keep it fixed as 100 for the reason that if you have more than 100
     * file types to search, you'd better search all the files.
     * */
    size_t ext_capacity = 100;
    (*exts) = (char *)ag_malloc(ext_capacity * SINGLE_EXT_LEN);
    memset((*exts), 0, ext_capacity * SINGLE_EXT_LEN);
    size_t num_of_extensions = 0;

    size_t i;
    for (i = 0; i < len; ++i) {
        size_t j = 0;
        const char *ext = langs[extension_index[i]].extensions[j];
        do {
            if (num_of_extensions == ext_capacity) {
                break;
            }
            char *pos = (*exts) + num_of_extensions * SINGLE_EXT_LEN;
            strncpy(pos, ext, strlen(ext));
            ++num_of_extensions;
            ext = langs[extension_index[i]].extensions[++j];
        } while (ext);
    }

    return num_of_extensions;
}
