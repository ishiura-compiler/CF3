
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

uint16_t x3 = UINT16_MAX;
volatile int32_t x8 = INT32_MIN;
int64_t t1 = 100210LL;
static int32_t x13 = INT32_MAX;
int16_t x15 = INT16_MIN;
uint16_t x16 = 2461U;
uint32_t t3 = 147377U;
uint32_t x18 = 38335U;
uint8_t x24 = 0U;
int32_t x25 = 32;
int64_t x26 = INT64_MAX;
int64_t x31 = -1LL;
uint8_t x37 = 104U;
uint8_t x38 = 5U;
static volatile int32_t t9 = 0;
uint32_t x41 = 1527U;
uint64_t x45 = 15194263934LLU;
int16_t x58 = INT16_MIN;
volatile uint64_t t14 = 1251363574052559633LLU;
int64_t x66 = INT64_MIN;
uint8_t x75 = 12U;
static volatile int64_t t19 = 51LL;
static int64_t x90 = INT64_MAX;
int8_t x93 = INT8_MIN;
static int16_t x95 = -16073;
volatile int8_t x96 = INT8_MIN;
int32_t x98 = -1;
static volatile int8_t x105 = INT8_MIN;
int16_t x108 = INT16_MAX;
volatile int32_t t24 = 2;
volatile int8_t x117 = -1;
int32_t x119 = -6;
int32_t t27 = -699654;
uint32_t x129 = UINT32_MAX;
int64_t t29 = 18077165244228LL;
static uint64_t x142 = 7559232730230722187LLU;
uint32_t x145 = 1674090175U;
uint16_t x146 = 6130U;
uint64_t x152 = 611492122717078945LLU;
int8_t x164 = INT8_MIN;
uint32_t x166 = UINT32_MAX;
uint16_t x169 = UINT16_MAX;
uint32_t x189 = 861805U;
int64_t t43 = -446LL;
volatile uint16_t x197 = 10U;
int8_t x198 = INT8_MIN;
uint64_t t45 = 2613983LLU;
int16_t x205 = -85;
int32_t x212 = 8;
int32_t t47 = -1;
static volatile int8_t x216 = -1;
int32_t t48 = -46;
uint16_t x234 = UINT16_MAX;
int8_t x238 = 1;
uint16_t x240 = UINT16_MAX;
int32_t t54 = 1;
volatile uint64_t x249 = 27054063377103LLU;
int64_t x255 = 490LL;
volatile int8_t x264 = -1;
static volatile uint64_t t60 = 27807302325LLU;
int8_t x267 = INT8_MAX;
int64_t x280 = INT64_MIN;
int8_t x281 = -4;
volatile uint64_t x291 = UINT64_MAX;
static int8_t x299 = INT8_MIN;
uint16_t x300 = UINT16_MAX;
int32_t t67 = 74;
int16_t x309 = -1;
int8_t x314 = INT8_MIN;
volatile int64_t t72 = -33403805LL;
int8_t x325 = INT8_MAX;
uint8_t x328 = 10U;
static uint8_t x330 = 21U;
static volatile uint32_t t74 = 424911U;
int8_t x335 = -4;
int8_t x337 = 29;
uint16_t x338 = UINT16_MAX;
uint8_t x341 = UINT8_MAX;
uint16_t x345 = 372U;
int16_t x351 = -826;
volatile int64_t t79 = -357641609444LL;
static int16_t x354 = -1;
int64_t t80 = 732337LL;
volatile uint8_t x358 = UINT8_MAX;
int32_t x359 = -88106894;
static uint8_t x364 = 3U;
uint64_t x365 = 5LLU;
int16_t x367 = -1;
uint64_t t83 = 158896639LLU;
int64_t x369 = -157921779616580LL;
uint16_t x370 = 1U;
volatile uint64_t t85 = 65855837356LLU;
int64_t x377 = INT64_MIN;
static uint16_t x383 = 2792U;
static int16_t x384 = -1574;
int16_t x394 = INT16_MAX;
int8_t x397 = INT8_MIN;
static volatile uint64_t x399 = UINT64_MAX;
uint64_t t89 = 86231240181LLU;
int8_t x401 = -1;
int8_t x403 = INT8_MIN;
int64_t t90 = -24960862LL;
int32_t x407 = -53;
static int32_t x408 = -39262774;
int64_t x410 = -251589770LL;
static int32_t x412 = -152184676;
uint32_t x418 = UINT32_MAX;
int64_t x421 = INT64_MIN;
uint16_t x423 = 24324U;
int64_t x430 = -42747765420LL;
volatile int32_t x432 = INT32_MAX;
int16_t x433 = INT16_MIN;
volatile uint8_t x438 = 2U;
uint64_t x439 = 30481215789588345LLU;
int64_t x440 = INT64_MAX;
int64_t x443 = INT64_MIN;
static int8_t x448 = 1;
uint32_t x450 = 122U;
int64_t x469 = -43260128179LL;
int16_t x475 = INT16_MIN;
volatile uint64_t t106 = 62481928LLU;
int64_t t107 = -645300175634134535LL;
volatile int64_t x485 = -64502220664LL;
static int8_t x488 = INT8_MAX;
static int64_t x490 = -1LL;
int64_t x492 = INT64_MAX;
int32_t x497 = INT32_MAX;
int64_t x503 = INT64_MIN;
static int32_t x521 = 75707357;
static uint8_t x528 = 45U;
volatile int8_t x530 = INT8_MIN;
volatile int8_t x531 = INT8_MAX;
int8_t x534 = INT8_MAX;
int16_t x537 = INT16_MIN;
int64_t t121 = 130353917LL;
int8_t x545 = -1;
uint64_t x547 = 358924254208LLU;
volatile uint64_t t123 = 18639486LLU;
volatile int64_t x561 = INT64_MIN;
int8_t x568 = INT8_MIN;
static volatile int64_t x572 = 133326LL;
uint16_t x574 = 28U;
uint8_t x575 = UINT8_MAX;
volatile uint8_t x581 = UINT8_MAX;
volatile int64_t x590 = INT64_MIN;
volatile int16_t x592 = -283;
int64_t t134 = 4239256313LL;
volatile int32_t x597 = INT32_MIN;
volatile int64_t t135 = 49262LL;
uint32_t x604 = 0U;
static uint64_t t138 = 1285605803280612377LLU;
uint16_t x622 = 5U;
int64_t t140 = 17058262LL;
int16_t x629 = INT16_MAX;
int8_t x640 = 0;
volatile int32_t t145 = -1;
int8_t x645 = -7;
int16_t x648 = -1;
static int16_t x653 = INT16_MIN;
int16_t x658 = -1;
int8_t x659 = INT8_MIN;
uint8_t x662 = UINT8_MAX;
static uint8_t x664 = UINT8_MAX;
int32_t x667 = INT32_MIN;
uint64_t x668 = UINT64_MAX;
uint8_t x675 = 2U;
volatile int32_t t153 = 136311;
uint8_t x677 = UINT8_MAX;
volatile uint64_t x678 = 665LLU;
uint16_t x680 = 159U;
volatile uint64_t x681 = UINT64_MAX;
static uint64_t x682 = 9388756919LLU;
int16_t x686 = INT16_MAX;
static volatile int64_t t156 = 60638495LL;
int32_t x689 = INT32_MIN;
volatile uint16_t x692 = 3005U;
volatile int64_t t157 = 2779LL;
volatile int64_t x702 = INT64_MAX;
static uint64_t x704 = UINT64_MAX;
uint64_t t160 = 6196968497651839LLU;
int32_t x708 = -1;
static uint32_t x709 = 36U;
int16_t x729 = 34;
static volatile int16_t x737 = INT16_MAX;
int16_t x743 = 707;
int64_t x745 = INT64_MIN;
int32_t x747 = INT32_MAX;
int16_t x748 = -1;
static int32_t x751 = INT32_MIN;
volatile uint32_t t172 = 313660U;
static volatile int32_t x771 = INT32_MAX;
int64_t x778 = -1LL;
volatile int64_t x781 = 177631LL;
static int16_t x785 = -1;
static uint16_t x791 = 3369U;
uint16_t x793 = UINT16_MAX;
uint32_t x800 = 236943107U;
int64_t x805 = INT64_MIN;
int16_t x808 = INT16_MIN;
int64_t x811 = -1655LL;
volatile uint8_t x813 = 2U;
uint32_t x822 = 2U;
static uint64_t x825 = UINT64_MAX;
uint8_t x826 = 11U;
static int64_t t189 = -508LL;
static int8_t x845 = INT8_MAX;
uint32_t x854 = 55942U;
int32_t x870 = INT32_MAX;


