
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = -50592;
uint8_t x23 = UINT8_MAX;
int64_t x29 = 158981217LL;
int32_t x39 = 199727;
volatile int16_t x49 = -2;
int32_t x51 = 7796;
uint32_t x52 = UINT32_MAX;
static volatile uint8_t x60 = UINT8_MAX;
static int8_t x67 = -1;
int32_t t13 = 4;
static int8_t x83 = INT8_MIN;
int16_t x84 = INT16_MIN;
int64_t x85 = -1LL;
volatile int8_t x88 = INT8_MIN;
uint32_t x93 = UINT32_MAX;
uint32_t x96 = UINT32_MAX;
uint64_t x131 = 2063910288980699LLU;
int64_t t26 = -75216354051LL;
uint64_t x145 = 1877217757658878LLU;
int32_t x157 = INT32_MIN;
int16_t x159 = -1;
volatile int16_t x162 = 483;
volatile uint64_t t31 = 1659726343LLU;
static volatile int8_t x182 = INT8_MAX;
volatile int64_t x193 = -468263932LL;
int64_t x194 = INT64_MIN;
uint64_t x196 = 390415766747LLU;
static uint64_t t35 = 87364550479805414LLU;
volatile uint64_t t38 = 986910LLU;
volatile uint64_t x229 = 1873729481669LLU;
uint32_t x233 = UINT32_MAX;
int64_t x249 = -1LL;
volatile int8_t x251 = INT8_MIN;
int8_t x269 = INT8_MIN;
volatile int16_t x279 = 9131;
uint32_t x280 = 22160U;
volatile uint8_t x281 = 6U;
static volatile uint64_t x283 = UINT64_MAX;
int64_t t49 = 120225019113018866LL;
uint64_t t50 = 48236317723LLU;
static uint64_t x305 = UINT64_MAX;
volatile uint16_t x314 = 358U;
uint32_t x315 = 134246U;
int32_t t56 = -12449;
volatile uint64_t t57 = 16641661547355184LLU;
volatile uint8_t x351 = UINT8_MAX;
uint8_t x380 = 1U;
volatile int32_t x386 = INT32_MAX;
volatile uint64_t x388 = 115360066LLU;
int64_t x392 = -63LL;
static uint32_t x400 = UINT32_MAX;
uint32_t t68 = 463241U;
int16_t x409 = -1;
int64_t x414 = 243241709738593LL;
uint64_t t70 = 11636927921LLU;
int32_t x427 = 54446;
volatile uint8_t x455 = 0U;
static uint16_t x470 = UINT16_MAX;
static int32_t x474 = -1;
uint8_t x475 = 12U;
static int8_t x476 = INT8_MIN;
int32_t t80 = -40;
int32_t x485 = INT32_MAX;
uint32_t x513 = 429931U;
uint64_t x537 = 2008690952548356078LLU;
int16_t x540 = INT16_MAX;
static int8_t x543 = -1;
int8_t x550 = 0;
uint8_t x557 = 8U;
uint64_t x558 = 1LLU;
volatile uint64_t t92 = 1LLU;
int16_t x565 = -1;
volatile int64_t x568 = -1LL;
int16_t x571 = -35;
int8_t x572 = -1;
int8_t x579 = INT8_MIN;
int8_t x583 = 54;
uint8_t x593 = 6U;
int32_t x601 = INT32_MIN;
uint32_t x602 = 2959U;
uint64_t x604 = UINT64_MAX;
static int32_t x609 = -1;
volatile uint32_t x612 = UINT32_MAX;
uint32_t t105 = 2U;
uint64_t x625 = 2126680232169839LLU;
volatile int8_t x630 = -13;
int64_t t108 = -32404278863605824LL;
static int8_t x639 = -13;
volatile uint32_t x645 = UINT32_MAX;
static int16_t x646 = -1;
volatile int32_t x664 = INT32_MIN;
volatile uint64_t t112 = 13895360108199182LLU;
int8_t x665 = 1;
int32_t x671 = 981885105;
int64_t x675 = 3475068581LL;
static int8_t x679 = -1;
int8_t x680 = 1;
int64_t x681 = 4351761609068LL;
int8_t x682 = -1;
uint64_t x699 = UINT64_MAX;
uint32_t x708 = UINT32_MAX;
uint64_t x710 = 22648731LLU;
static volatile int8_t x711 = INT8_MIN;
int16_t x718 = -61;
static uint32_t x767 = 14U;
static volatile int32_t x776 = INT32_MAX;
volatile uint64_t t129 = 41087437LLU;
int16_t x790 = -1;
static uint8_t x793 = 11U;
int8_t x798 = 61;
uint64_t t135 = 3704287LLU;
volatile int8_t x817 = -1;
volatile uint64_t t138 = 1252LLU;
int8_t x824 = -1;
int8_t x826 = 1;
volatile int8_t x828 = 0;
volatile int32_t t140 = -45616042;
int32_t x832 = INT32_MIN;
volatile int32_t t141 = 13646337;
int8_t x833 = INT8_MAX;
static int8_t x850 = INT8_MIN;
static volatile uint32_t x852 = 2U;
static int64_t x853 = -1LL;
uint64_t t146 = 4LLU;
int8_t x876 = 0;
static uint64_t x880 = 7LLU;
uint64_t x885 = UINT64_MAX;
int8_t x887 = INT8_MAX;
uint16_t x888 = 13640U;
int64_t x892 = -1LL;
volatile int64_t t154 = 11381213LL;
int16_t x902 = -4;
int32_t x903 = -9;
int8_t x904 = 2;
static int8_t x906 = -1;
uint32_t x907 = UINT32_MAX;
uint64_t x910 = 15269320355771LLU;
uint64_t x911 = UINT64_MAX;
static uint8_t x912 = 114U;
uint64_t x933 = 192347147142191LLU;
volatile uint16_t x939 = UINT16_MAX;
int64_t x944 = -34059222740576LL;
int8_t x949 = INT8_MAX;
volatile uint64_t x950 = 884LLU;
static uint32_t x951 = 179396030U;
volatile int64_t x952 = -8456125122446765LL;
int64_t x956 = -1LL;
volatile int16_t x957 = -1;
volatile uint64_t t167 = 3976714030422LLU;
int8_t x973 = INT8_MAX;
int64_t x987 = -1LL;
int8_t x988 = -1;
int16_t x1006 = INT16_MIN;
uint64_t x1019 = 30LLU;
volatile int64_t x1021 = 529457340LL;
int8_t x1022 = -1;
int32_t x1023 = INT32_MIN;
int8_t x1048 = -1;
int16_t x1050 = INT16_MIN;
static volatile uint64_t t181 = 31296675071249906LLU;
uint64_t t182 = 362372254074082192LLU;
int8_t x1057 = INT8_MIN;
static int32_t x1058 = INT32_MIN;
uint16_t x1061 = UINT16_MAX;
uint8_t x1072 = UINT8_MAX;
volatile uint64_t x1076 = UINT64_MAX;
volatile int8_t x1088 = -1;
int64_t x1098 = INT64_MIN;
static volatile int32_t x1109 = -1;
uint32_t x1111 = UINT32_MAX;
static volatile uint8_t x1113 = 10U;
int16_t x1114 = INT16_MIN;
static uint64_t x1116 = UINT64_MAX;
int16_t x1121 = INT16_MAX;
int16_t x1125 = INT16_MIN;
int32_t x1130 = -30;


