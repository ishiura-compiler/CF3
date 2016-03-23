
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

int64_t x1 = INT64_MIN;
int8_t x4 = INT8_MIN;
int64_t t0 = INT64_MIN;
uint8_t x5 = UINT8_MAX;
uint16_t x7 = UINT16_MAX;
static uint64_t x13 = UINT64_MAX;
int64_t x15 = 143216687LL;
int8_t x16 = INT8_MIN;
int8_t x24 = INT8_MIN;
volatile int32_t t4 = -246263675;
int8_t x38 = INT8_MAX;
uint16_t x41 = 3105U;
uint64_t x46 = 261535875LLU;
int64_t x53 = INT64_MAX;
volatile uint64_t t14 = 232782318LLU;
uint16_t x78 = 7748U;
volatile uint16_t x88 = UINT16_MAX;
uint64_t x93 = UINT64_MAX;
int64_t x97 = INT64_MIN;
int16_t x109 = -112;
uint16_t x112 = 1U;
int8_t x122 = INT8_MAX;
static int64_t x125 = INT64_MIN;
uint16_t x136 = 542U;
uint16_t x139 = UINT16_MAX;
int8_t x143 = INT8_MIN;
int8_t x145 = -1;
volatile uint32_t x151 = UINT32_MAX;
uint16_t x155 = 313U;
int64_t t33 = -14LL;
static int8_t x157 = -1;
uint8_t x158 = UINT8_MAX;
int64_t x163 = INT64_MIN;
int8_t x166 = INT8_MIN;
int64_t x167 = INT64_MAX;
uint64_t x168 = 29295LLU;
uint64_t t38 = 31166868960394LLU;
int64_t x185 = INT64_MIN;
int16_t x186 = -51;
int8_t x187 = INT8_MIN;
volatile int8_t x198 = 1;
uint32_t t46 = 505506U;
uint8_t x215 = 14U;
uint32_t x216 = UINT32_MAX;
volatile uint32_t t47 = 3U;
uint64_t x217 = 11LLU;
volatile uint64_t t48 = 1047382844LLU;
volatile int32_t x222 = -8421;
static volatile uint64_t t50 = 10045273406554224LLU;
int8_t x243 = INT8_MIN;
int64_t x244 = -1LL;
int8_t x250 = INT8_MAX;
int64_t x270 = INT64_MIN;
volatile int32_t x273 = INT32_MIN;
static volatile int8_t x291 = INT8_MAX;
volatile int32_t x293 = 0;
uint32_t x299 = 92669907U;
uint8_t x301 = 0U;
uint64_t x303 = 350266698754LLU;
int16_t x304 = INT16_MIN;
uint16_t x306 = UINT16_MAX;
volatile uint32_t x308 = UINT32_MAX;
int64_t x309 = -1LL;
int16_t x310 = -1;
uint64_t x311 = UINT64_MAX;
int16_t x316 = INT16_MAX;
volatile int64_t t70 = -4858651LL;
int32_t t71 = 400;
static volatile int32_t x321 = INT32_MIN;
static uint32_t x322 = 246U;
volatile int64_t x332 = -118954LL;
volatile int32_t x340 = -1;
int8_t x343 = 4;
int8_t x345 = -47;
volatile int8_t x359 = -1;
int8_t x361 = -1;
int8_t x362 = INT8_MIN;
static int32_t t81 = 1049;
volatile int16_t x367 = INT16_MIN;
static uint8_t x381 = UINT8_MAX;
volatile int32_t t86 = 478;
int32_t x387 = -23175;
int16_t x397 = -1;
static volatile int8_t x399 = 41;
volatile int32_t t89 = 25687160;
int16_t x405 = -548;
int32_t x406 = -1;
int16_t x411 = INT16_MIN;
volatile int8_t x414 = 5;
uint32_t x418 = UINT32_MAX;
static volatile uint32_t t94 = 173689414U;
int32_t x422 = INT32_MAX;
int64_t x423 = 36661LL;
uint16_t x424 = 23U;
uint8_t x426 = 2U;
int64_t x431 = 78512488775298LL;
volatile uint8_t x432 = 14U;
volatile uint32_t t98 = 478254U;
static int32_t x437 = -3782;
static volatile int8_t x442 = 0;
static volatile int32_t x443 = INT32_MAX;
static volatile int32_t t100 = -8;
static uint64_t x448 = 297877126095770293LLU;
int8_t x449 = 16;
static uint16_t x452 = UINT16_MAX;
static int32_t x461 = INT32_MIN;
int32_t x462 = INT32_MAX;
volatile int32_t t105 = 1;
uint8_t x465 = 1U;
static uint32_t x474 = 3980U;
static uint64_t t108 = 24180193913525751LLU;
static volatile uint8_t x482 = 51U;
int16_t x492 = 101;
volatile uint64_t x496 = 484853062226474489LLU;
uint16_t x500 = UINT16_MAX;
int8_t x501 = 1;
volatile uint32_t x506 = 1557U;
int8_t x507 = -5;
int16_t x508 = 336;
uint32_t x513 = 51513U;
int32_t x517 = INT32_MIN;
uint32_t x518 = UINT32_MAX;
static uint8_t x520 = 3U;
volatile int16_t x540 = -1;
static int16_t x541 = INT16_MIN;
volatile uint16_t x547 = 81U;
uint64_t x548 = UINT64_MAX;
uint64_t t125 = 0LLU;
int32_t x549 = INT32_MIN;
int64_t t126 = 558399631915LL;
uint32_t x564 = UINT32_MAX;
uint64_t x571 = UINT64_MAX;
int8_t x580 = INT8_MIN;
uint16_t x583 = UINT16_MAX;
static uint16_t x586 = 50U;
uint64_t t134 = 205491588LLU;
static uint32_t x609 = 2970U;
static uint32_t x610 = UINT32_MAX;
int16_t x615 = INT16_MIN;
int16_t x618 = INT16_MIN;
uint64_t x620 = 22219780LLU;
uint64_t t138 = 978878496LLU;
uint32_t x624 = UINT32_MAX;
int64_t t139 = 33328536742LL;
int8_t x631 = INT8_MIN;
volatile int32_t t140 = 880;
uint8_t x634 = UINT8_MAX;
int64_t t142 = -14253868132323059LL;
static int64_t x641 = -6368956531313711LL;
uint8_t x651 = 30U;
volatile int64_t x656 = -28513984LL;
int64_t x662 = 598149734913781997LL;
int32_t x665 = -1;
int64_t t148 = -613619LL;
int8_t x670 = -1;
volatile uint64_t x671 = 32589LLU;
uint16_t x690 = 25U;
volatile int64_t x692 = -1LL;
int64_t x699 = -289467966LL;
uint8_t x704 = 2U;
volatile uint32_t t153 = 49269U;
static int64_t x721 = 142697756914144700LL;
uint16_t x723 = UINT16_MAX;
uint8_t x739 = 84U;
uint32_t x740 = 4356460U;
static uint64_t t160 = 3LLU;
volatile uint32_t x749 = 1182U;
int64_t t163 = -7936179LL;
int8_t x756 = INT8_MIN;
int32_t x763 = 2;
int32_t x764 = INT32_MIN;
int32_t t166 = -5962180;
int8_t x765 = INT8_MIN;
static uint32_t t167 = 406U;
int64_t x772 = -1LL;
uint8_t x781 = 13U;
volatile int32_t x787 = -119263742;
static volatile int16_t x788 = INT16_MIN;
int8_t x793 = INT8_MIN;
static volatile int8_t x796 = 21;
int64_t x810 = -1LL;
uint32_t x818 = 1U;
volatile int64_t t177 = 500447209243409328LL;
int64_t x822 = 5585712LL;
static volatile int64_t x834 = -1LL;
static volatile uint64_t t181 = 3040585627523369840LLU;
int32_t t182 = -84;
int32_t x849 = INT32_MIN;
int32_t x850 = -820;
int64_t x851 = INT64_MIN;
int64_t x855 = -1LL;
int32_t x856 = INT32_MAX;
int64_t t184 = 26507260LL;
int16_t x865 = INT16_MIN;
uint16_t x867 = 1605U;
uint64_t t186 = 1065128612LLU;
uint16_t x880 = 7U;
uint64_t x887 = UINT64_MAX;
volatile uint64_t x894 = 142190989511033930LLU;
uint16_t x895 = 16133U;
int32_t x900 = 0;
static volatile uint64_t t194 = 59665266904264534LLU;
int32_t x907 = INT32_MIN;
int32_t x908 = INT32_MAX;
int64_t t195 = -116357325700LL;
static int8_t x917 = INT8_MIN;
static int64_t x920 = INT64_MAX;
int64_t t198 = 1873257LL;
volatile uint16_t x923 = 1077U;
uint32_t x924 = 110791U;
uint32_t t199 = 187285384U;