void f0(void) {
    	int16_t x1 = 104;
	int8_t x2 = -1;
	int32_t x4 = -44;
	int32_t t0 = 2072205;

    t0 = (((x1&x2)/x3)-x4);

    if (t0 != 44) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint8_t x6 = 3U;
	int16_t x7 = INT16_MAX;

    t1 = (((x5&x6)/x7)-x8);

    if (t1 != 2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	uint64_t x12 = 8324759452LLU;
	volatile uint64_t t2 = 401203921LLU;

    t2 = (((x9&x10)/x11)-x12);

    if (t2 != 18446744065384792164LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = UINT32_MAX;

    t3 = (((x13&x14)/x15)-x16);

    if (t3 != 4294964835U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int8_t x19 = 3;
	static int8_t x20 = INT8_MIN;
	uint32_t t4 = 4247318U;

    t4 = (((x17&x18)/x19)-x20);

    if (t4 != 12906U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 68U;
	int16_t x22 = -1;
	volatile int64_t x23 = 246602LL;
	volatile int64_t t5 = 1054193629LL;

    t5 = (((x21&x22)/x23)-x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 0U;
	volatile int64_t t6 = 1906399LL;

    t6 = (((x25&x26)/x27)-x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 70U;
	volatile uint8_t x30 = 57U;
	static int16_t x32 = -1;
	static int64_t t7 = 137161138098768145LL;

    t7 = (((x29&x30)/x31)-x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile int8_t x36 = 28;
	volatile uint32_t t8 = 7235U;

    t8 = (((x33&x34)/x35)-x36);

    if (t8 != 4294967268U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x39 = INT32_MAX;
	int8_t x40 = 14;

    t9 = (((x37&x38)/x39)-x40);

    if (t9 != -14) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = 848;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile uint32_t t10 = 1366008360U;

    t10 = (((x41&x42)/x43)-x44);

    if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x46 = 13U;
	static uint64_t x47 = UINT64_MAX;
	static int8_t x48 = -1;
	volatile uint64_t t11 = 1041145597724LLU;

    t11 = (((x45&x46)/x47)-x48);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -19;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	int32_t x52 = 4823;
	int64_t t12 = 78560LL;

    t12 = (((x49&x50)/x51)-x52);

    if (t12 != -4823LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	int16_t x59 = -1;
	uint64_t x60 = 10259556688011337LLU;
	volatile uint64_t t13 = 197517018501598LLU;

    t13 = (((x57&x58)/x59)-x60);

    if (t13 != 18436484517021573047LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 6729U;
	uint64_t x63 = UINT64_MAX;
	static int8_t x64 = -1;

    t14 = (((x61&x62)/x63)-x64);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	uint64_t x68 = 29513107680LLU;
	volatile uint64_t t15 = 443LLU;

    t15 = (((x65&x66)/x67)-x68);

    if (t15 != 18374119067528296095LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -6;
	volatile int8_t x70 = -4;
	int16_t x71 = INT16_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	static int32_t t16 = -2192814;

    t16 = (((x69&x70)/x71)-x72);

    if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = -8758;
	volatile int16_t x74 = 1613;
	static uint16_t x76 = 503U;
	int32_t t17 = 103472;

    t17 = (((x73&x74)/x75)-x76);

    if (t17 != -412) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x77 = -1LL;
	int32_t x78 = -94350;
	uint64_t x79 = 1347876178691LLU;
	static uint64_t x80 = 24LLU;
	uint64_t t18 = 260112LLU;

    t18 = (((x77&x78)/x79)-x80);

    if (t18 != 13685761LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 2095732458454994LL;
	volatile int16_t x86 = -2;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;

    t19 = (((x85&x86)/x87)-x88);

    if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	uint64_t x91 = 314629586374388007LLU;
	uint64_t x92 = 271115207180701LLU;
	volatile uint64_t t20 = 998224075LLU;

    t20 = (((x89&x90)/x91)-x92);

    if (t20 != 18446472958502370944LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x94 = -96787925718LL;
	int64_t t21 = 212794679269461LL;

    t21 = (((x93&x94)/x95)-x96);

    if (t21 != 6021899LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x97 = 1U;
	int64_t x99 = 120414125741LL;
	int32_t x100 = -7559499;
	volatile int64_t t22 = -44535750549200039LL;

    t22 = (((x97&x98)/x99)-x100);

    if (t22 != 7559499LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	uint8_t x102 = 3U;
	int64_t x103 = INT64_MIN;
	int8_t x104 = 34;
	static int64_t t23 = 662153271054LL;

    t23 = (((x101&x102)/x103)-x104);

    if (t23 != -34LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MAX;
	int32_t x107 = 43729672;

    t24 = (((x105&x106)/x107)-x108);

    if (t24 != -32718) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	static volatile uint16_t x110 = 306U;
	uint16_t x111 = 93U;
	int16_t x112 = 0;
	int64_t t25 = 1376072684346902686LL;

    t25 = (((x109&x110)/x111)-x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	static uint16_t x114 = UINT16_MAX;
	volatile uint64_t x115 = 1287270337120767LLU;
	volatile uint16_t x116 = 36U;
	uint64_t t26 = 365081358870LLU;

    t26 = (((x113&x114)/x115)-x116);

    if (t26 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x118 = INT8_MAX;
	int8_t x120 = 1;

    t27 = (((x117&x118)/x119)-x120);

    if (t27 != -22) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = 26U;
	uint16_t x122 = 0U;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 66755068998LLU;
	volatile uint64_t t28 = 41LLU;

    t28 = (((x121&x122)/x123)-x124);

    if (t28 != 18446744006954482618LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x130 = 17364314U;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MAX;

    t29 = (((x129&x130)/x131)-x132);

    if (t29 != -9223372036854775543LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MAX;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -2;
	static int32_t t30 = -29035;

    t30 = (((x133&x134)/x135)-x136);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = -11;
	static uint16_t x138 = 242U;
	volatile int16_t x139 = INT16_MAX;
	int16_t x140 = -1;
	int32_t t31 = -5;

    t31 = (((x137&x138)/x139)-x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x141 = -1;
	uint32_t x143 = 222U;
	uint8_t x144 = 3U;
	uint64_t t32 = 2139230843LLU;

    t32 = (((x141&x142)/x143)-x144);

    if (t32 != 34050597883922169LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	volatile uint32_t t33 = 5958436U;

    t33 = (((x145&x146)/x147)-x148);

    if (t33 != 4294967169U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = 7534;
	uint8_t x150 = 0U;
	static int16_t x151 = INT16_MIN;
	volatile uint64_t t34 = 51772415800636LLU;

    t34 = (((x149&x150)/x151)-x152);

    if (t34 != 17835251950992472671LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x153 = 2U;
	int16_t x154 = -13131;
	volatile int32_t x155 = INT32_MAX;
	int16_t x156 = -1172;
	volatile int32_t t35 = 65300836;

    t35 = (((x153&x154)/x155)-x156);

    if (t35 != 1172) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MAX;
	static volatile uint64_t x159 = UINT64_MAX;
	volatile uint16_t x160 = 24U;
	uint64_t t36 = 243488057243LLU;

    t36 = (((x157&x158)/x159)-x160);

    if (t36 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x161 = 6644267491710LLU;
	volatile int16_t x162 = 240;
	int64_t x163 = INT64_MIN;
	volatile uint64_t t37 = 42LLU;

    t37 = (((x161&x162)/x163)-x164);

    if (t37 != 128LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x165 = INT32_MAX;
	int16_t x167 = 3;
	static int16_t x168 = INT16_MIN;
	volatile uint32_t t38 = 899424846U;

    t38 = (((x165&x166)/x167)-x168);

    if (t38 != 715860650U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x170 = -13;
	int8_t x171 = -1;
	int8_t x172 = -1;
	int32_t t39 = -175126;

    t39 = (((x169&x170)/x171)-x172);

    if (t39 != -65522) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = INT32_MIN;
	static uint64_t x174 = 59LLU;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;
	volatile uint64_t t40 = 2LLU;

    t40 = (((x173&x174)/x175)-x176);

    if (t40 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MIN;
	uint64_t x178 = UINT64_MAX;
	static int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MAX;
	volatile uint64_t t41 = 413249614LLU;

    t41 = (((x177&x178)/x179)-x180);

    if (t41 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = -5397LL;
	uint32_t x182 = UINT32_MAX;
	static volatile uint32_t x183 = UINT32_MAX;
	int64_t x184 = -1LL;
	int64_t t42 = 2216LL;

    t42 = (((x181&x182)/x183)-x184);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x190 = UINT32_MAX;
	int32_t x191 = -1;
	volatile int64_t x192 = INT64_MAX;

    t43 = (((x189&x190)/x191)-x192);

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x199 = -3;
	uint32_t x200 = 1U;
	volatile uint32_t t44 = UINT32_MAX;

    t44 = (((x197&x198)/x199)-x200);

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x201 = 67U;
	static uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 3U;
	uint32_t x204 = UINT32_MAX;

    t45 = (((x201&x202)/x203)-x204);

    if (t45 != 18446744069414584343LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	volatile int16_t x208 = INT16_MIN;
	int32_t t46 = -19;

    t46 = (((x205&x206)/x207)-x208);

    if (t46 != 32769) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x209 = 14;
	static int8_t x210 = INT8_MAX;
	volatile int8_t x211 = 1;

    t47 = (((x209&x210)/x211)-x212);

    if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MAX;
	int32_t x215 = 3772479;

    t48 = (((x213&x214)/x215)-x216);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	uint16_t x219 = 25U;
	volatile int8_t x220 = -7;
	volatile int32_t t49 = -122352229;

    t49 = (((x217&x218)/x219)-x220);

    if (t49 != -85899338) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -1LL;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MIN;
	int8_t x224 = 19;
	static volatile uint64_t t50 = 127483739LLU;

    t50 = (((x221&x222)/x223)-x224);

    if (t50 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x225 = 115684884U;
	int32_t x226 = INT32_MIN;
	int64_t x227 = -34765991935876963LL;
	static volatile uint8_t x228 = UINT8_MAX;
	volatile int64_t t51 = 1LL;

    t51 = (((x225&x226)/x227)-x228);

    if (t51 != -255LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	static volatile uint32_t t52 = 4U;

    t52 = (((x229&x230)/x231)-x232);

    if (t52 != 129U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x235 = -63;
	uint8_t x236 = 15U;
	int64_t t53 = -1857234249LL;

    t53 = (((x233&x234)/x235)-x236);

    if (t53 != -15LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x237 = -20;
	uint8_t x239 = 35U;

    t54 = (((x237&x238)/x239)-x240);

    if (t54 != -65535) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = 1U;
	static int8_t x242 = -1;
	int16_t x243 = 8166;
	uint16_t x244 = 210U;
	static int32_t t55 = 1;

    t55 = (((x241&x242)/x243)-x244);

    if (t55 != -210) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x245 = UINT8_MAX;
	int64_t x246 = -426345LL;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = 1909997U;
	int64_t t56 = 0LL;

    t56 = (((x245&x246)/x247)-x248);

    if (t56 != -1909997LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x250 = -1722;
	static volatile int8_t x251 = INT8_MIN;
	static int16_t x252 = INT16_MIN;
	static volatile uint64_t t57 = 309631962LLU;

    t57 = (((x249&x250)/x251)-x252);

    if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = 36116;
	int32_t x254 = 635;
	int64_t x256 = -247456888370160708LL;
	volatile int64_t t58 = 3290553LL;

    t58 = (((x253&x254)/x255)-x256);

    if (t58 != 247456888370160708LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x257 = -1;
	int32_t x258 = 340;
	int16_t x259 = INT16_MAX;
	int8_t x260 = -1;
	volatile int32_t t59 = 1044562201;

    t59 = (((x257&x258)/x259)-x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x261 = 188404620144394891LLU;
	int16_t x262 = -261;
	int8_t x263 = -1;

    t60 = (((x261&x262)/x263)-x264);

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x265 = INT32_MAX;
	volatile int8_t x266 = 40;
	static int64_t x268 = -1LL;
	static volatile int64_t t61 = 6988575LL;

    t61 = (((x265&x266)/x267)-x268);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x269 = -1919932925114097584LL;
	volatile int8_t x270 = INT8_MIN;
	volatile int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t62 = 2719695116300LLU;

    t62 = (((x269&x270)/x271)-x272);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x278 = 1515295797449088123LLU;
	int16_t x279 = 16;
	uint64_t t63 = 4304813160352025LLU;

    t63 = (((x277&x278)/x279)-x280);

    if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x282 = -1;
	int8_t x283 = -1;
	int64_t x284 = -1LL;
	int64_t t64 = 90668554722820LL;

    t64 = (((x281&x282)/x283)-x284);

    if (t64 != 5LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x289 = INT8_MIN;
	static int64_t x290 = -1LL;
	static uint8_t x292 = UINT8_MAX;
	uint64_t t65 = 67847539321599LLU;

    t65 = (((x289&x290)/x291)-x292);

    if (t65 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = UINT64_MAX;
	int16_t x295 = -7;
	int8_t x296 = -1;
	static uint64_t t66 = 2494049949196590LLU;

    t66 = (((x293&x294)/x295)-x296);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x297 = INT8_MIN;
	static int16_t x298 = -1;

    t67 = (((x297&x298)/x299)-x300);

    if (t67 != -65534) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 4U;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -1LL;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t68 = 116LL;

    t68 = (((x305&x306)/x307)-x308);

    if (t68 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 43LLU;
	volatile uint32_t x312 = 596U;
	static volatile uint64_t t69 = 98065904LLU;

    t69 = (((x309&x310)/x311)-x312);

    if (t69 != 18446744073709551025LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = 21;
	int64_t x315 = -1LL;
	volatile uint8_t x316 = UINT8_MAX;
	int64_t t70 = 18630LL;

    t70 = (((x313&x314)/x315)-x316);

    if (t70 != -255LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	uint32_t x319 = 10662U;
	int8_t x320 = INT8_MIN;
	int64_t t71 = -3LL;

    t71 = (((x317&x318)/x319)-x320);

    if (t71 != -865069596403433LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MAX;
	uint16_t x323 = 11322U;
	int64_t x324 = -1LL;

    t72 = (((x321&x322)/x323)-x324);

    if (t72 != 814641586014377LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x326 = 10647871748716139LL;
	uint32_t x327 = UINT32_MAX;
	static int64_t t73 = 1LL;

    t73 = (((x325&x326)/x327)-x328);

    if (t73 != -10LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x329 = UINT32_MAX;
	int8_t x331 = INT8_MIN;
	int32_t x332 = 4739876;

    t74 = (((x329&x330)/x331)-x332);

    if (t74 != 4290227420U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x333 = INT16_MIN;
	static volatile int8_t x334 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	int32_t t75 = -71485;

    t75 = (((x333&x334)/x335)-x336);

    if (t75 != -24575) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x339 = 1;
	int16_t x340 = INT16_MAX;
	static volatile int32_t t76 = -877906917;

    t76 = (((x337&x338)/x339)-x340);

    if (t76 != -32738) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x342 = UINT32_MAX;
	int16_t x343 = -5;
	static uint32_t x344 = UINT32_MAX;
	uint32_t t77 = 451380903U;

    t77 = (((x341&x342)/x343)-x344);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x346 = -1;
	static volatile int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	int32_t t78 = 47531862;

    t78 = (((x345&x346)/x347)-x348);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x349 = 6488943538LL;
	volatile uint32_t x350 = UINT32_MAX;
	int8_t x352 = -1;

    t79 = (((x349&x350)/x351)-x352);

    if (t79 != -2656144LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x353 = 182782285U;
	static int16_t x355 = -28;
	static volatile int64_t x356 = -151550LL;

    t80 = (((x353&x354)/x355)-x356);

    if (t80 != 151550LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x357 = 1232973LLU;
	uint64_t x360 = 2731298555896439731LLU;
	static volatile uint64_t t81 = 10163072LLU;

    t81 = (((x357&x358)/x359)-x360);

    if (t81 != 15715445517813111885LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x361 = INT64_MIN;
	volatile int64_t x362 = 728994LL;
	static int16_t x363 = INT16_MIN;
	static volatile int64_t t82 = 3721396977850424011LL;

    t82 = (((x361&x362)/x363)-x364);

    if (t82 != -3LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x366 = -1;
	static int32_t x368 = INT32_MIN;

    t83 = (((x365&x366)/x367)-x368);

    if (t83 != 2147483648LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x371 = -1;
	int64_t x372 = -139710318194594937LL;
	int64_t t84 = -208LL;

    t84 = (((x369&x370)/x371)-x372);

    if (t84 != 139710318194594937LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x374 = 0U;
	volatile int32_t x375 = -1;
	volatile uint64_t x376 = 2710508451LLU;

    t85 = (((x373&x374)/x375)-x376);

    if (t85 != 18446744070999043165LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x378 = -5;
	uint32_t x379 = 773395273U;
	int8_t x380 = INT8_MIN;
	volatile int64_t t86 = 285LL;

    t86 = (((x377&x378)/x379)-x380);

    if (t86 != -11925818866LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = -13898;
	static int64_t t87 = 477845LL;

    t87 = (((x381&x382)/x383)-x384);

    if (t87 != -3303500013198560LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = 0;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	int64_t t88 = 28865943598713705LL;

    t88 = (((x393&x394)/x395)-x396);

    if (t88 != 2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x398 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;

    t89 = (((x397&x398)/x399)-x400);

    if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x402 = INT64_MAX;
	int64_t x404 = -1LL;

    t90 = (((x401&x402)/x403)-x404);

    if (t90 != -72057594037927934LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x405 = 3U;
	static int8_t x406 = -1;
	volatile int32_t t91 = -127945663;

    t91 = (((x405&x406)/x407)-x408);

    if (t91 != 39262774) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = 3U;
	static uint16_t x411 = 10U;
	static volatile int64_t t92 = 12495831608LL;

    t92 = (((x409&x410)/x411)-x412);

    if (t92 != 152184676LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x413 = 1227534886U;
	int64_t x414 = 1284308111426LL;
	uint16_t x415 = 36U;
	int64_t x416 = -1LL;
	volatile int64_t t93 = -1LL;

    t93 = (((x413&x414)/x415)-x416);

    if (t93 != 77483LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x417 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	static int64_t x420 = -1047975926777353459LL;
	int64_t t94 = 206816186545020187LL;

    t94 = (((x417&x418)/x419)-x420);

    if (t94 != 1047975926777353460LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x422 = -1LL;
	static int64_t x424 = 79303008982LL;
	int64_t t95 = 5533547LL;

    t95 = (((x421&x422)/x423)-x424);

    if (t95 != -379267431476946LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MAX;
	static int16_t x427 = -1;
	volatile int8_t x428 = -1;
	uint32_t t96 = 1U;

    t96 = (((x425&x426)/x427)-x428);

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x431 = INT64_MAX;
	static int64_t t97 = -1LL;

    t97 = (((x429&x430)/x431)-x432);

    if (t97 != -2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x434 = -1LL;
	int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MAX;
	static int64_t t98 = -3597260LL;

    t98 = (((x433&x434)/x435)-x436);

    if (t98 != 129LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x437 = -1LL;
	volatile uint64_t t99 = 1280097554045353LLU;

    t99 = (((x437&x438)/x439)-x440);

    if (t99 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x441 = 4501457761569409LL;
	int64_t x442 = INT64_MIN;
	int8_t x444 = INT8_MIN;
	static volatile int64_t t100 = -1LL;

    t100 = (((x441&x442)/x443)-x444);

    if (t100 != 128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x445 = -1;
	uint32_t x446 = 4883U;
	uint32_t x447 = 2122143124U;
	uint32_t t101 = UINT32_MAX;

    t101 = (((x445&x446)/x447)-x448);

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x449 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	volatile uint32_t t102 = 90421U;

    t102 = (((x449&x450)/x451)-x452);

    if (t102 != 128U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x453 = 52677175620187LL;
	uint32_t x454 = UINT32_MAX;
	static int64_t x455 = INT64_MIN;
	static volatile int16_t x456 = INT16_MAX;
	volatile int64_t t103 = 22LL;

    t103 = (((x453&x454)/x455)-x456);

    if (t103 != -32767LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x461 = INT64_MAX;
	static uint16_t x462 = 1270U;
	static int32_t x463 = INT32_MIN;
	volatile int64_t x464 = 332838111LL;
	volatile int64_t t104 = -2355804827449LL;

    t104 = (((x461&x462)/x463)-x464);

    if (t104 != -332838111LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x470 = UINT8_MAX;
	uint64_t x471 = 1970135925009LLU;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t105 = 164LLU;

    t105 = (((x469&x470)/x471)-x472);

    if (t105 != 32768LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x473 = UINT64_MAX;
	static int32_t x474 = 18480093;
	int16_t x476 = INT16_MIN;

    t106 = (((x473&x474)/x475)-x476);

    if (t106 != 32768LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x481 = 11U;
	uint32_t x482 = 3750U;
	int16_t x483 = INT16_MAX;
	static int64_t x484 = INT64_MAX;

    t107 = (((x481&x482)/x483)-x484);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x486 = 0U;
	int64_t x487 = -93LL;
	volatile int64_t t108 = -69539185535783741LL;

    t108 = (((x485&x486)/x487)-x488);

    if (t108 != -127LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x489 = 151U;
	int32_t x491 = INT32_MIN;
	int64_t t109 = 6098713731406LL;

    t109 = (((x489&x490)/x491)-x492);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x493 = -1;
	static volatile uint64_t x494 = 13019459139758LLU;
	volatile int16_t x495 = INT16_MAX;
	volatile int8_t x496 = -1;
	volatile uint64_t t110 = 13498875367LLU;

    t110 = (((x493&x494)/x495)-x496);

    if (t110 != 397334488LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x498 = INT32_MIN;
	int64_t x499 = -1LL;
	int16_t x500 = INT16_MIN;
	volatile int64_t t111 = 51LL;

    t111 = (((x497&x498)/x499)-x500);

    if (t111 != 32768LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x501 = INT32_MIN;
	static uint64_t x502 = 140821074495LLU;
	int16_t x504 = INT16_MIN;
	volatile uint64_t t112 = 223846199647724083LLU;

    t112 = (((x501&x502)/x503)-x504);

    if (t112 != 32768LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x505 = -89851LL;
	int16_t x506 = INT16_MAX;
	int32_t x507 = INT32_MIN;
	volatile int32_t x508 = INT32_MIN;
	volatile int64_t t113 = -211945327591899561LL;

    t113 = (((x505&x506)/x507)-x508);

    if (t113 != 2147483648LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = -1;
	int8_t x510 = INT8_MAX;
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t114 = 38990253;

    t114 = (((x509&x510)/x511)-x512);

    if (t114 != 32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x513 = -744;
	int16_t x514 = 39;
	volatile int8_t x515 = INT8_MIN;
	uint32_t x516 = 1665017087U;
	uint32_t t115 = 1076U;

    t115 = (((x513&x514)/x515)-x516);

    if (t115 != 2629950209U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x517 = UINT16_MAX;
	int8_t x518 = INT8_MIN;
	uint8_t x519 = 6U;
	int32_t x520 = -33749342;
	int32_t t116 = -90485246;

    t116 = (((x517&x518)/x519)-x520);

    if (t116 != 33760243) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x522 = -1LL;
	int16_t x523 = -13126;
	static volatile int8_t x524 = INT8_MAX;
	volatile int64_t t117 = 153LL;

    t117 = (((x521&x522)/x523)-x524);

    if (t117 != -5894LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x525 = -1LL;
	int64_t x526 = INT64_MAX;
	int64_t x527 = 81331358105330857LL;
	volatile int64_t t118 = -2942148903293206LL;

    t118 = (((x525&x526)/x527)-x528);

    if (t118 != 68LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x529 = INT32_MIN;
	static int16_t x532 = INT16_MAX;
	int32_t t119 = -721498;

    t119 = (((x529&x530)/x531)-x532);

    if (t119 != -16942087) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x533 = INT32_MAX;
	volatile int32_t x535 = -175;
	static uint16_t x536 = 13343U;
	static volatile int32_t t120 = 691;

    t120 = (((x533&x534)/x535)-x536);

    if (t120 != -13343) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x538 = 17;
	int16_t x539 = -78;
	volatile int64_t x540 = INT64_MAX;

    t121 = (((x537&x538)/x539)-x540);

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x541 = -30834820;
	static uint64_t x542 = UINT64_MAX;
	static int16_t x543 = INT16_MAX;
	volatile int64_t x544 = -1LL;
	uint64_t t122 = 63815416373467044LLU;

    t122 = (((x541&x542)/x543)-x544);

    if (t122 != 562967133813859LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x546 = UINT8_MAX;
	uint32_t x548 = 23768U;

    t123 = (((x545&x546)/x547)-x548);

    if (t123 != 18446744073709527848LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x549 = -1;
	volatile int64_t x550 = INT64_MIN;
	int32_t x551 = -114791;
	volatile uint64_t x552 = UINT64_MAX;
	volatile uint64_t t124 = 154289LLU;

    t124 = (((x549&x550)/x551)-x552);

    if (t124 != 80349261151613LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x553 = 27U;
	uint32_t x554 = 122U;
	int16_t x555 = -75;
	uint64_t x556 = UINT64_MAX;
	static volatile uint64_t t125 = 2901303LLU;

    t125 = (((x553&x554)/x555)-x556);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x562 = UINT16_MAX;
	static int64_t x563 = -1LL;
	int8_t x564 = INT8_MIN;
	static int64_t t126 = -37269844287730947LL;

    t126 = (((x561&x562)/x563)-x564);

    if (t126 != 128LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x565 = 7025U;
	int32_t x566 = INT32_MAX;
	int32_t x567 = -438893;
	int32_t t127 = -18477519;

    t127 = (((x565&x566)/x567)-x568);

    if (t127 != 128) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x569 = -11659;
	uint16_t x570 = 500U;
	uint16_t x571 = UINT16_MAX;
	int64_t t128 = 14311559453936LL;

    t128 = (((x569&x570)/x571)-x572);

    if (t128 != -133326LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x573 = UINT64_MAX;
	static volatile int8_t x576 = INT8_MIN;
	static uint64_t t129 = 2134672336218704000LLU;

    t129 = (((x573&x574)/x575)-x576);

    if (t129 != 128LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x577 = -62;
	uint64_t x578 = 7897245608965741482LLU;
	volatile int32_t x579 = -86;
	int32_t x580 = 13;
	static uint64_t t130 = 2581801LLU;

    t130 = (((x577&x578)/x579)-x580);

    if (t130 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x582 = INT8_MIN;
	int8_t x583 = 14;
	volatile uint32_t x584 = UINT32_MAX;
	volatile uint32_t t131 = 47580U;

    t131 = (((x581&x582)/x583)-x584);

    if (t131 != 10U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x585 = INT8_MAX;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	int16_t x588 = 14;
	volatile uint64_t t132 = 51LLU;

    t132 = (((x585&x586)/x587)-x588);

    if (t132 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x589 = INT32_MAX;
	volatile int64_t x591 = 40943876LL;
	int64_t t133 = -48872625LL;

    t133 = (((x589&x590)/x591)-x592);

    if (t133 != 283LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x593 = 14794U;
	static volatile uint32_t x594 = 6954053U;
	int64_t x595 = -1LL;
	int8_t x596 = 1;

    t134 = (((x593&x594)/x595)-x596);

    if (t134 != -6209LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x598 = -520133126813221LL;
	int8_t x599 = -1;
	uint16_t x600 = 12793U;

    t135 = (((x597&x598)/x599)-x600);

    if (t135 != 520133424434695LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x601 = 2522464;
	uint32_t x602 = 172798U;
	static int8_t x603 = INT8_MIN;
	static volatile uint32_t t136 = 28224U;

    t136 = (((x601&x602)/x603)-x604);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x605 = 73U;
	int64_t x606 = INT64_MIN;
	uint64_t x607 = 1LLU;
	static int64_t x608 = -202916965293106962LL;
	uint64_t t137 = 56022LLU;

    t137 = (((x605&x606)/x607)-x608);

    if (t137 != 202916965293106962LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x613 = INT64_MIN;
	uint64_t x614 = 769619909667444929LLU;
	uint64_t x615 = UINT64_MAX;
	volatile int16_t x616 = -1;

    t138 = (((x613&x614)/x615)-x616);

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x617 = INT32_MIN;
	uint8_t x618 = UINT8_MAX;
	uint64_t x619 = 1674LLU;
	int32_t x620 = INT32_MIN;
	static uint64_t t139 = 196588LLU;

    t139 = (((x617&x618)/x619)-x620);

    if (t139 != 2147483648LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x623 = INT16_MAX;
	int64_t x624 = 0LL;

    t140 = (((x621&x622)/x623)-x624);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x625 = INT16_MIN;
	static int16_t x626 = INT16_MAX;
	int16_t x627 = 358;
	static volatile uint8_t x628 = 1U;
	volatile int32_t t141 = 2;

    t141 = (((x625&x626)/x627)-x628);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x630 = -1;
	volatile uint32_t x631 = UINT32_MAX;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t142 = 15LLU;

    t142 = (((x629&x630)/x631)-x632);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x633 = INT8_MIN;
	static int8_t x634 = INT8_MIN;
	volatile int8_t x635 = -62;
	uint16_t x636 = 0U;
	volatile int32_t t143 = -11;

    t143 = (((x633&x634)/x635)-x636);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x637 = -1;
	volatile uint32_t x638 = 3U;
	uint16_t x639 = 15U;
	static volatile uint32_t t144 = 1U;

    t144 = (((x637&x638)/x639)-x640);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = INT8_MIN;
	int32_t x642 = -4756130;
	int16_t x643 = -31;
	static int8_t x644 = INT8_MIN;

    t145 = (((x641&x642)/x643)-x644);

    if (t145 != 153554) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x646 = 131;
	int64_t x647 = -462380LL;
	volatile int64_t t146 = 250LL;

    t146 = (((x645&x646)/x647)-x648);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x649 = 239;
	static int64_t x650 = 112629824LL;
	int64_t x651 = -1LL;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t147 = 977388313178LLU;

    t147 = (((x649&x650)/x651)-x652);

    if (t147 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	int64_t x656 = 1LL;
	volatile uint64_t t148 = UINT64_MAX;

    t148 = (((x653&x654)/x655)-x656);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x657 = 2;
	volatile uint16_t x660 = UINT16_MAX;
	int32_t t149 = -1006;

    t149 = (((x657&x658)/x659)-x660);

    if (t149 != -65535) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x661 = INT64_MIN;
	int64_t x663 = 1190593428982986LL;
	volatile int64_t t150 = -1569LL;

    t150 = (((x661&x662)/x663)-x664);

    if (t150 != -255LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x665 = 364049U;
	volatile int8_t x666 = INT8_MIN;
	volatile uint64_t t151 = 296LLU;

    t151 = (((x665&x666)/x667)-x668);

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x669 = -1LL;
	uint64_t x670 = 60279633361LLU;
	int8_t x671 = -5;
	int8_t x672 = -1;
	uint64_t t152 = 12240632641LLU;

    t152 = (((x669&x670)/x671)-x672);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x673 = 4U;
	static volatile uint16_t x674 = UINT16_MAX;
	volatile int16_t x676 = INT16_MAX;

    t153 = (((x673&x674)/x675)-x676);

    if (t153 != -32765) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x679 = 47934U;
	volatile uint64_t t154 = 129537LLU;

    t154 = (((x677&x678)/x679)-x680);

    if (t154 != 18446744073709551457LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x683 = -5786;
	uint16_t x684 = 3528U;
	volatile uint64_t t155 = 1050021436LLU;

    t155 = (((x681&x682)/x683)-x684);

    if (t155 != 18446744073709548088LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x685 = -344710637LL;
	int64_t x687 = INT64_MAX;
	int16_t x688 = INT16_MIN;

    t156 = (((x685&x686)/x687)-x688);

    if (t156 != 32768LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x690 = 60U;
	int64_t x691 = -1LL;

    t157 = (((x689&x690)/x691)-x692);

    if (t157 != -3005LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x693 = 1U;
	uint8_t x694 = 6U;
	int32_t x695 = INT32_MAX;
	int8_t x696 = INT8_MIN;
	volatile int32_t t158 = -29733;

    t158 = (((x693&x694)/x695)-x696);

    if (t158 != 128) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x697 = 94U;
	int64_t x698 = -1LL;
	int64_t x699 = -1LL;
	uint8_t x700 = UINT8_MAX;
	volatile int64_t t159 = -7877746LL;

    t159 = (((x697&x698)/x699)-x700);

    if (t159 != -349LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x701 = -2581758;
	int8_t x703 = 5;

    t160 = (((x701&x702)/x703)-x704);

    if (t160 != 1844674407370438811LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = 57;
	int64_t x706 = INT64_MAX;
	int16_t x707 = INT16_MIN;
	volatile int64_t t161 = -27LL;

    t161 = (((x705&x706)/x707)-x708);

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x710 = INT16_MIN;
	volatile int64_t x711 = INT64_MAX;
	int8_t x712 = 0;
	volatile int64_t t162 = -1LL;

    t162 = (((x709&x710)/x711)-x712);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x713 = 1;
	volatile int64_t x714 = 103524630LL;
	int32_t x715 = -350;
	uint16_t x716 = 63U;
	int64_t t163 = -9313197LL;

    t163 = (((x713&x714)/x715)-x716);

    if (t163 != -63LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x717 = UINT32_MAX;
	int16_t x718 = 8;
	int8_t x719 = -1;
	volatile int8_t x720 = INT8_MIN;
	uint32_t t164 = 116322U;

    t164 = (((x717&x718)/x719)-x720);

    if (t164 != 128U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x725 = -62;
	int64_t x726 = INT64_MIN;
	int8_t x727 = 4;
	int16_t x728 = -1;
	volatile int64_t t165 = 4286467318187609758LL;

    t165 = (((x725&x726)/x727)-x728);

    if (t165 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x730 = UINT32_MAX;
	static uint8_t x731 = UINT8_MAX;
	static int32_t x732 = INT32_MIN;
	static uint32_t t166 = 375202U;

    t166 = (((x729&x730)/x731)-x732);

    if (t166 != 2147483648U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = -933;
	uint64_t x734 = 624819370LLU;
	volatile int16_t x735 = -4115;
	uint64_t x736 = UINT64_MAX;
	uint64_t t167 = 35481697479124LLU;

    t167 = (((x733&x734)/x735)-x736);

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x738 = 10139419U;
	int32_t x739 = INT32_MAX;
	int8_t x740 = -46;
	uint32_t t168 = 25256U;

    t168 = (((x737&x738)/x739)-x740);

    if (t168 != 46U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x741 = 724417363U;
	int16_t x742 = -1;
	uint16_t x744 = UINT16_MAX;
	uint32_t t169 = 773U;

    t169 = (((x741&x742)/x743)-x744);

    if (t169 != 959100U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x746 = -51;
	static int64_t t170 = 532920163350LL;

    t170 = (((x745&x746)/x747)-x748);

    if (t170 != -4294967297LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x749 = 29058724170LLU;
	static int16_t x750 = INT16_MIN;
	int32_t x752 = INT32_MIN;
	uint64_t t171 = 14659635045LLU;

    t171 = (((x749&x750)/x751)-x752);

    if (t171 != 2147483648LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x753 = -1;
	volatile uint32_t x754 = 16380U;
	static int32_t x755 = -372;
	static volatile int16_t x756 = INT16_MAX;

    t172 = (((x753&x754)/x755)-x756);

    if (t172 != 4294934529U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x757 = 0;
	int32_t x758 = -1;
	int64_t x759 = INT64_MIN;
	int64_t x760 = -221914770LL;
	int64_t t173 = -3LL;

    t173 = (((x757&x758)/x759)-x760);

    if (t173 != 221914770LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x761 = 382;
	int8_t x762 = 43;
	int32_t x763 = INT32_MAX;
	uint64_t x764 = UINT64_MAX;
	volatile uint64_t t174 = 1945836808638247LLU;

    t174 = (((x761&x762)/x763)-x764);

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x769 = INT16_MIN;
	int32_t x770 = INT32_MIN;
	uint16_t x772 = UINT16_MAX;
	int32_t t175 = 104;

    t175 = (((x769&x770)/x771)-x772);

    if (t175 != -65536) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x773 = INT64_MAX;
	int16_t x774 = -1;
	static int16_t x775 = -1;
	static int8_t x776 = 0;
	volatile int64_t t176 = 322LL;

    t176 = (((x773&x774)/x775)-x776);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x777 = UINT64_MAX;
	static uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MAX;
	static volatile uint64_t t177 = 9380297682LLU;

    t177 = (((x777&x778)/x779)-x780);

    if (t177 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x782 = -1;
	int16_t x783 = 3;
	uint32_t x784 = UINT32_MAX;
	volatile int64_t t178 = 7LL;

    t178 = (((x781&x782)/x783)-x784);

    if (t178 != -4294908085LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x786 = 0U;
	static uint32_t x787 = UINT32_MAX;
	int16_t x788 = INT16_MAX;
	uint32_t t179 = 70U;

    t179 = (((x785&x786)/x787)-x788);

    if (t179 != 4294934529U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x789 = -1;
	uint16_t x790 = 35U;
	volatile uint32_t x792 = UINT32_MAX;
	uint32_t t180 = 908192859U;

    t180 = (((x789&x790)/x791)-x792);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MIN;
	static uint64_t x796 = 15LLU;
	uint64_t t181 = 8776876803335090239LLU;

    t181 = (((x793&x794)/x795)-x796);

    if (t181 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x797 = INT64_MAX;
	uint32_t x798 = 13091929U;
	uint64_t x799 = 23226537146LLU;
	volatile uint64_t t182 = 11721LLU;

    t182 = (((x797&x798)/x799)-x800);

    if (t182 != 18446744073472608509LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x806 = INT8_MIN;
	static int8_t x807 = 1;
	int64_t t183 = -30789644LL;

    t183 = (((x805&x806)/x807)-x808);

    if (t183 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x809 = UINT16_MAX;
	static uint64_t x810 = UINT64_MAX;
	static int16_t x812 = INT16_MAX;
	volatile uint64_t t184 = 8039813LLU;

    t184 = (((x809&x810)/x811)-x812);

    if (t184 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x814 = UINT64_MAX;
	int32_t x815 = INT32_MAX;
	uint8_t x816 = 0U;
	uint64_t t185 = 4LLU;

    t185 = (((x813&x814)/x815)-x816);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x821 = INT32_MAX;
	int16_t x823 = INT16_MIN;
	int8_t x824 = -1;
	volatile uint32_t t186 = 3U;

    t186 = (((x821&x822)/x823)-x824);

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x827 = INT32_MIN;
	int16_t x828 = INT16_MIN;
	volatile uint64_t t187 = 17418688255818408LLU;

    t187 = (((x825&x826)/x827)-x828);

    if (t187 != 32768LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x829 = -1;
	int16_t x830 = 1;
	int8_t x831 = -10;
	volatile uint32_t x832 = UINT32_MAX;
	uint32_t t188 = 5U;

    t188 = (((x829&x830)/x831)-x832);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x841 = INT16_MIN;
	static int64_t x842 = 13037053032211LL;
	int32_t x843 = INT32_MIN;
	int16_t x844 = 2122;

    t189 = (((x841&x842)/x843)-x844);

    if (t189 != -8192LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x846 = 4;
	volatile uint32_t x847 = 286U;
	static int8_t x848 = -1;
	uint32_t t190 = 34U;

    t190 = (((x845&x846)/x847)-x848);

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x849 = 0;
	volatile int64_t x850 = 0LL;
	int64_t x851 = -1LL;
	int32_t x852 = -1;
	int64_t t191 = 949LL;

    t191 = (((x849&x850)/x851)-x852);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x853 = UINT16_MAX;
	uint32_t x855 = 120865485U;
	static int16_t x856 = -5672;
	volatile uint32_t t192 = 3718U;

    t192 = (((x853&x854)/x855)-x856);

    if (t192 != 5672U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x857 = INT8_MIN;
	int32_t x858 = -1;
	uint8_t x859 = UINT8_MAX;
	int8_t x860 = 1;
	int32_t t193 = 296;

    t193 = (((x857&x858)/x859)-x860);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x865 = 0U;
	int8_t x866 = -30;
	volatile int16_t x867 = INT16_MAX;
	int8_t x868 = 16;
	volatile int32_t t194 = -23011;

    t194 = (((x865&x866)/x867)-x868);

    if (t194 != -16) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x869 = 0U;
	int16_t x871 = INT16_MAX;
	int64_t x872 = -12094638LL;
	volatile int64_t t195 = -819LL;

    t195 = (((x869&x870)/x871)-x872);

    if (t195 != 12094638LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x873 = 581U;
	int8_t x874 = -30;
	uint8_t x875 = UINT8_MAX;
	int32_t x876 = INT32_MAX;
	static volatile int32_t t196 = -213388;

    t196 = (((x873&x874)/x875)-x876);

    if (t196 != -2147483645) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x877 = INT32_MIN;
	int8_t x878 = 55;
	int32_t x879 = INT32_MIN;
	int8_t x880 = -38;
	int32_t t197 = -80;

    t197 = (((x877&x878)/x879)-x880);

    if (t197 != 38) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x881 = INT32_MAX;
	uint64_t x882 = 27790640678180288LLU;
	static uint32_t x883 = UINT32_MAX;
	uint32_t x884 = UINT32_MAX;
	volatile uint64_t t198 = 7349512863017LLU;

    t198 = (((x881&x882)/x883)-x884);

    if (t198 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x885 = 3792;
	int8_t x886 = INT8_MIN;
	volatile int8_t x887 = INT8_MAX;
	static volatile int16_t x888 = -1;
	volatile int32_t t199 = 23;

    t199 = (((x885&x886)/x887)-x888);

    if (t199 != 30) { NG(); } else { ; }
	
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