void f0(void) {
    	uint64_t x1 = 540828792LLU;
	volatile int32_t x2 = INT32_MAX;
	int32_t x4 = -1;
	uint64_t t0 = 307204124753LLU;

    t0 = (x1*(x2-(x3^x4)));

    if (t0 != 1161393625577348352LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 9;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -809519;

    t1 = (x5*(x6-(x7^x8)));

    if (t1 != -293751) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 8U;
	volatile uint8_t x11 = 0U;
	volatile int8_t x12 = -1;
	uint32_t t2 = 881090U;

    t2 = (x9*(x10-(x11^x12)));

    if (t2 != 4294967287U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 395130LL;
	uint64_t x14 = 308492680026LLU;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t3 = 255909636LLU;

    t3 = (x13*(x14-(x15^x16)));

    if (t3 != 121894712659068510LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MAX;
	static volatile uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 0U;

    t4 = (x21*(x22-(x23^x24)));

    if (t4 != 8420865U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = 20U;
	int8_t x28 = INT8_MAX;
	int32_t t5 = -272;

    t5 = (x25*(x26-(x27^x28)));

    if (t5 != -1077215125) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MAX;
	int8_t x32 = 22;
	volatile uint64_t t6 = 38655067LLU;

    t6 = (x29*(x30-(x31^x32)));

    if (t6 != 18105334513360498774LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 18274LLU;
	int32_t x34 = 4;
	static uint64_t x35 = 60784LLU;
	volatile int32_t x36 = -3;
	volatile uint64_t t7 = 23091579LLU;

    t7 = (x33*(x34-(x35^x36)));

    if (t7 != 1110894734LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = 46U;
	volatile uint8_t x38 = UINT8_MAX;
	int8_t x40 = -1;
	volatile int32_t t8 = 37836;

    t8 = (x37*(x38-(x39^x40)));

    if (t8 != 9199218) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 10;
	uint8_t x46 = 1U;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	int32_t t9 = -1377;

    t9 = (x45*(x46-(x47^x48)));

    if (t9 != 20) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x50 = 158U;
	uint32_t t10 = 0U;

    t10 = (x49*(x50-(x51^x52)));

    if (t10 != 4294951386U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x53 = 619352U;
	uint16_t x54 = 2948U;
	volatile int32_t x55 = -1;
	static int32_t x56 = 382;
	uint32_t t11 = 361U;

    t11 = (x53*(x54-(x55^x56)));

    if (t11 != 2063061512U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = -1;
	volatile int16_t x58 = -1;
	uint16_t x59 = 5739U;
	int32_t t12 = -33;

    t12 = (x57*(x58-(x59^x60)));

    if (t12 != 5781) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = 108U;
	int8_t x66 = 1;
	int16_t x68 = INT16_MAX;

    t13 = (x65*(x66-(x67^x68)));

    if (t13 != 3539052) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x69 = INT8_MIN;
	volatile int16_t x70 = -1;
	static int16_t x71 = -1;
	uint64_t x72 = 9004180592804806LLU;
	static uint64_t t14 = 34918304786LLU;

    t14 = (x69*(x70-(x71^x72)));

    if (t14 != 17294208957830536448LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	int16_t x80 = 1;
	static volatile int32_t t15 = -191610;

    t15 = (x77*(x78-(x79^x80)));

    if (t15 != -2147418112) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x81 = -27;
	int32_t x82 = -1;
	int32_t t16 = 1574407;

    t16 = (x81*(x82-(x83^x84)));

    if (t16 != 881307) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x86 = INT16_MAX;
	static int8_t x87 = INT8_MAX;
	int64_t t17 = 232LL;

    t17 = (x85*(x86-(x87^x88)));

    if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	uint32_t t18 = 391388U;

    t18 = (x93*(x94-(x95^x96)));

    if (t18 != 2147516415U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	int8_t x99 = -4;
	int8_t x100 = 21;
	static volatile int32_t t19 = 1;

    t19 = (x97*(x98-(x99^x100)));

    if (t19 != -150) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MIN;
	static int64_t x102 = INT64_MAX;
	int32_t x103 = -1;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t20 = 318840809642715LL;

    t20 = (x101*(x102-(x103^x104)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = INT16_MIN;
	uint16_t x106 = 7077U;
	uint64_t x107 = UINT64_MAX;
	volatile int32_t x108 = INT32_MAX;
	static uint64_t t21 = 5557949435LLU;

    t21 = (x105*(x106-(x107^x108)));

    if (t21 != 18446673704733474816LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	volatile int16_t x111 = -1;
	volatile uint8_t x112 = UINT8_MAX;
	int64_t t22 = -1659248801LL;

    t22 = (x109*(x110-(x111^x112)));

    if (t22 != -547608330240LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = -15433270791152729LL;
	int8_t x130 = -1;
	volatile int32_t x132 = INT32_MIN;
	volatile uint64_t t23 = 28243365776LLU;

    t23 = (x129*(x130-(x131^x132)));

    if (t23 != 6059224047722342012LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x133 = INT16_MIN;
	static int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t24 = 0;

    t24 = (x133*(x134-(x135^x136)));

    if (t24 != 2143289344) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x137 = -482;
	static uint16_t x138 = 3337U;
	volatile uint32_t x139 = UINT32_MAX;
	static int32_t x140 = INT32_MAX;
	volatile uint32_t t25 = 7171710U;

    t25 = (x137*(x138-(x139^x140)));

    if (t25 != 4293358862U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x141 = 6;
	int64_t x142 = 3LL;
	static int8_t x143 = 21;
	volatile int16_t x144 = -1;

    t26 = (x141*(x142-(x143^x144)));

    if (t26 != 150LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x146 = 28785146936490LL;
	uint16_t x147 = 0U;
	int8_t x148 = INT8_MAX;
	uint64_t t27 = 2180465541624LLU;

    t27 = (x145*(x146-(x147^x148)));

    if (t27 != 9928508604038700202LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = -103;
	int64_t x152 = -29383LL;
	static int64_t t28 = -6335LL;

    t28 = (x149*(x150-(x151^x152)));

    if (t28 != 63290638073856LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x158 = UINT64_MAX;
	int64_t x160 = 2992937698601859526LL;
	uint64_t t29 = 438726LLU;

    t29 = (x157*(x158-(x159^x160)));

    if (t29 != 11239580718122139648LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x161 = INT8_MIN;
	static volatile uint32_t x163 = 15548U;
	int64_t x164 = -1LL;
	int64_t t30 = 1504770LL;

    t30 = (x161*(x162-(x163^x164)));

    if (t30 != -2052096LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x169 = 1493850117872091888LLU;
	volatile int32_t x170 = INT32_MAX;
	volatile int8_t x171 = -1;
	int16_t x172 = -1;

    t31 = (x169*(x170-(x171^x172)));

    if (t31 != 2809481678476475664LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x177 = 2299451266927LLU;
	int16_t x178 = 0;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 27U;
	static uint64_t t32 = 2506880089LLU;

    t32 = (x177*(x178-(x179^x180)));

    if (t32 != 75286333930456907LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x181 = 1142983269410809062LLU;
	static volatile int64_t x183 = -1LL;
	int16_t x184 = -969;
	uint64_t t33 = 13229426531035198LLU;

    t33 = (x181*(x182-(x183^x184)));

    if (t33 != 16428506332115814506LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x195 = -237;
	uint64_t t34 = 10814167137684LLU;

    t34 = (x193*(x194-(x195^x196)));

    if (t34 != 1649818761677467872LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x201 = 3;
	int64_t x202 = 1LL;
	uint64_t x203 = 179101208871035LLU;
	volatile int64_t x204 = 167045LL;

    t35 = (x201*(x202-(x203^x204)));

    if (t35 != 18446206770083223817LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 5960LLU;
	static uint64_t t36 = 978257770LLU;

    t36 = (x213*(x214-(x215^x216)));

    if (t36 != 9223372034707265353LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x217 = -57;
	int16_t x218 = INT16_MAX;
	volatile int8_t x219 = INT8_MAX;
	uint16_t x220 = 3048U;
	int32_t t37 = 0;

    t37 = (x217*(x218-(x219^x220)));

    if (t37 != -1698600) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 59604464819LLU;
	int8_t x224 = INT8_MAX;

    t38 = (x221*(x222-(x223^x224)));

    if (t38 != 55309497549LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 26U;
	volatile int16_t x232 = -1;
	uint64_t t39 = 2663223339LLU;

    t39 = (x229*(x230-(x231^x232)));

    if (t39 != 528391713830658LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x234 = 347U;
	static int64_t x235 = -1LL;
	int64_t x236 = 363663559LL;
	int64_t t40 = 11LL;

    t40 = (x233*(x234-(x235^x236)));

    if (t40 != 1561924586936921565LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x241 = -1;
	int8_t x242 = INT8_MIN;
	volatile uint32_t x243 = 159182U;
	int8_t x244 = 4;
	uint32_t t41 = 7277U;

    t41 = (x241*(x242-(x243^x244)));

    if (t41 != 159306U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x245 = -1;
	int8_t x246 = 3;
	uint32_t x247 = 593668095U;
	static int8_t x248 = -1;
	volatile uint32_t t42 = 8314399U;

    t42 = (x245*(x246-(x247^x248)));

    if (t42 != 3701299197U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x250 = -1;
	int8_t x252 = INT8_MIN;
	static int64_t t43 = -84LL;

    t43 = (x249*(x250-(x251^x252)));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x257 = 59;
	static int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t44 = 5476LLU;

    t44 = (x257*(x258-(x259^x260)));

    if (t44 != 1925760LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x270 = INT8_MAX;
	uint8_t x271 = 2U;
	uint32_t x272 = 10U;
	static uint32_t t45 = 110U;

    t45 = (x269*(x270-(x271^x272)));

    if (t45 != 4294952064U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x273 = -3;
	int32_t x274 = -730859886;
	volatile uint32_t x275 = 242U;
	static int32_t x276 = INT32_MAX;
	static uint32_t t46 = 46690007U;

    t46 = (x273*(x274-(x275^x276)));

    if (t46 != 45095281U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	uint32_t t47 = 3902901U;

    t47 = (x277*(x278-(x279^x280)));

    if (t47 != 983433216U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x282 = UINT16_MAX;
	static volatile uint8_t x284 = UINT8_MAX;
	volatile uint64_t t48 = 15213652651281LLU;

    t48 = (x281*(x282-(x283^x284)));

    if (t48 != 394746LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x285 = 3LL;
	int16_t x286 = -421;
	int16_t x287 = 26;
	int8_t x288 = INT8_MIN;

    t49 = (x285*(x286-(x287^x288)));

    if (t49 != -957LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x289 = -1;
	int64_t x290 = -1LL;
	volatile uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 6144131806380075LLU;

    t50 = (x289*(x290-(x291^x292)));

    if (t50 != 6144134699696085LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x293 = UINT64_MAX;
	uint16_t x294 = 308U;
	uint64_t x295 = UINT64_MAX;
	static volatile int64_t x296 = 1LL;
	uint64_t t51 = 6LLU;

    t51 = (x293*(x294-(x295^x296)));

    if (t51 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	int8_t x308 = -1;
	volatile uint64_t t52 = 729LLU;

    t52 = (x305*(x306-(x307^x308)));

    if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x309 = -1;
	static uint64_t x310 = 2902524465105483LLU;
	static int16_t x311 = -3;
	int8_t x312 = INT8_MIN;
	uint64_t t53 = 689247370LLU;

    t53 = (x309*(x310-(x311^x312)));

    if (t53 != 18443841549244446258LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x313 = 431;
	uint8_t x316 = 0U;
	volatile uint32_t t54 = 180116U;

    t54 = (x313*(x314-(x315^x316)));

    if (t54 != 4237261568U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x317 = 192238453;
	uint8_t x318 = UINT8_MAX;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = -1;
	uint32_t t55 = 6587208U;

    t55 = (x317*(x318-(x319^x320)));

    if (t55 != 1776165259U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x325 = 3U;
	int8_t x326 = INT8_MIN;
	int32_t x327 = -2772;
	uint8_t x328 = UINT8_MAX;

    t56 = (x325*(x326-(x327^x328)));

    if (t56 != 7431) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x337 = 2U;
	uint64_t x338 = 1115577545496254LLU;
	volatile int16_t x339 = 10;
	int16_t x340 = INT16_MIN;

    t57 = (x337*(x338-(x339^x340)));

    if (t57 != 2231155091058024LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x341 = -1919088370398462LL;
	uint8_t x342 = 0U;
	volatile uint64_t x343 = 242666996302492963LLU;
	uint8_t x344 = UINT8_MAX;
	volatile uint64_t t58 = 9511LLU;

    t58 = (x341*(x342-(x343^x344)));

    if (t58 != 2273983732699504712LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x349 = 2262763LL;
	uint64_t x350 = 9938980LLU;
	static int32_t x352 = -1;
	uint64_t t59 = 9814577580235575LLU;

    t59 = (x349*(x350-(x351^x352)));

    if (t59 != 22490135469068LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x353 = -1;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	uint64_t t60 = 132700802704251LLU;

    t60 = (x353*(x354-(x355^x356)));

    if (t60 != 128LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x365 = 2U;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 3218LLU;
	uint64_t t61 = 45698460726740LLU;

    t61 = (x365*(x366-(x367^x368)));

    if (t61 != 6182LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x373 = 662;
	volatile uint16_t x374 = UINT16_MAX;
	static int32_t x375 = -65323;
	uint16_t x376 = 8352U;
	int32_t t62 = 187;

    t62 = (x373*(x374-(x375^x376)));

    if (t62 != 81268444) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x377 = INT32_MIN;
	uint64_t x378 = 47081585LLU;
	volatile uint8_t x379 = 82U;
	static uint64_t t63 = 109963964196826696LLU;

    t63 = (x377*(x378-(x379^x380)));

    if (t63 != 18345637318041272320LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x385 = INT64_MIN;
	volatile int8_t x387 = INT8_MAX;
	volatile uint64_t t64 = 748LLU;

    t64 = (x385*(x386-(x387^x388)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x389 = -1145;
	int64_t x390 = 25LL;
	int16_t x391 = -1;
	volatile int64_t t65 = 1LL;

    t65 = (x389*(x390-(x391^x392)));

    if (t65 != 42365LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x393 = 0;
	int64_t x394 = INT64_MAX;
	int32_t x395 = -1;
	static int32_t x396 = -1;
	int64_t t66 = 247052191LL;

    t66 = (x393*(x394-(x395^x396)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	volatile uint64_t t67 = 2009500LLU;

    t67 = (x397*(x398-(x399^x400)));

    if (t67 != 18446603337294938112LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	static int32_t x407 = INT32_MAX;
	static uint32_t x408 = 13U;

    t68 = (x405*(x406-(x407^x408)));

    if (t68 != 4294541312U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x410 = INT64_MIN;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = -1LL;
	int64_t t69 = 2024LL;

    t69 = (x409*(x410-(x411^x412)));

    if (t69 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x413 = 15902782876954LLU;
	static int64_t x415 = -1LL;
	volatile int8_t x416 = INT8_MIN;

    t70 = (x413*(x414-(x415^x416)));

    if (t70 != 11413783488002906868LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x417 = -69;
	volatile uint8_t x418 = 20U;
	int8_t x419 = INT8_MIN;
	static uint32_t x420 = 527327307U;
	static volatile uint32_t t71 = 1421U;

    t71 = (x417*(x418-(x419^x420)));

    if (t71 != 2269121619U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x425 = INT16_MIN;
	uint16_t x426 = 11793U;
	int64_t x428 = 181565968956LL;
	int64_t t72 = -1182LL;

    t72 = (x425*(x426-(x427^x428)));

    if (t72 != 5949551575859200LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x433 = 329732;
	int16_t x434 = INT16_MIN;
	int64_t x435 = 8LL;
	static int8_t x436 = INT8_MAX;
	static volatile int64_t t73 = 223559359372LL;

    t73 = (x433*(x434-(x435^x436)));

    if (t73 != -10843896284LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x437 = 1828;
	int8_t x438 = 0;
	int32_t x439 = 1;
	uint16_t x440 = 3U;
	int32_t t74 = 0;

    t74 = (x437*(x438-(x439^x440)));

    if (t74 != -3656) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x441 = 25;
	uint32_t x442 = 9878506U;
	uint8_t x443 = 5U;
	static int16_t x444 = INT16_MIN;
	uint32_t t75 = 36557U;

    t75 = (x441*(x442-(x443^x444)));

    if (t75 != 247781725U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x449 = 432147LL;
	uint32_t x450 = 610692004U;
	static uint64_t x451 = UINT64_MAX;
	int8_t x452 = INT8_MIN;
	volatile uint64_t t76 = 502628336LLU;

    t76 = (x449*(x450-(x451^x452)));

    if (t76 != 263908662569919LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	int64_t x454 = 2342568743703451LL;
	volatile uint32_t x456 = UINT32_MAX;
	volatile int64_t t77 = 14240265LL;

    t77 = (x453*(x454-(x455^x456)));

    if (t77 != 597353934427719780LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x457 = INT8_MIN;
	int32_t x458 = 453115;
	static int16_t x459 = -1;
	uint64_t x460 = UINT64_MAX;
	uint64_t t78 = 2363511892341LLU;

    t78 = (x457*(x458-(x459^x460)));

    if (t78 != 18446744073651552896LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x469 = 133U;
	static int16_t x471 = -7;
	uint64_t x472 = 7LLU;
	volatile uint64_t t79 = 835113217535LLU;

    t79 = (x469*(x470-(x471^x472)));

    if (t79 != 8716421LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x473 = 0;

    t80 = (x473*(x474-(x475^x476)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MAX;
	uint64_t x483 = UINT64_MAX;
	int8_t x484 = INT8_MIN;
	volatile uint64_t t81 = 46201LLU;

    t81 = (x481*(x482-(x483^x484)));

    if (t81 != 18446744073705373696LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x486 = 51LLU;
	int8_t x487 = INT8_MAX;
	int8_t x488 = INT8_MIN;
	uint64_t t82 = 8189LLU;

    t82 = (x485*(x486-(x487^x488)));

    if (t82 != 111669149644LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x505 = INT16_MAX;
	int64_t x506 = INT64_MIN;
	int64_t x507 = INT64_MAX;
	uint64_t x508 = 14LLU;
	volatile uint64_t t83 = 223592800845120LLU;

    t83 = (x505*(x506-(x507^x508)));

    if (t83 != 491505LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x509 = 40U;
	static uint16_t x510 = 1120U;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = INT8_MIN;
	static volatile uint32_t t84 = 12531811U;

    t84 = (x509*(x510-(x511^x512)));

    if (t84 != 39720U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x514 = -28444902303LL;
	uint64_t x515 = UINT64_MAX;
	int8_t x516 = -1;
	volatile uint64_t t85 = 16392765456719LLU;

    t85 = (x513*(x514-(x515^x516)));

    if (t85 != 18434514728417520523LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x525 = -1LL;
	uint8_t x526 = 2U;
	static int64_t x527 = 467122848LL;
	int64_t x528 = INT64_MIN;
	volatile int64_t t86 = -52813304083LL;

    t86 = (x525*(x526-(x527^x528)));

    if (t86 != -9223372036387652962LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x533 = INT16_MIN;
	uint16_t x534 = 6U;
	static uint64_t x535 = UINT64_MAX;
	int8_t x536 = -1;
	volatile uint64_t t87 = 23036106597LLU;

    t87 = (x533*(x534-(x535^x536)));

    if (t87 != 18446744073709355008LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x538 = -5;
	int32_t x539 = INT32_MIN;
	volatile uint64_t t88 = 252571LLU;

    t88 = (x537*(x538-(x539^x540)));

    if (t88 != 1923846013803216968LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x541 = -1;
	uint16_t x542 = 12U;
	int16_t x544 = INT16_MAX;
	volatile int32_t t89 = -534;

    t89 = (x541*(x542-(x543^x544)));

    if (t89 != -32780) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x549 = 255692U;
	int32_t x551 = INT32_MAX;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t90 = 3561851U;

    t90 = (x549*(x550-(x551^x552)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x553 = 26U;
	uint16_t x554 = UINT16_MAX;
	int8_t x555 = 34;
	volatile int16_t x556 = -13;
	uint32_t t91 = 76573U;

    t91 = (x553*(x554-(x555^x556)));

    if (t91 != 1705132U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x559 = INT32_MAX;
	int16_t x560 = -1;

    t92 = (x557*(x558-(x559^x560)));

    if (t92 != 17179869192LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MAX;
	static uint64_t x563 = 262146704931937LLU;
	uint8_t x564 = UINT8_MAX;
	volatile uint64_t t93 = 110733447941404LLU;

    t93 = (x561*(x562-(x563^x564)));

    if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x566 = -1;
	uint32_t x567 = 5U;
	int64_t t94 = -211677391029305572LL;

    t94 = (x565*(x566-(x567^x568)));

    if (t94 != -5LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x569 = INT16_MIN;
	uint64_t x570 = 571426072630832LLU;
	uint64_t t95 = 1336778LLU;

    t95 = (x569*(x570-(x571^x572)));

    if (t95 != 18168998599453114368LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x573 = INT16_MAX;
	static int16_t x574 = -1;
	uint16_t x575 = 1508U;
	int8_t x576 = INT8_MAX;
	volatile int32_t t96 = 286225;

    t96 = (x573*(x574-(x575^x576)));

    if (t96 != -47053412) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x577 = 0U;
	uint32_t x578 = UINT32_MAX;
	static uint16_t x580 = 9U;
	uint32_t t97 = 52475739U;

    t97 = (x577*(x578-(x579^x580)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x581 = 42U;
	uint16_t x582 = 365U;
	static uint64_t x584 = 20LLU;
	static volatile uint64_t t98 = 15144359LLU;

    t98 = (x581*(x582-(x583^x584)));

    if (t98 != 13902LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x589 = INT16_MIN;
	static volatile int32_t x590 = INT32_MIN;
	static uint64_t x591 = 287LLU;
	static volatile int64_t x592 = INT64_MAX;
	uint64_t t99 = 541165917974983784LLU;

    t99 = (x589*(x590-(x591^x592)));

    if (t99 != 70368734740480LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x594 = 656152706729849374LLU;
	volatile uint32_t x595 = 42U;
	int32_t x596 = INT32_MIN;
	uint64_t t100 = 17LLU;

    t100 = (x593*(x594-(x595^x596)));

    if (t100 != 3936916227494194104LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x597 = -1;
	volatile uint16_t x598 = 18U;
	static int32_t x599 = INT32_MIN;
	static volatile uint64_t x600 = 872176687LLU;
	static volatile uint64_t t101 = 3257724364719245523LLU;

    t101 = (x597*(x598-(x599^x600)));

    if (t101 != 18446744072434244637LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x603 = 1623309504LLU;
	uint64_t t102 = 101828125921135LLU;

    t102 = (x601*(x602-(x603^x604)));

    if (t102 != 14960707101674962944LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x605 = 27536799U;
	static int8_t x606 = -1;
	uint64_t x607 = 41002885283768707LLU;
	int16_t x608 = -114;
	volatile uint64_t t103 = 3160LLU;

    t103 = (x605*(x606-(x607^x608)));

    if (t103 != 18345959659377973070LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	volatile uint32_t t104 = 8U;

    t104 = (x609*(x610-(x611^x612)));

    if (t104 != 65535U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x613 = INT16_MAX;
	static int8_t x614 = INT8_MIN;
	uint8_t x615 = 10U;
	static uint32_t x616 = 1661U;

    t105 = (x613*(x614-(x615^x616)));

    if (t105 != 4236543735U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x621 = UINT32_MAX;
	volatile int32_t x622 = -7850754;
	int16_t x623 = -4270;
	int32_t x624 = -22798;
	volatile uint32_t t106 = 2U;

    t106 = (x621*(x622-(x623^x624)));

    if (t106 != 7869602U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x626 = 6;
	uint32_t x627 = UINT32_MAX;
	int64_t x628 = -1LL;
	uint64_t t107 = 3196226LLU;

    t107 = (x625*(x626-(x627^x628)));

    if (t107 != 6050417500275632282LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x629 = INT8_MIN;
	static int64_t x631 = -57148941362LL;
	static uint8_t x632 = 23U;

    t108 = (x629*(x630-(x631^x632)));

    if (t108 != -7315064491264LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x633 = INT16_MIN;
	int16_t x634 = 1760;
	uint32_t x635 = 113090470U;
	uint64_t x636 = UINT64_MAX;
	uint64_t t109 = 19993462241LLU;

    t109 = (x633*(x634-(x635^x636)));

    if (t109 != 18446740367903326208LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x637 = 6U;
	int32_t x638 = INT32_MIN;
	static int64_t x640 = 2263665306LL;
	volatile int64_t t110 = 72004960642075544LL;

    t110 = (x637*(x638-(x639^x640)));

    if (t110 != 697089930LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x647 = -1;
	int64_t x648 = -1LL;
	volatile int64_t t111 = 1513729154LL;

    t111 = (x645*(x646-(x647^x648)));

    if (t111 != -4294967295LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x661 = INT64_MIN;
	volatile int64_t x662 = INT64_MIN;
	static volatile uint64_t x663 = 214453070762473LLU;

    t112 = (x661*(x662-(x663^x664)));

    if (t112 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x666 = UINT64_MAX;
	static uint64_t x667 = UINT64_MAX;
	int8_t x668 = INT8_MIN;
	volatile uint64_t t113 = 205LLU;

    t113 = (x665*(x666-(x667^x668)));

    if (t113 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x669 = -1LL;
	int16_t x670 = -1;
	int64_t x672 = -5853LL;
	int64_t t114 = -352739517587LL;

    t114 = (x669*(x670-(x671^x672)));

    if (t114 != -981890669LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x673 = -1;
	volatile uint16_t x674 = UINT16_MAX;
	int32_t x676 = INT32_MIN;
	int64_t t115 = -8486LL;

    t115 = (x673*(x674-(x675^x676)));

    if (t115 != -2967447898LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x677 = INT32_MIN;
	static int8_t x678 = -1;
	int32_t t116 = INT32_MIN;

    t116 = (x677*(x678-(x679^x680)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x683 = UINT32_MAX;
	uint16_t x684 = UINT16_MAX;
	volatile int64_t t117 = -952LL;

    t117 = (x681*(x682-(x683^x684)));

    if (t117 != 285192697050271380LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x693 = INT64_MIN;
	uint64_t x694 = 8LLU;
	static int8_t x695 = INT8_MIN;
	static volatile int16_t x696 = -46;
	static uint64_t t118 = 22147840229983656LLU;

    t118 = (x693*(x694-(x695^x696)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x697 = -3;
	int32_t x698 = -1;
	uint32_t x700 = 1218U;
	uint64_t t119 = 3588021725335LLU;

    t119 = (x697*(x698-(x699^x700)));

    if (t119 != 18446744073709547962LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x705 = INT32_MAX;
	int32_t x706 = 24;
	uint8_t x707 = 52U;
	volatile uint32_t t120 = 187730U;

    t120 = (x705*(x706-(x707^x708)));

    if (t120 != 2147483571U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x709 = 2U;
	int32_t x712 = -1;
	volatile uint64_t t121 = 1291656182868361LLU;

    t121 = (x709*(x710-(x711^x712)));

    if (t121 != 45297208LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x717 = INT16_MIN;
	static volatile int64_t x719 = -1LL;
	static uint8_t x720 = 5U;
	volatile int64_t t122 = -12462LL;

    t122 = (x717*(x718-(x719^x720)));

    if (t122 != 1802240LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x721 = INT32_MIN;
	static int64_t x722 = -1LL;
	int32_t x723 = 448100;
	uint64_t x724 = 1218595LLU;
	volatile uint64_t t123 = 7748911463LLU;

    t123 = (x721*(x722-(x723^x724)));

    if (t123 != 2857785339412480LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x733 = UINT32_MAX;
	volatile uint16_t x734 = 900U;
	uint64_t x735 = 2829LLU;
	static int64_t x736 = INT64_MIN;
	static volatile uint64_t t124 = 2969780758834LLU;

    t124 = (x733*(x734-(x735^x736)));

    if (t124 != 9223363751862863753LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x753 = -10;
	int16_t x754 = -17;
	uint8_t x755 = 4U;
	int64_t x756 = -5673LL;
	volatile int64_t t125 = 48943LL;

    t125 = (x753*(x754-(x755^x756)));

    if (t125 != -56600LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = 0U;
	static volatile uint64_t x760 = 15403238930260164LLU;
	volatile uint64_t t126 = 51406096LLU;

    t126 = (x757*(x758-(x759^x760)));

    if (t126 != 6671243275533451264LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x765 = INT16_MAX;
	uint64_t x766 = 473LLU;
	uint32_t x768 = 1161768U;
	static volatile uint64_t t127 = 8196205379LLU;

    t127 = (x765*(x766-(x767^x768)));

    if (t127 != 18446744035657463885LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x769 = UINT64_MAX;
	static uint64_t x770 = UINT64_MAX;
	static int8_t x771 = INT8_MIN;
	volatile int16_t x772 = -3271;
	uint64_t t128 = 5747289459196023LLU;

    t128 = (x769*(x770-(x771^x772)));

    if (t128 != 3258LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x773 = UINT64_MAX;
	int16_t x774 = INT16_MIN;
	int16_t x775 = INT16_MAX;

    t129 = (x773*(x774-(x775^x776)));

    if (t129 != 2147483648LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x777 = 1401813761202869701LLU;
	static uint8_t x778 = 1U;
	int64_t x779 = -1LL;
	uint32_t x780 = 521755U;
	static volatile uint64_t t130 = 401713763602LLU;

    t130 = (x777*(x778-(x779^x780)));

    if (t130 != 11186825415674561873LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x789 = 1073231074LLU;
	volatile int64_t x791 = -1LL;
	int32_t x792 = INT32_MIN;
	uint64_t t131 = 861132805978LLU;

    t131 = (x789*(x790-(x791^x792)));

    if (t131 != 16141997891769073664LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x794 = -1;
	volatile int8_t x795 = INT8_MIN;
	int16_t x796 = INT16_MAX;
	int32_t t132 = -391;

    t132 = (x793*(x794-(x795^x796)));

    if (t132 != 359040) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x797 = 363;
	uint16_t x799 = UINT16_MAX;
	int16_t x800 = 2522;
	volatile int32_t t133 = -13391981;

    t133 = (x797*(x798-(x799^x800)));

    if (t133 != -22851576) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x801 = INT64_MIN;
	uint64_t x802 = 388434358214LLU;
	int16_t x803 = -1;
	volatile int32_t x804 = 830755;
	volatile uint64_t t134 = 13166195932LLU;

    t134 = (x801*(x802-(x803^x804)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x805 = -1;
	static uint8_t x806 = UINT8_MAX;
	uint64_t x807 = 342363429532968494LLU;
	static int8_t x808 = INT8_MIN;

    t135 = (x805*(x806-(x807^x808)));

    if (t135 != 18104380644176582831LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x809 = 1;
	int32_t x810 = -1;
	int32_t x811 = -3973017;
	static int32_t x812 = -1;
	volatile int32_t t136 = -8715305;

    t136 = (x809*(x810-(x811^x812)));

    if (t136 != -3973017) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x813 = 2033U;
	volatile int64_t x814 = 571831LL;
	uint64_t x815 = UINT64_MAX;
	int16_t x816 = 95;
	uint64_t t137 = 12446588LLU;

    t137 = (x813*(x814-(x815^x816)));

    if (t137 != 1162727591LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x818 = -4654;
	uint16_t x819 = 7U;
	uint64_t x820 = 815504LLU;

    t138 = (x817*(x818-(x819^x820)));

    if (t138 != 820165LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x821 = -9;
	static int16_t x822 = 5;
	int16_t x823 = -1126;
	static int32_t t139 = -442235279;

    t139 = (x821*(x822-(x823^x824)));

    if (t139 != 10080) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x825 = -10;
	volatile int8_t x827 = INT8_MIN;

    t140 = (x825*(x826-(x827^x828)));

    if (t140 != -1290) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x829 = UINT8_MAX;
	static int32_t x830 = INT32_MIN;
	uint16_t x831 = 5321U;

    t141 = (x829*(x830-(x831^x832)));

    if (t141 != -1356855) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x834 = INT16_MIN;
	static int16_t x835 = INT16_MIN;
	uint64_t x836 = 117LLU;
	volatile uint64_t t142 = 5907LLU;

    t142 = (x833*(x834-(x835^x836)));

    if (t142 != 18446744073709536757LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x845 = 0U;
	int64_t x846 = INT64_MIN;
	int64_t x847 = INT64_MAX;
	int8_t x848 = INT8_MIN;
	volatile int64_t t143 = 465668071LL;

    t143 = (x845*(x846-(x847^x848)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x849 = 3U;
	static int32_t x851 = INT32_MIN;
	uint32_t t144 = 2093249U;

    t144 = (x849*(x850-(x851^x852)));

    if (t144 != 2147483258U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x854 = UINT32_MAX;
	uint8_t x855 = 126U;
	static int32_t x856 = INT32_MAX;
	volatile int64_t t145 = 1741002LL;

    t145 = (x853*(x854-(x855^x856)));

    if (t145 != -2147483774LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x857 = 2;
	int32_t x858 = 2268197;
	uint64_t x859 = 7636283265860LLU;
	uint64_t x860 = UINT64_MAX;

    t146 = (x857*(x858-(x859^x860)));

    if (t146 != 15272571068116LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x861 = 298937264;
	volatile uint64_t x862 = 6644537641744714LLU;
	int32_t x863 = INT32_MIN;
	int32_t x864 = 59;
	volatile uint64_t t147 = 337919390189912501LLU;

    t147 = (x861*(x862-(x863^x864)));

    if (t147 != 10483506222180826960LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x865 = UINT8_MAX;
	uint32_t x866 = 861397U;
	int32_t x867 = INT32_MIN;
	int64_t x868 = 3518456LL;
	static volatile int64_t t148 = 3504914476614071LL;

    t148 = (x865*(x866-(x867^x868)));

    if (t148 != 546930780195LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x869 = 5U;
	static uint64_t x870 = UINT64_MAX;
	int8_t x871 = INT8_MAX;
	int64_t x872 = 17759911181408823LL;
	uint64_t t149 = 14049374294LLU;

    t149 = (x869*(x870-(x871^x872)));

    if (t149 != 18357944517802507411LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x873 = INT16_MIN;
	int32_t x874 = -169;
	int8_t x875 = INT8_MIN;
	volatile int32_t t150 = 156;

    t150 = (x873*(x874-(x875^x876)));

    if (t150 != 1343488) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x877 = -1;
	uint16_t x878 = 30U;
	int64_t x879 = INT64_MIN;
	static volatile uint64_t t151 = 11398701990182074LLU;

    t151 = (x877*(x878-(x879^x880)));

    if (t151 != 9223372036854775785LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x881 = INT16_MIN;
	uint32_t x882 = UINT32_MAX;
	int64_t x883 = 96121451LL;
	static volatile uint16_t x884 = UINT16_MAX;
	volatile int64_t t152 = 60433707LL;

    t152 = (x881*(x882-(x883^x884)));

    if (t152 != -137588626522112LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x886 = 1U;
	uint64_t t153 = 121271636838721LLU;

    t153 = (x885*(x886-(x887^x888)));

    if (t153 != 13622LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x889 = UINT32_MAX;
	volatile int16_t x890 = -1;
	uint8_t x891 = 1U;

    t154 = (x889*(x890-(x891^x892)));

    if (t154 != 4294967295LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x901 = 7U;
	volatile uint32_t t155 = 1012321159U;

    t155 = (x901*(x902-(x903^x904)));

    if (t155 != 49U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x905 = 301U;
	static uint64_t x908 = 55LLU;
	uint64_t t156 = 563607311905042098LLU;

    t156 = (x905*(x906-(x907^x908)));

    if (t156 != 18446742780924412075LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x909 = INT64_MIN;
	uint64_t t157 = 2287118276292998522LLU;

    t157 = (x909*(x910-(x911^x912)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x913 = 4U;
	volatile int8_t x914 = INT8_MAX;
	uint32_t x915 = 24800261U;
	static int8_t x916 = 1;
	volatile uint32_t t158 = 3502U;

    t158 = (x913*(x914-(x915^x916)));

    if (t158 != 4195766764U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x917 = INT8_MAX;
	int64_t x918 = INT64_MIN;
	uint64_t x919 = 68LLU;
	uint64_t x920 = UINT64_MAX;
	uint64_t t159 = 0LLU;

    t159 = (x917*(x918-(x919^x920)));

    if (t159 != 9223372036854784571LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x934 = 131079685225778778LLU;
	int16_t x935 = INT16_MIN;
	int32_t x936 = INT32_MAX;
	uint64_t t160 = 1420559974772472LLU;

    t160 = (x933*(x934-(x935^x936)));

    if (t160 != 5111264509935783605LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x937 = 13U;
	int32_t x938 = 114529;
	int16_t x940 = -1;
	int32_t t161 = -2;

    t161 = (x937*(x938-(x939^x940)));

    if (t161 != 2340845) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x941 = UINT16_MAX;
	static int32_t x942 = -27;
	int16_t x943 = INT16_MIN;
	int64_t t162 = 3606LL;

    t162 = (x941*(x942-(x943^x944)));

    if (t162 != -2232071160749354565LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x945 = UINT32_MAX;
	int32_t x946 = INT32_MIN;
	int32_t x947 = -14;
	uint32_t x948 = UINT32_MAX;
	volatile uint32_t t163 = 3981U;

    t163 = (x945*(x946-(x947^x948)));

    if (t163 != 2147483661U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t t164 = 106LLU;

    t164 = (x949*(x950-(x951^x952)));

    if (t164 != 1073927870436665337LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x953 = 1U;
	uint16_t x954 = 92U;
	uint32_t x955 = 2165287U;
	volatile int64_t t165 = -17481690994688LL;

    t165 = (x953*(x954-(x955^x956)));

    if (t165 != 2165380LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x958 = -3405026539033LL;
	int32_t x959 = 9536;
	static int8_t x960 = 22;
	int64_t t166 = 1925853568LL;

    t166 = (x957*(x958-(x959^x960)));

    if (t166 != 3405026548591LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x961 = INT8_MAX;
	int16_t x962 = 3;
	uint64_t x963 = 40623142324348979LLU;
	static uint16_t x964 = 1U;

    t167 = (x961*(x962-(x963^x964)));

    if (t167 != 13287604998517231791LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x969 = UINT32_MAX;
	volatile int16_t x970 = -1;
	int32_t x971 = -1;
	int32_t x972 = 228;
	uint32_t t168 = 3000354U;

    t168 = (x969*(x970-(x971^x972)));

    if (t168 != 4294967068U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x974 = 1U;
	int32_t x975 = INT32_MIN;
	int32_t x976 = 4416020;
	volatile uint32_t t169 = 10282956U;

    t169 = (x973*(x974-(x975^x976)));

    if (t169 != 1586649235U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x977 = INT8_MIN;
	uint32_t x978 = 42907U;
	int64_t x979 = -1LL;
	static int16_t x980 = INT16_MIN;
	int64_t t170 = 2505982006415203874LL;

    t170 = (x977*(x978-(x979^x980)));

    if (t170 != -1297920LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x985 = -1;
	int8_t x986 = INT8_MAX;
	volatile int64_t t171 = -12LL;

    t171 = (x985*(x986-(x987^x988)));

    if (t171 != -127LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x997 = 56U;
	volatile uint8_t x998 = 13U;
	int64_t x999 = -1LL;
	volatile uint64_t x1000 = 1LLU;
	uint64_t t172 = 469683989893LLU;

    t172 = (x997*(x998-(x999^x1000)));

    if (t172 != 840LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1005 = 48;
	static uint32_t x1007 = 47332U;
	volatile int64_t x1008 = 3008LL;
	volatile int64_t t173 = 2149100529776LL;

    t173 = (x1005*(x1006-(x1007^x1008)));

    if (t173 != -3774144LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1009 = INT16_MIN;
	uint8_t x1010 = UINT8_MAX;
	uint32_t x1011 = UINT32_MAX;
	uint16_t x1012 = 163U;
	volatile uint32_t t174 = 362857446U;

    t174 = (x1009*(x1010-(x1011^x1012)));

    if (t174 != 4281237504U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1017 = 1;
	uint8_t x1018 = 15U;
	uint32_t x1020 = UINT32_MAX;
	volatile uint64_t t175 = 4344LLU;

    t175 = (x1017*(x1018-(x1019^x1020)));

    if (t175 != 18446744069414584366LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1024 = INT16_MIN;
	static int64_t t176 = -766734434LL;

    t176 = (x1021*(x1022-(x1023^x1024)));

    if (t176 != -1136983631234916540LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x1029 = UINT8_MAX;
	uint64_t x1030 = 135LLU;
	static uint8_t x1031 = 0U;
	int16_t x1032 = INT16_MIN;
	volatile uint64_t t177 = 1952584833385LLU;

    t177 = (x1029*(x1030-(x1031^x1032)));

    if (t177 != 8390265LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1033 = -1;
	uint16_t x1034 = 26681U;
	uint32_t x1035 = 1163008U;
	static volatile int8_t x1036 = -28;
	volatile uint32_t t178 = 62585764U;

    t178 = (x1033*(x1034-(x1035^x1036)));

    if (t178 != 4293777579U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1041 = 3524044U;
	volatile int8_t x1042 = INT8_MIN;
	int32_t x1043 = INT32_MIN;
	int16_t x1044 = -11983;
	uint32_t t179 = 569275656U;

    t179 = (x1041*(x1042-(x1043^x1044)));

    if (t179 != 3122835956U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1045 = UINT32_MAX;
	int16_t x1046 = INT16_MAX;
	uint8_t x1047 = 17U;
	volatile uint32_t t180 = 3395U;

    t180 = (x1045*(x1046-(x1047^x1048)));

    if (t180 != 4294934511U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1049 = INT64_MAX;
	uint64_t x1051 = 14LLU;
	uint16_t x1052 = UINT16_MAX;

    t181 = (x1049*(x1050-(x1051^x1052)));

    if (t181 != 9223372036854874097LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1053 = INT8_MIN;
	uint64_t x1054 = UINT64_MAX;
	volatile int16_t x1055 = INT16_MIN;
	static int16_t x1056 = INT16_MIN;

    t182 = (x1053*(x1054-(x1055^x1056)));

    if (t182 != 128LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1059 = INT64_MIN;
	volatile int64_t x1060 = INT64_MAX;
	volatile int64_t t183 = 4951993329LL;

    t183 = (x1057*(x1058-(x1059^x1060)));

    if (t183 != 274877906816LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1062 = 115409252U;
	volatile uint64_t x1063 = UINT64_MAX;
	int32_t x1064 = 122427;
	uint64_t t184 = 1331LLU;

    t184 = (x1061*(x1062-(x1063^x1064)));

    if (t184 != 7571368648800LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1065 = UINT64_MAX;
	int32_t x1066 = -3;
	int16_t x1067 = -1;
	uint32_t x1068 = UINT32_MAX;
	uint64_t t185 = 1967161968789LLU;

    t185 = (x1065*(x1066-(x1067^x1068)));

    if (t185 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1069 = -2185812LL;
	int32_t x1070 = INT32_MAX;
	static volatile uint16_t x1071 = 120U;
	static volatile int64_t t186 = 53216LL;

    t186 = (x1069*(x1070-(x1071^x1072)));

    if (t186 != -4693995230331744LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1073 = 4656640704263415LL;
	int64_t x1074 = -1LL;
	int32_t x1075 = INT32_MIN;
	volatile uint64_t t187 = 1157060977330852LLU;

    t187 = (x1073*(x1074-(x1075^x1076)));

    if (t187 != 12429061428881653760LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1085 = 8U;
	int16_t x1086 = -229;
	int8_t x1087 = INT8_MIN;
	int32_t t188 = 571884002;

    t188 = (x1085*(x1086-(x1087^x1088)));

    if (t188 != -2848) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1089 = -1;
	int64_t x1090 = INT64_MIN;
	volatile int16_t x1091 = -1;
	uint64_t x1092 = 23602093883406032LLU;
	uint64_t t189 = 565093754LLU;

    t189 = (x1089*(x1090-(x1091^x1092)));

    if (t189 != 9199769942971369775LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1093 = 32349708688685LLU;
	static int64_t x1094 = -44853048LL;
	int16_t x1095 = INT16_MAX;
	int16_t x1096 = INT16_MAX;
	uint64_t t190 = 1861LLU;

    t190 = (x1093*(x1094-(x1095^x1096)));

    if (t190 != 6309745223449215784LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1097 = -1;
	uint64_t x1099 = 45889237LLU;
	int16_t x1100 = INT16_MAX;
	volatile uint64_t t191 = 331649302311497LLU;

    t191 = (x1097*(x1098-(x1099^x1100)));

    if (t191 != 9223372036900669738LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1101 = 0;
	uint32_t x1102 = 1721368U;
	int8_t x1103 = -1;
	static uint8_t x1104 = 5U;
	volatile uint32_t t192 = 2U;

    t192 = (x1101*(x1102-(x1103^x1104)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1110 = -1;
	static int64_t x1112 = INT64_MIN;
	int64_t t193 = -174446689LL;

    t193 = (x1109*(x1110-(x1111^x1112)));

    if (t193 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1115 = 8U;
	static uint64_t t194 = 13523026517LLU;

    t194 = (x1113*(x1114-(x1115^x1116)));

    if (t194 != 18446744073709224026LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1117 = 133266LLU;
	int16_t x1118 = -10591;
	uint32_t x1119 = UINT32_MAX;
	int64_t x1120 = -1343354LL;
	static volatile uint64_t t195 = 28931300244236344LLU;

    t195 = (x1117*(x1118-(x1119^x1120)));

    if (t195 != 572192676967632LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1122 = 350001055U;
	int8_t x1123 = INT8_MAX;
	int8_t x1124 = -11;
	uint32_t t196 = 1933454U;

    t196 = (x1121*(x1122-(x1123^x1124)));

    if (t196 != 925755371U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1126 = INT64_MIN;
	uint16_t x1127 = 60U;
	uint64_t x1128 = 1120620467224796LLU;
	uint64_t t197 = 10401416LLU;

    t197 = (x1125*(x1126-(x1127^x1128)));

    if (t197 != 18273747396312694784LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1129 = -21LL;
	static int8_t x1131 = INT8_MIN;
	volatile uint64_t x1132 = UINT64_MAX;
	volatile uint64_t t198 = 237125814305133837LLU;

    t198 = (x1129*(x1130-(x1131^x1132)));

    if (t198 != 3297LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1133 = UINT64_MAX;
	volatile int32_t x1134 = INT32_MAX;
	uint8_t x1135 = 1U;
	uint8_t x1136 = 41U;
	volatile uint64_t t199 = 1201865LLU;

    t199 = (x1133*(x1134-(x1135^x1136)));

    if (t199 != 18446744071562068009LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