void f0(void) {
    	int64_t x2 = -1LL;
	uint32_t x3 = UINT32_MAX;

    t0 = (x1&(x2%(x3+x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MAX;
	static int8_t x8 = -7;
	volatile int32_t t1 = -10;

    t1 = (x5&(x6%(x7+x8)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x14 = 6850310LLU;
	static uint64_t t2 = 148LLU;

    t2 = (x13&(x14%(x15+x16)));

    if (t2 != 6850310LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	static volatile int16_t x18 = INT16_MAX;
	uint32_t x19 = 1974U;
	int16_t x20 = -548;
	uint32_t t3 = 0U;

    t3 = (x17&(x18%(x19+x20)));

    if (t3 != 1395U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 0;
	int32_t x22 = INT32_MIN;
	int16_t x23 = -1;

    t4 = (x21&(x22%(x23+x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = 1054710314641451LL;
	uint64_t x30 = 1816404462LLU;
	volatile int32_t x31 = INT32_MIN;
	volatile int64_t x32 = INT64_MAX;
	volatile uint64_t t5 = 5869872788612976029LLU;

    t5 = (x29&(x30%(x31+x32)));

    if (t5 != 1610883114LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = 31U;
	int16_t x34 = -1;
	volatile int64_t x35 = -1LL;
	volatile int32_t x36 = 23562;
	static volatile int64_t t6 = -1630133LL;

    t6 = (x33&(x34%(x35+x36)));

    if (t6 != 31LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x37 = 97907925643809LL;
	int64_t x39 = 165918116LL;
	int32_t x40 = INT32_MIN;
	volatile int64_t t7 = 103322494070701LL;

    t7 = (x37&(x38%(x39+x40)));

    if (t7 != 33LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x42 = 5275613476272LLU;
	int16_t x43 = INT16_MIN;
	volatile int16_t x44 = 1;
	volatile uint64_t t8 = 228243802061LLU;

    t8 = (x41&(x42%(x43+x44)));

    if (t8 != 1056LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x47 = -1LL;
	static int32_t x48 = 6;
	volatile uint64_t t9 = 11496765681LLU;

    t9 = (x45&(x46%(x47+x48)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = -1;
	int32_t x50 = 3;
	uint16_t x51 = 3U;
	int32_t x52 = INT32_MIN;
	static int32_t t10 = -1;

    t10 = (x49&(x50%(x51+x52)));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = 256;
	int32_t x55 = 79;
	int16_t x56 = INT16_MIN;
	int64_t t11 = -59808253470082883LL;

    t11 = (x53&(x54%(x55+x56)));

    if (t11 != 256LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	volatile uint64_t x64 = 1760LLU;
	uint64_t t12 = 6LLU;

    t12 = (x61&(x62%(x63+x64)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = -1;
	int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MIN;
	volatile int32_t x68 = -13972;
	volatile int32_t t13 = -374;

    t13 = (x65&(x66%(x67+x68)));

    if (t13 != -4568) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	static int8_t x70 = 54;
	int16_t x71 = 5654;
	uint64_t x72 = 16779276529LLU;

    t14 = (x69&(x70%(x71+x72)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 0U;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = -241;

    t15 = (x73&(x74%(x75+x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x77 = 696591U;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 4064U;
	volatile uint32_t t16 = 11U;

    t16 = (x77&(x78%(x79+x80)));

    if (t16 != 4U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x81 = 135163628206719531LL;
	int64_t x82 = INT64_MAX;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = 13912062U;
	int64_t t17 = -68271768075493657LL;

    t17 = (x81&(x82%(x83+x84)));

    if (t17 != 13632041LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = INT32_MAX;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = -1;
	uint64_t t18 = 433521392139545663LLU;

    t18 = (x85&(x86%(x87+x88)));

    if (t18 != 15LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = 278U;
	static int16_t x91 = 0;
	static volatile uint8_t x92 = UINT8_MAX;
	uint32_t t19 = 61325647U;

    t19 = (x89&(x90%(x91+x92)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x94 = INT8_MIN;
	uint16_t x95 = 482U;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t20 = 29283LLU;

    t20 = (x93&(x94%(x95+x96)));

    if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x98 = 413LL;
	volatile uint16_t x99 = 141U;
	int16_t x100 = INT16_MIN;
	static int64_t t21 = 28380LL;

    t21 = (x97&(x98%(x99+x100)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = -3422;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = 10;
	volatile uint8_t x108 = 1U;
	volatile int64_t t22 = -13034065771186LL;

    t22 = (x105&(x106%(x107+x108)));

    if (t22 != -3424LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x110 = -231;
	int64_t x111 = -380786472LL;
	volatile int64_t t23 = -48906002922100LL;

    t23 = (x109&(x110%(x111+x112)));

    if (t23 != -240LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x113 = UINT32_MAX;
	volatile uint16_t x114 = 1U;
	uint32_t x115 = 8U;
	int16_t x116 = 183;
	uint32_t t24 = 123678605U;

    t24 = (x113&(x114%(x115+x116)));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x121 = INT16_MIN;
	static uint16_t x123 = 15140U;
	int32_t x124 = -1;
	int32_t t25 = -1;

    t25 = (x121&(x122%(x123+x124)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x126 = 26;
	int16_t x127 = -1;
	uint8_t x128 = 0U;
	volatile int64_t t26 = 193242637417622LL;

    t26 = (x125&(x126%(x127+x128)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = 534568651855253983LLU;
	int64_t x130 = INT64_MAX;
	static volatile int32_t x131 = 8342791;
	static int16_t x132 = 7974;
	volatile uint64_t t27 = 1688425516887445LLU;

    t27 = (x129&(x130%(x131+x132)));

    if (t27 != 4460877LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MIN;
	int32_t t28 = 62698;

    t28 = (x133&(x134%(x135+x136)));

    if (t28 != 7424) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 120848418158LLU;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t29 = 182485LLU;

    t29 = (x137&(x138%(x139+x140)));

    if (t29 != 24899LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x141 = 14U;
	uint16_t x142 = 506U;
	uint32_t x144 = UINT32_MAX;
	uint32_t t30 = 1732U;

    t30 = (x141&(x142%(x143+x144)));

    if (t30 != 10U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x146 = 7U;
	uint64_t x147 = 798LLU;
	int64_t x148 = -4524438209691LL;
	volatile uint64_t t31 = 120827386LLU;

    t31 = (x145&(x146%(x147+x148)));

    if (t31 != 7LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	int64_t x150 = 1687855575689LL;
	int16_t x152 = INT16_MIN;
	int64_t t32 = -680408722LL;

    t32 = (x149&(x150%(x151+x152)));

    if (t32 != 4241241105LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = -1LL;
	int32_t x154 = -1;
	int16_t x156 = INT16_MAX;

    t33 = (x153&(x154%(x155+x156)));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x159 = INT8_MAX;
	volatile int32_t x160 = 1;
	int32_t t34 = 17502570;

    t34 = (x157&(x158%(x159+x160)));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x161 = INT8_MAX;
	volatile uint64_t x162 = 822321LLU;
	int8_t x164 = INT8_MAX;
	static uint64_t t35 = 2717951294641671618LLU;

    t35 = (x161&(x162%(x163+x164)));

    if (t35 != 49LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x165 = INT8_MIN;
	volatile uint64_t t36 = 563979644154824LLU;

    t36 = (x165&(x166%(x167+x168)));

    if (t36 != 9223372036854746368LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x169 = 1;
	uint16_t x170 = 765U;
	volatile uint8_t x171 = UINT8_MAX;
	uint32_t x172 = 0U;
	static uint32_t t37 = 12U;

    t37 = (x169&(x170%(x171+x172)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x173 = UINT32_MAX;
	uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = 23600434058200LLU;
	uint16_t x176 = 11U;

    t38 = (x173&(x174%(x175+x176)));

    if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x177 = UINT16_MAX;
	volatile int32_t x178 = INT32_MIN;
	uint16_t x179 = 326U;
	int64_t x180 = -263475782LL;
	int64_t t39 = 1LL;

    t39 = (x177&(x178%(x179+x180)));

    if (t39 != 34816LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = 3354;
	uint16_t x182 = 2U;
	int16_t x183 = -1;
	int64_t x184 = 11487773621234096LL;
	int64_t t40 = 56550631006232691LL;

    t40 = (x181&(x182%(x183+x184)));

    if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x188 = INT8_MAX;
	volatile int64_t t41 = 104917840947795LL;

    t41 = (x185&(x186%(x187+x188)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x189 = INT8_MIN;
	static volatile int64_t x190 = 16339LL;
	uint8_t x191 = 6U;
	int16_t x192 = -1;
	static int64_t t42 = 28020122LL;

    t42 = (x189&(x190%(x191+x192)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x197 = INT16_MIN;
	uint64_t x199 = 437067043044LLU;
	uint8_t x200 = 13U;
	static uint64_t t43 = 1437293083LLU;

    t43 = (x197&(x198%(x199+x200)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = -1;
	static volatile int8_t x202 = 1;
	uint32_t x203 = 5U;
	uint8_t x204 = 0U;
	static volatile uint32_t t44 = 105876U;

    t44 = (x201&(x202%(x203+x204)));

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x205 = -1LL;
	static volatile int16_t x206 = -1;
	int32_t x207 = -1;
	static volatile uint32_t x208 = 3U;
	static int64_t t45 = 15921766LL;

    t45 = (x205&(x206%(x207+x208)));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = INT32_MAX;
	volatile int32_t x210 = INT32_MIN;
	int32_t x211 = -21374759;
	uint32_t x212 = UINT32_MAX;

    t46 = (x209&(x210%(x211+x212)));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x213 = 2U;
	int16_t x214 = INT16_MIN;

    t47 = (x213&(x214%(x215+x216)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x218 = 2367601U;
	int16_t x219 = 1;
	static int8_t x220 = INT8_MIN;

    t48 = (x217&(x218%(x219+x220)));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = 8073796077LL;
	volatile int8_t x223 = -1;
	uint16_t x224 = 8U;
	int64_t t49 = -4262751782406979LL;

    t49 = (x221&(x222%(x223+x224)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x233 = -1;
	volatile uint16_t x234 = 7U;
	static uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 47LLU;

    t50 = (x233&(x234%(x235+x236)));

    if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 4609LLU;
	volatile uint64_t t51 = 2LLU;

    t51 = (x237&(x238%(x239+x240)));

    if (t51 != 4325LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = 2U;
	volatile int64_t t52 = -1591573LL;

    t52 = (x241&(x242%(x243+x244)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = UINT8_MAX;
	uint16_t x246 = UINT16_MAX;
	static int32_t x247 = -430;
	int16_t x248 = 1;
	static volatile int32_t t53 = 22;

    t53 = (x245&(x246%(x247+x248)));

    if (t53 != 71) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = -3109242LL;
	volatile int64_t x251 = INT64_MIN;
	volatile uint8_t x252 = 5U;
	int64_t t54 = -36LL;

    t54 = (x249&(x250%(x251+x252)));

    if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1946;
	static uint16_t x256 = 84U;
	int32_t t55 = -110;

    t55 = (x253&(x254%(x255+x256)));

    if (t55 != -1114) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = -1;
	int32_t x258 = -1;
	uint64_t x259 = 40031887811614432LLU;
	int32_t x260 = -25984;
	uint64_t t56 = 17203737880182281LLU;

    t56 = (x257&(x258%(x259+x260)));

    if (t56 != 32075680378865535LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	volatile int16_t x263 = -1;
	volatile int8_t x264 = INT8_MIN;
	int32_t t57 = INT32_MIN;

    t57 = (x261&(x262%(x263+x264)));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x265 = INT8_MAX;
	volatile int32_t x266 = -912891;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -2534LL;
	volatile int64_t t58 = -2LL;

    t58 = (x265&(x266%(x267+x268)));

    if (t58 != 123LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x269 = 4126585U;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;
	int64_t t59 = -89331170724LL;

    t59 = (x269&(x270%(x271+x272)));

    if (t59 != 4126465LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x274 = 5;
	int32_t x275 = -1;
	static int32_t x276 = -1;
	volatile int32_t t60 = 0;

    t60 = (x273&(x274%(x275+x276)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x277 = INT64_MAX;
	uint32_t x278 = 24U;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;
	volatile int64_t t61 = 2811116350722904741LL;

    t61 = (x277&(x278%(x279+x280)));

    if (t61 != 24LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = 61;
	int8_t x282 = INT8_MIN;
	int64_t x283 = -85211094LL;
	int8_t x284 = INT8_MIN;
	int64_t t62 = -3349597935422697LL;

    t62 = (x281&(x282%(x283+x284)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x285 = INT16_MAX;
	uint8_t x286 = 36U;
	static uint8_t x287 = UINT8_MAX;
	int16_t x288 = 6809;
	int32_t t63 = 3918602;

    t63 = (x285&(x286%(x287+x288)));

    if (t63 != 36) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x289 = 472U;
	static uint16_t x290 = UINT16_MAX;
	int64_t x292 = -25562245284LL;
	volatile int64_t t64 = -70146395418632LL;

    t64 = (x289&(x290%(x291+x292)));

    if (t64 != 472LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x294 = 5U;
	uint8_t x295 = UINT8_MAX;
	uint8_t x296 = 2U;
	int32_t t65 = 1063097115;

    t65 = (x293&(x294%(x295+x296)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x297 = 8003904LLU;
	volatile int8_t x298 = -21;
	int64_t x300 = INT64_MIN;
	uint64_t t66 = 148451379LLU;

    t66 = (x297&(x298%(x299+x300)));

    if (t66 != 8003904LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x302 = INT16_MAX;
	volatile uint64_t t67 = 2402557648934LLU;

    t67 = (x301&(x302%(x303+x304)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x305 = -11;
	int32_t x307 = -8562;
	volatile uint32_t t68 = 37175240U;

    t68 = (x305&(x306%(x307+x308)));

    if (t68 != 65525U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x312 = 458148LL;
	uint64_t t69 = 132253207348814LLU;

    t69 = (x309&(x310%(x311+x312)));

    if (t69 != 362061LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	static volatile int64_t x315 = -1LL;

    t70 = (x313&(x314%(x315+x316)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x317 = -3;
	volatile int32_t x318 = -488713081;
	static int16_t x319 = -6262;
	volatile int8_t x320 = 0;

    t71 = (x317&(x318%(x319+x320)));

    if (t71 != -1555) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;
	volatile uint32_t t72 = 415U;

    t72 = (x321&(x322%(x323+x324)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = -1;
	static volatile uint16_t x328 = 396U;
	static volatile int32_t t73 = 69696224;

    t73 = (x325&(x326%(x327+x328)));

    if (t73 != -183) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x329 = INT32_MIN;
	int8_t x330 = -1;
	int16_t x331 = INT16_MIN;
	volatile int64_t t74 = 604981443161274LL;

    t74 = (x329&(x330%(x331+x332)));

    if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = 5;
	int32_t x338 = INT32_MAX;
	uint16_t x339 = 329U;
	int32_t t75 = -108803;

    t75 = (x337&(x338%(x339+x340)));

    if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = INT32_MIN;
	volatile uint64_t x342 = UINT64_MAX;
	int64_t x344 = INT64_MIN;
	static volatile uint64_t t76 = 5247273454LLU;

    t76 = (x341&(x342%(x343+x344)));

    if (t76 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = -1;
	static int16_t x348 = INT16_MIN;
	static volatile uint64_t t77 = 2580989LLU;

    t77 = (x345&(x346%(x347+x348)));

    if (t77 != 32768LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x349 = UINT32_MAX;
	int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	static uint64_t x352 = 62417LLU;
	volatile uint64_t t78 = 406216488173LLU;

    t78 = (x349&(x350%(x351+x352)));

    if (t78 != 56624LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 1555865789891LLU;
	int16_t x355 = -1;
	int8_t x356 = -30;
	static volatile uint64_t t79 = 11628500573598723LLU;

    t79 = (x353&(x354%(x355+x356)));

    if (t79 != 1555865789891LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x357 = 44499362004712725LL;
	int16_t x358 = -1;
	static int8_t x360 = INT8_MIN;
	static int64_t t80 = -7917LL;

    t80 = (x357&(x358%(x359+x360)));

    if (t80 != 44499362004712725LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x363 = 6U;
	static volatile uint8_t x364 = UINT8_MAX;

    t81 = (x361&(x362%(x363+x364)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x365 = 29U;
	int64_t x366 = INT64_MAX;
	uint8_t x368 = UINT8_MAX;
	int64_t t82 = -10355676LL;

    t82 = (x365&(x366%(x367+x368)));

    if (t82 != 5LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 1U;
	volatile int16_t x371 = INT16_MAX;
	static int64_t x372 = -5LL;
	volatile int64_t t83 = 43760381342112LL;

    t83 = (x369&(x370%(x371+x372)));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x373 = -1LL;
	int64_t x374 = -13434384422LL;
	uint32_t x375 = 66U;
	uint64_t x376 = 15448909712424LLU;
	uint64_t t84 = 6779685LLU;

    t84 = (x373&(x374%(x375+x376)));

    if (t84 != 4315895907674LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x377 = UINT32_MAX;
	int8_t x378 = -17;
	int64_t x379 = INT64_MAX;
	static volatile int64_t x380 = -1057LL;
	volatile int64_t t85 = 47481017985LL;

    t85 = (x377&(x378%(x379+x380)));

    if (t85 != 4294967279LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x382 = -1;
	volatile int16_t x383 = INT16_MAX;
	static int8_t x384 = INT8_MIN;

    t86 = (x381&(x382%(x383+x384)));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = -1;
	static int16_t x386 = INT16_MAX;
	int64_t x388 = -2677010014907LL;
	int64_t t87 = 129LL;

    t87 = (x385&(x386%(x387+x388)));

    if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x393 = 3U;
	int64_t x394 = 1628672963486LL;
	static uint16_t x395 = UINT16_MAX;
	static volatile int64_t x396 = 0LL;
	int64_t t88 = -1908053LL;

    t88 = (x393&(x394%(x395+x396)));

    if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x398 = 116U;
	int16_t x400 = INT16_MIN;

    t89 = (x397&(x398%(x399+x400)));

    if (t89 != 116) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint16_t x402 = 346U;
	uint16_t x403 = UINT16_MAX;
	uint8_t x404 = 1U;
	volatile uint32_t t90 = 64U;

    t90 = (x401&(x402%(x403+x404)));

    if (t90 != 346U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x407 = INT16_MIN;
	int32_t x408 = -1;
	volatile int32_t t91 = -10339354;

    t91 = (x405&(x406%(x407+x408)));

    if (t91 != -548) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x409 = 114391LLU;
	static int32_t x410 = -1;
	static volatile int32_t x412 = -1;
	uint64_t t92 = 1047883964LLU;

    t92 = (x409&(x410%(x411+x412)));

    if (t92 != 114391LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x413 = 0U;
	static int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	int32_t t93 = -777053;

    t93 = (x413&(x414%(x415+x416)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	int16_t x420 = -1;

    t94 = (x417&(x418%(x419+x420)));

    if (t94 != 128U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x421 = 19094249LLU;
	volatile uint64_t t95 = 60LLU;

    t95 = (x421&(x422%(x423+x424)));

    if (t95 != 2281LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = INT16_MAX;
	volatile int64_t x427 = INT64_MIN;
	int64_t x428 = 39505463LL;
	volatile int64_t t96 = -5LL;

    t96 = (x425&(x426%(x427+x428)));

    if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x429 = INT8_MIN;
	int16_t x430 = -1;
	volatile int64_t t97 = 2686957374470487273LL;

    t97 = (x429&(x430%(x431+x432)));

    if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x433 = -1;
	volatile uint32_t x434 = UINT32_MAX;
	int16_t x435 = INT16_MIN;
	static uint8_t x436 = UINT8_MAX;

    t98 = (x433&(x434%(x435+x436)));

    if (t98 != 32512U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x438 = 1U;
	int8_t x439 = 14;
	int8_t x440 = -1;
	volatile uint32_t t99 = 3U;

    t99 = (x437&(x438%(x439+x440)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = 1;
	int32_t x444 = -1;

    t100 = (x441&(x442%(x443+x444)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x445 = 12233U;
	int32_t x446 = INT32_MAX;
	int32_t x447 = -2796249;
	uint64_t t101 = 921667056404LLU;

    t101 = (x445&(x446%(x447+x448)));

    if (t101 != 12233LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x450 = INT32_MAX;
	volatile int8_t x451 = -20;
	int32_t t102 = 3;

    t102 = (x449&(x450%(x451+x452)));

    if (t102 != 16) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x453 = UINT8_MAX;
	uint8_t x454 = 0U;
	uint16_t x455 = 15579U;
	uint8_t x456 = 5U;
	volatile int32_t t103 = -5661783;

    t103 = (x453&(x454%(x455+x456)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x457 = INT16_MAX;
	uint64_t x458 = 59LLU;
	uint8_t x459 = 2U;
	static int64_t x460 = INT64_MIN;
	volatile uint64_t t104 = 422LLU;

    t104 = (x457&(x458%(x459+x460)));

    if (t104 != 59LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x463 = 51;
	uint8_t x464 = 1U;

    t105 = (x461&(x462%(x463+x464)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x466 = UINT8_MAX;
	volatile int8_t x467 = INT8_MIN;
	int32_t x468 = -268296641;
	int32_t t106 = 32654;

    t106 = (x465&(x466%(x467+x468)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x469 = 127941U;
	int32_t x470 = INT32_MIN;
	int8_t x471 = -5;
	int8_t x472 = 2;
	uint32_t t107 = 1586U;

    t107 = (x469&(x470%(x471+x472)));

    if (t107 != 127940U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x473 = UINT16_MAX;
	uint8_t x475 = UINT8_MAX;
	uint64_t x476 = 4220378989505LLU;

    t108 = (x473&(x474%(x475+x476)));

    if (t108 != 3980LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x477 = -1LL;
	static uint64_t x478 = 96502956LLU;
	int8_t x479 = INT8_MAX;
	uint32_t x480 = UINT32_MAX;
	uint64_t t109 = 227223430503211346LLU;

    t109 = (x477&(x478%(x479+x480)));

    if (t109 != 60LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x481 = -7567LL;
	int32_t x483 = -1;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t110 = -91962LL;

    t110 = (x481&(x482%(x483+x484)));

    if (t110 != 49LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x489 = -15LL;
	int32_t x490 = INT32_MIN;
	int8_t x491 = -1;
	int64_t t111 = 2466726383916LL;

    t111 = (x489&(x490%(x491+x492)));

    if (t111 != -48LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x493 = -180;
	int16_t x494 = 1408;
	uint64_t x495 = 732LLU;
	uint64_t t112 = 6855895383LLU;

    t112 = (x493&(x494%(x495+x496)));

    if (t112 != 1280LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x497 = UINT8_MAX;
	uint16_t x498 = UINT16_MAX;
	uint64_t x499 = UINT64_MAX;
	volatile uint64_t t113 = 49148758066382898LLU;

    t113 = (x497&(x498%(x499+x500)));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x502 = 154131;
	static uint32_t x503 = 1071632445U;
	uint16_t x504 = UINT16_MAX;
	volatile uint32_t t114 = 367387U;

    t114 = (x501&(x502%(x503+x504)));

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x505 = -220891;
	uint32_t t115 = 1677207196U;

    t115 = (x505&(x506%(x507+x508)));

    if (t115 != 33U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = INT32_MIN;
	volatile uint16_t x510 = UINT16_MAX;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = 680U;
	static volatile int64_t t116 = 464559LL;

    t116 = (x509&(x510%(x511+x512)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x514 = UINT64_MAX;
	int64_t x515 = INT64_MAX;
	int8_t x516 = INT8_MIN;
	uint64_t t117 = 36753208511390694LLU;

    t117 = (x513&(x514%(x515+x516)));

    if (t117 != 257LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x519 = UINT64_MAX;
	uint64_t t118 = 2071608717500LLU;

    t118 = (x517&(x518%(x519+x520)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x521 = -1;
	int16_t x522 = -1;
	int32_t x523 = -359;
	int8_t x524 = -11;
	static int32_t t119 = -1;

    t119 = (x521&(x522%(x523+x524)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = -1;
	uint64_t x526 = UINT64_MAX;
	static uint8_t x527 = 12U;
	int32_t x528 = INT32_MIN;
	volatile uint64_t t120 = 138765773294LLU;

    t120 = (x525&(x526%(x527+x528)));

    if (t120 != 2147483635LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x529 = 52U;
	int16_t x530 = 273;
	int16_t x531 = -1;
	int16_t x532 = 119;
	static volatile int32_t t121 = 72118;

    t121 = (x529&(x530%(x531+x532)));

    if (t121 != 36) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MIN;
	int16_t x535 = -124;
	static uint32_t x536 = 35005U;
	uint32_t t122 = 1312U;

    t122 = (x533&(x534%(x535+x536)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x537 = 23U;
	int64_t x538 = INT64_MIN;
	uint16_t x539 = 1519U;
	int64_t t123 = -1LL;

    t123 = (x537&(x538%(x539+x540)));

    if (t123 != 22LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x542 = 14U;
	int16_t x543 = 73;
	static uint16_t x544 = 922U;
	volatile int32_t t124 = 6;

    t124 = (x541&(x542%(x543+x544)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x545 = 20U;
	static int64_t x546 = 9749518240793LL;

    t125 = (x545&(x546%(x547+x548)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x550 = 0U;
	uint8_t x551 = 8U;
	int64_t x552 = -1LL;

    t126 = (x549&(x550%(x551+x552)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x561 = INT32_MAX;
	volatile uint8_t x562 = 108U;
	int32_t x563 = 31887626;
	volatile uint32_t t127 = 230U;

    t127 = (x561&(x562%(x563+x564)));

    if (t127 != 108U) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x569 = 24LL;
	static uint16_t x570 = 11U;
	volatile uint8_t x572 = 14U;
	volatile uint64_t t128 = 28LLU;

    t128 = (x569&(x570%(x571+x572)));

    if (t128 != 8LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x573 = -31LL;
	static uint32_t x574 = 130428U;
	int8_t x575 = INT8_MAX;
	static int16_t x576 = INT16_MAX;
	int64_t t129 = -1945253LL;

    t129 = (x573&(x574%(x575+x576)));

    if (t129 != 31744LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x577 = 1U;
	uint64_t x578 = 838032LLU;
	static int16_t x579 = INT16_MAX;
	volatile uint64_t t130 = 4086476LLU;

    t130 = (x577&(x578%(x579+x580)));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x581 = INT32_MIN;
	int64_t x582 = INT64_MAX;
	int16_t x584 = INT16_MAX;
	int64_t t131 = 11866965275LL;

    t131 = (x581&(x582%(x583+x584)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x585 = 7;
	int32_t x587 = INT32_MIN;
	uint32_t x588 = UINT32_MAX;
	volatile uint32_t t132 = 209077U;

    t132 = (x585&(x586%(x587+x588)));

    if (t132 != 2U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x593 = 1U;
	static int8_t x594 = INT8_MIN;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = INT8_MIN;
	static volatile int32_t t133 = -491;

    t133 = (x593&(x594%(x595+x596)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x598 = -12285344;
	uint64_t x599 = 280328LLU;
	int32_t x600 = -1;

    t134 = (x597&(x598%(x599+x600)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 33U;
	int8_t x607 = INT8_MAX;
	static volatile int16_t x608 = INT16_MAX;
	static volatile uint32_t t135 = 15208U;

    t135 = (x605&(x606%(x607+x608)));

    if (t135 != 33U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x611 = 452647LL;
	int8_t x612 = INT8_MIN;
	volatile int64_t t136 = -2481386311833456LL;

    t136 = (x609&(x610%(x611+x612)));

    if (t136 != 2970LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x613 = INT32_MIN;
	uint8_t x614 = UINT8_MAX;
	uint16_t x616 = 100U;
	int32_t t137 = -3139732;

    t137 = (x613&(x614%(x615+x616)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x617 = -10024311306LL;
	volatile uint64_t x619 = UINT64_MAX;

    t138 = (x617&(x618%(x619+x620)));

    if (t138 != 8388866LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x621 = 0U;
	int64_t x622 = INT64_MIN;
	static uint32_t x623 = 2997U;

    t139 = (x621&(x622%(x623+x624)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x629 = -4;
	static volatile int32_t x630 = INT32_MIN;
	int8_t x632 = INT8_MAX;

    t140 = (x629&(x630%(x631+x632)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x635 = INT16_MAX;
	uint8_t x636 = UINT8_MAX;
	static int32_t t141 = 0;

    t141 = (x633&(x634%(x635+x636)));

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x637 = 51477280LL;
	uint8_t x638 = 0U;
	uint16_t x639 = 1U;
	static int32_t x640 = INT32_MIN;

    t142 = (x637&(x638%(x639+x640)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x642 = INT32_MAX;
	int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MIN;
	int64_t t143 = 1789934994516497022LL;

    t143 = (x641&(x642%(x643+x644)));

    if (t143 != 29649LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = 25983260729LLU;
	int16_t x647 = INT16_MIN;
	uint32_t x648 = UINT32_MAX;
	uint64_t t144 = 159731082007939462LLU;

    t144 = (x645&(x646%(x647+x648)));

    if (t144 != 213653567LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x649 = UINT8_MAX;
	uint32_t x650 = UINT32_MAX;
	volatile int32_t x652 = 3;
	uint32_t t145 = 8U;

    t145 = (x649&(x650%(x651+x652)));

    if (t145 != 3U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x653 = 1240214;
	int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MAX;
	static volatile int64_t t146 = 170036118913925LL;

    t146 = (x653&(x654%(x655+x656)));

    if (t146 != 59414LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x661 = -1LL;
	static volatile uint16_t x663 = UINT16_MAX;
	volatile int64_t x664 = -1LL;
	static volatile int64_t t147 = 70LL;

    t147 = (x661&(x662%(x663+x664)));

    if (t147 != 47987LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x666 = -1;
	int16_t x667 = -118;
	int64_t x668 = -101307LL;

    t148 = (x665&(x666%(x667+x668)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x669 = 6427U;
	int64_t x672 = -1LL;
	volatile uint64_t t149 = 174439678110090028LLU;

    t149 = (x669&(x670%(x671+x672)));

    if (t149 != 2067LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile uint16_t x682 = 904U;
	uint32_t x683 = 32139122U;
	volatile int64_t x684 = INT64_MIN;
	uint64_t t150 = 133441754577368LLU;

    t150 = (x681&(x682%(x683+x684)));

    if (t150 != 904LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x689 = INT64_MIN;
	int8_t x691 = INT8_MAX;
	volatile int64_t t151 = 17702813831LL;

    t151 = (x689&(x690%(x691+x692)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = 1;
	uint16_t x700 = 424U;
	int64_t t152 = 1768LL;

    t152 = (x697&(x698%(x699+x700)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x701 = 2128571552U;
	volatile int16_t x702 = INT16_MIN;
	uint8_t x703 = UINT8_MAX;

    t153 = (x701&(x702%(x703+x704)));

    if (t153 != 2128571424U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x705 = 55088177LLU;
	volatile uint32_t x706 = UINT32_MAX;
	static int32_t x707 = -28;
	int16_t x708 = INT16_MAX;
	static volatile uint64_t t154 = 12LLU;

    t154 = (x705&(x706%(x707+x708)));

    if (t154 != 1057LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x713 = -1;
	uint8_t x714 = 0U;
	volatile int16_t x715 = INT16_MIN;
	uint16_t x716 = 172U;
	volatile int32_t t155 = -3;

    t155 = (x713&(x714%(x715+x716)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = 3123U;
	static uint16_t x719 = 353U;
	static int16_t x720 = INT16_MAX;
	volatile int32_t t156 = 10627992;

    t156 = (x717&(x718%(x719+x720)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x722 = 0U;
	static int32_t x724 = INT32_MIN;
	int64_t t157 = 2196LL;

    t157 = (x721&(x722%(x723+x724)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x729 = INT32_MIN;
	uint32_t x730 = 21552U;
	static int64_t x731 = -357212436294234LL;
	uint16_t x732 = UINT16_MAX;
	int64_t t158 = 23547267929340LL;

    t158 = (x729&(x730%(x731+x732)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x733 = -1;
	volatile int64_t x734 = -1LL;
	static int64_t x735 = 48360647875442LL;
	int16_t x736 = INT16_MIN;
	volatile int64_t t159 = -107883849780976LL;

    t159 = (x733&(x734%(x735+x736)));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x737 = INT64_MAX;
	uint64_t x738 = 45684469170LLU;

    t160 = (x737&(x738%(x739+x740)));

    if (t160 != 1748786LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x741 = 44474828U;
	volatile uint8_t x742 = UINT8_MAX;
	int16_t x743 = 0;
	static int8_t x744 = -1;
	static volatile uint32_t t161 = 6633U;

    t161 = (x741&(x742%(x743+x744)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x745 = UINT64_MAX;
	volatile int64_t x746 = -15082228LL;
	volatile int16_t x747 = INT16_MIN;
	uint32_t x748 = 346U;
	volatile uint64_t t162 = 7871815LLU;

    t162 = (x745&(x746%(x747+x748)));

    if (t162 != 18446744073694469388LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x750 = 1655;
	volatile int64_t x751 = 1043LL;
	uint16_t x752 = 3325U;

    t163 = (x749&(x750%(x751+x752)));

    if (t163 != 1046LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x753 = INT64_MIN;
	volatile int16_t x754 = INT16_MIN;
	int32_t x755 = 158101;
	int64_t t164 = INT64_MIN;

    t164 = (x753&(x754%(x755+x756)));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x757 = -253952LL;
	uint8_t x758 = 3U;
	int16_t x759 = INT16_MIN;
	static int8_t x760 = 13;
	static int64_t t165 = -4166550357LL;

    t165 = (x757&(x758%(x759+x760)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x761 = INT8_MAX;
	int16_t x762 = INT16_MAX;

    t166 = (x761&(x762%(x763+x764)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x766 = 3U;
	volatile uint32_t x767 = UINT32_MAX;
	volatile int32_t x768 = INT32_MIN;

    t167 = (x765&(x766%(x767+x768)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x769 = 61705794521371LLU;
	static int32_t x770 = -2983;
	static volatile int16_t x771 = INT16_MIN;
	static uint64_t t168 = 2384LLU;

    t168 = (x769&(x770%(x771+x772)));

    if (t168 != 61705794519065LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint32_t x774 = UINT32_MAX;
	int64_t x775 = 10LL;
	static uint32_t x776 = UINT32_MAX;
	int64_t t169 = 28714927542358487LL;

    t169 = (x773&(x774%(x775+x776)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x777 = 0U;
	int16_t x778 = INT16_MIN;
	volatile int8_t x779 = INT8_MAX;
	static int16_t x780 = -1;
	volatile int32_t t170 = -52;

    t170 = (x777&(x778%(x779+x780)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x782 = 133LLU;
	int16_t x783 = -1;
	uint32_t x784 = 345175424U;
	uint64_t t171 = 14373946862LLU;

    t171 = (x781&(x782%(x783+x784)));

    if (t171 != 5LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x785 = UINT32_MAX;
	int8_t x786 = -33;
	static volatile uint32_t t172 = 2U;

    t172 = (x785&(x786%(x787+x788)));

    if (t172 != 4294967263U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x794 = -1;
	volatile uint8_t x795 = 0U;
	int32_t t173 = -1260655;

    t173 = (x793&(x794%(x795+x796)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x797 = 12487772332959840LLU;
	volatile int32_t x798 = INT32_MIN;
	uint16_t x799 = UINT16_MAX;
	static volatile int64_t x800 = -1035876LL;
	uint64_t t174 = 3968422977868LLU;

    t174 = (x797&(x798%(x799+x800)));

    if (t174 != 12487772332894208LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x809 = INT32_MAX;
	volatile int8_t x811 = INT8_MIN;
	static int16_t x812 = 1;
	static volatile int64_t t175 = -3562090407230874LL;

    t175 = (x809&(x810%(x811+x812)));

    if (t175 != 2147483647LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x813 = INT16_MIN;
	int16_t x814 = INT16_MIN;
	uint16_t x815 = 0U;
	uint16_t x816 = UINT16_MAX;
	static volatile int32_t t176 = 0;

    t176 = (x813&(x814%(x815+x816)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x817 = -5533LL;
	static int16_t x819 = -1;
	uint32_t x820 = 59255220U;

    t177 = (x817&(x818%(x819+x820)));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x821 = UINT8_MAX;
	static volatile int64_t x823 = -737906450173277LL;
	uint32_t x824 = 61U;
	static volatile int64_t t178 = 1375986994LL;

    t178 = (x821&(x822%(x823+x824)));

    if (t178 != 48LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x829 = INT8_MIN;
	uint64_t x830 = 210422979843717LLU;
	int32_t x831 = -46882;
	int8_t x832 = 34;
	uint64_t t179 = 106767570278LLU;

    t179 = (x829&(x830%(x831+x832)));

    if (t179 != 210422979843712LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x833 = 13891429LLU;
	uint16_t x835 = 4U;
	int16_t x836 = -1;
	volatile uint64_t t180 = 6993779744148963LLU;

    t180 = (x833&(x834%(x835+x836)));

    if (t180 != 13891429LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x837 = UINT32_MAX;
	volatile int32_t x838 = INT32_MIN;
	int64_t x839 = INT64_MIN;
	uint64_t x840 = UINT64_MAX;

    t181 = (x837&(x838%(x839+x840)));

    if (t181 != 2147483649LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x841 = -47949529;
	int8_t x842 = 1;
	int16_t x843 = 815;
	uint16_t x844 = 600U;

    t182 = (x841&(x842%(x843+x844)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x852 = INT64_MAX;
	volatile int64_t t183 = -55334307LL;

    t183 = (x849&(x850%(x851+x852)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x853 = 14454U;
	volatile int16_t x854 = -1;

    t184 = (x853&(x854%(x855+x856)));

    if (t184 != 14454LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x861 = 87318676U;
	int16_t x862 = 10454;
	int32_t x863 = -22268049;
	volatile uint8_t x864 = 10U;
	uint32_t t185 = 694454624U;

    t185 = (x861&(x862%(x863+x864)));

    if (t185 != 8340U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x866 = INT64_MIN;
	uint64_t x868 = 2192961488765891LLU;

    t186 = (x865&(x866%(x867+x868)));

    if (t186 != 1968976587423744LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x869 = -1LL;
	uint8_t x870 = UINT8_MAX;
	volatile int8_t x871 = INT8_MIN;
	uint8_t x872 = 26U;
	int64_t t187 = 123LL;

    t187 = (x869&(x870%(x871+x872)));

    if (t187 != 51LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x873 = 36391450320LL;
	int8_t x874 = -4;
	uint64_t x875 = UINT64_MAX;
	int16_t x876 = -14762;
	static volatile uint64_t t188 = 559LLU;

    t188 = (x873&(x874%(x875+x876)));

    if (t188 != 12416LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x877 = 217;
	int32_t x878 = 80079;
	int16_t x879 = INT16_MIN;
	volatile int32_t t189 = -401513652;

    t189 = (x877&(x878%(x879+x880)));

    if (t189 != 217) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x885 = 5;
	int32_t x886 = INT32_MIN;
	volatile int8_t x888 = INT8_MIN;
	volatile uint64_t t190 = 50223660600317490LLU;

    t190 = (x885&(x886%(x887+x888)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x889 = UINT16_MAX;
	static volatile int16_t x890 = INT16_MIN;
	uint32_t x891 = 713U;
	int64_t x892 = -27739228527713034LL;
	static int64_t t191 = -130647LL;

    t191 = (x889&(x890%(x891+x892)));

    if (t191 != 32768LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x893 = -13;
	int32_t x896 = INT32_MIN;
	uint64_t t192 = 2888391454LLU;

    t192 = (x893&(x894%(x895+x896)));

    if (t192 != 142190989511033922LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x897 = INT32_MIN;
	int16_t x898 = INT16_MAX;
	int16_t x899 = INT16_MIN;
	static int32_t t193 = 59;

    t193 = (x897&(x898%(x899+x900)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x901 = 208395824042LLU;
	volatile int16_t x902 = INT16_MIN;
	int16_t x903 = INT16_MIN;
	volatile int8_t x904 = -1;

    t194 = (x901&(x902%(x903+x904)));

    if (t194 != 208395796480LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x905 = INT64_MAX;
	uint32_t x906 = 261495297U;

    t195 = (x905&(x906%(x907+x908)));

    if (t195 != 261495297LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x909 = INT16_MIN;
	int8_t x910 = 1;
	int32_t x911 = INT32_MIN;
	uint32_t x912 = UINT32_MAX;
	volatile uint32_t t196 = 57U;

    t196 = (x909&(x910%(x911+x912)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x913 = UINT16_MAX;
	uint32_t x914 = UINT32_MAX;
	int8_t x915 = INT8_MIN;
	int16_t x916 = 1341;
	uint32_t t197 = 4449502U;

    t197 = (x913&(x914%(x915+x916)));

    if (t197 != 1155U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x918 = 32328U;
	int8_t x919 = INT8_MIN;

    t198 = (x917&(x918%(x919+x920)));

    if (t198 != 32256LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x921 = INT8_MIN;
	uint32_t x922 = 61144U;

    t199 = (x921&(x922%(x923+x924)));

    if (t199 != 61056U) { NG(); } else { ; }
	
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

