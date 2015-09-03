#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = 1;
uint64_t x14 = 2632045241675939LLU;
uint64_t t3 = 189188048503220LLU;
volatile uint64_t t5 = 4153740LLU;
volatile uint64_t t6 = 816559025018593LLU;
uint64_t x37 = 12362952LLU;
int64_t x44 = -1LL;
static int8_t x58 = INT8_MIN;
uint16_t x61 = UINT16_MAX;
int64_t x62 = 60012027536692LL;
volatile int64_t t14 = -136722033788LL;
volatile uint8_t x66 = UINT8_MAX;
volatile int32_t x74 = -54301;
int64_t t16 = -30173LL;
uint8_t x82 = UINT8_MAX;
int32_t x93 = -11487490;
uint64_t x94 = UINT64_MAX;
int64_t t22 = 62381214210LL;
int16_t x103 = 0;
static uint32_t x106 = 814052U;
static int64_t x107 = -1LL;
uint8_t x127 = 5U;
static int32_t x129 = 1;
uint32_t x140 = 864847853U;
volatile int64_t t31 = -263928016824162LL;
uint8_t x144 = 57U;
volatile int32_t t32 = 354521;
int8_t x148 = 3;
volatile int16_t x152 = INT16_MAX;
static uint32_t x153 = 515918U;
int8_t x154 = 0;
volatile int64_t t35 = 2050386486LL;
int16_t x159 = -1;
int8_t x164 = INT8_MAX;
volatile int8_t x184 = INT8_MIN;
int32_t x196 = 40544626;
int64_t x197 = INT64_MIN;
volatile int64_t x200 = INT64_MAX;
int64_t x204 = INT64_MAX;
uint64_t x211 = 89346211658LLU;
static uint64_t x212 = 390588844308LLU;
uint8_t x215 = 1U;
int32_t x223 = INT32_MAX;
volatile int32_t t49 = 209002611;
static uint32_t x227 = UINT32_MAX;
static int64_t x228 = INT64_MAX;
int64_t t50 = -3073774840089624972LL;
volatile int32_t x229 = INT32_MAX;
int32_t x233 = INT32_MIN;
static int64_t x244 = INT64_MIN;
int64_t t54 = 2LL;
int32_t x245 = 36231733;
static volatile int8_t x253 = INT8_MAX;
uint8_t x256 = 71U;
volatile int32_t t56 = 20;
static uint8_t x278 = UINT8_MAX;
static uint32_t x288 = 33152196U;
volatile uint64_t t62 = 79LLU;
int64_t x295 = -1LL;
int32_t x306 = INT32_MIN;
static volatile int32_t x308 = -2;
int64_t x311 = INT64_MIN;
int64_t t68 = 24057057LL;
volatile int64_t t69 = -83138197272371483LL;
uint64_t t70 = 6200562LLU;
static volatile int16_t x334 = INT16_MIN;
int32_t t72 = -1;
int16_t x345 = INT16_MIN;
static int64_t x350 = INT64_MAX;
uint32_t x355 = UINT32_MAX;
volatile uint32_t t78 = 2U;
uint8_t x362 = UINT8_MAX;
int8_t x363 = INT8_MAX;
static uint64_t t79 = 86143070416179LLU;
uint32_t x372 = 3U;
int64_t x377 = -3LL;
int32_t x383 = 3150817;
int16_t x384 = 1;
static int64_t x392 = INT64_MIN;
volatile int64_t t84 = -296LL;
int64_t x394 = 32053215196LL;
volatile uint32_t x395 = 18076U;
volatile uint8_t x396 = UINT8_MAX;
int64_t x397 = -1LL;
int64_t x400 = -1LL;
uint32_t x412 = 446U;
int64_t x441 = INT64_MIN;
int32_t x448 = -1066025143;
uint32_t x453 = 1242718574U;
int64_t x456 = 3942493872538030248LL;
int16_t x465 = INT16_MAX;
int8_t x467 = INT8_MAX;
volatile int32_t t99 = 606417;


void f0(void) {
	static int8_t x5 = -1;
	static uint16_t x6 = 319U;
	int16_t x7 = INT16_MAX;
	int64_t x8 = -26387LL;
	volatile int64_t t0 = -33356400LL;

	t0 = ((x5+(x6|x7))/x8);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	static int64_t x10 = -971916288LL;
	volatile int8_t x11 = -1;
	volatile int8_t x12 = -15;
	int64_t t1 = 4379229LL;

	t1 = ((x9+(x10|x11))/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x15 = INT32_MAX;
	uint32_t x16 = 47286U;
	volatile uint64_t t2 = 25499288553185LLU;

	t2 = ((x13+(x14|x15))/x16);

	if (t2 != 55662271143LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	volatile uint64_t x18 = 0LLU;
	int8_t x19 = 6;
	int16_t x20 = INT16_MIN;

	t3 = ((x17+(x18|x19))/x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int64_t x22 = 478493108462783255LL;
	int32_t x23 = INT32_MAX;
	volatile int32_t x24 = INT32_MIN;
	volatile int64_t t4 = -1036962699580LL;

	t4 = ((x21+(x22|x23))/x24);

	if (t4 != -222815716LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 25562LLU;
	int16_t x26 = -1;
	int16_t x27 = 12;
	int64_t x28 = -831737734299LL;

	t5 = ((x25+(x26|x27))/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = 1U;
	uint64_t x31 = 32LLU;
	int32_t x32 = -1;

	t6 = ((x29+(x30|x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int16_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = -1;
	int32_t t7 = -40;

	t7 = ((x33+(x34|x35))/x36);

	if (t7 != -126) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 21;
	volatile int16_t x39 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;
	uint64_t t8 = 9727160158773691LLU;

	t8 = ((x37+(x38|x39))/x40);

	if (t8 != 188LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 1;
	int32_t x42 = -1742;
	volatile uint16_t x43 = 3105U;
	int64_t t9 = -11309263949372LL;

	t9 = ((x41+(x42|x43))/x44);

	if (t9 != 716LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = UINT8_MAX;
	volatile int32_t x46 = INT32_MAX;
	static volatile uint64_t x47 = 14793466324905LLU;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t10 = 1LLU;

	t10 = ((x45+(x46|x47))/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MAX;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -27291292;

	t11 = ((x49+(x50|x51))/x52);

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1740032LL;
	int16_t x54 = INT16_MAX;
	int32_t x55 = -401919672;
	uint32_t x56 = 13665U;
	static volatile int64_t t12 = -14185463LL;

	t12 = ((x53+(x54|x55))/x56);

	if (t12 != -29538LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MAX;
	volatile uint32_t x59 = 716U;
	static int8_t x60 = -1;
	volatile uint32_t t13 = 0U;

	t13 = ((x57+(x58|x59))/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x63 = 916U;
	int64_t x64 = INT64_MAX;

	t14 = ((x61+(x62|x63))/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -1LL;
	int32_t x67 = -1;
	volatile uint32_t x68 = 23U;
	static int64_t t15 = 3296LL;

	t15 = ((x65+(x66|x67))/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 33;
	int16_t x75 = 9156;
	int64_t x76 = INT64_MIN;

	t16 = ((x73+(x74|x75))/x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = -1;
	int16_t x80 = -1;
	static volatile int32_t t17 = 49092;

	t17 = ((x77+(x78|x79))/x80);

	if (t17 != -32766) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = 11875;
	int16_t x83 = INT16_MAX;
	int16_t x84 = -103;
	volatile int32_t t18 = -3745697;

	t18 = ((x81+(x82|x83))/x84);

	if (t18 != -433) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 7428U;
	uint16_t x86 = 4U;
	int32_t x87 = INT32_MIN;
	static int32_t x88 = 1540;
	static int32_t t19 = 395391953;

	t19 = ((x85+(x86|x87))/x88);

	if (t19 != -1394465) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -7682856;
	volatile int32_t x90 = INT32_MIN;
	uint32_t x91 = 1093939U;
	int8_t x92 = INT8_MIN;
	static volatile uint32_t t20 = 30950U;

	t20 = ((x89+(x90|x91))/x92);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x95 = -132;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t21 = 321589950LLU;

	t21 = ((x93+(x94|x95))/x96);

	if (t21 != 145249953336205229LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = 41LL;
	volatile int8_t x99 = -1;
	volatile uint32_t x100 = UINT32_MAX;

	t22 = ((x97+(x98|x99))/x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -10;
	int32_t x102 = 4021760;
	volatile int32_t x104 = -943384;
	volatile int32_t t23 = 352354;

	t23 = ((x101+(x102|x103))/x104);

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	static int64_t x108 = INT64_MAX;
	volatile int64_t t24 = -2818707001841LL;

	t24 = ((x105+(x106|x107))/x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 3125;
	int16_t x110 = INT16_MAX;
	int32_t x111 = 78588;
	uint8_t x112 = 55U;
	volatile int32_t t25 = 298;

	t25 = ((x109+(x110|x111))/x112);

	if (t25 != 1844) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 104U;
	int32_t x120 = INT32_MAX;
	int32_t t26 = -1;

	t26 = ((x117+(x118|x119))/x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 3124254022LL;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 94U;
	volatile int64_t x124 = -33546698LL;
	static int64_t t27 = -9598916933971295LL;

	t27 = ((x121+(x122|x123))/x124);

	if (t27 != -93LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = 8682;
	static int32_t x126 = -1;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t28 = 0;

	t28 = ((x125+(x126|x127))/x128);

	if (t28 != -67) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = -1;
	static int8_t x131 = -1;
	uint32_t x132 = 492U;
	volatile uint32_t t29 = 239978U;

	t29 = ((x129+(x130|x131))/x132);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -54036665526LL;
	int8_t x134 = INT8_MIN;
	int64_t x135 = -29462333469612180LL;
	uint16_t x136 = 9U;
	volatile int64_t t30 = -39097320219465LL;

	t30 = ((x133+(x134|x135))/x136);

	if (t30 != -6004073949LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x137 = 51U;
	static int32_t x138 = -864;
	static int64_t x139 = 131472623165198LL;

	t31 = ((x137+(x138|x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x141 = UINT16_MAX;
	int8_t x142 = 4;
	static int32_t x143 = 13620939;

	t32 = ((x141+(x142|x143))/x144);

	if (t32 != 240113) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 416720390983494LLU;
	int8_t x146 = INT8_MAX;
	static int32_t x147 = -1;
	volatile uint64_t t33 = 3LLU;

	t33 = ((x145+(x146|x147))/x148);

	if (t33 != 138906796994497LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	static uint64_t x150 = UINT64_MAX;
	static int32_t x151 = -1;
	volatile uint64_t t34 = 2825005LLU;

	t34 = ((x149+(x150|x151))/x152);

	if (t34 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x155 = 63263512U;
	static int64_t x156 = INT64_MIN;

	t35 = ((x153+(x154|x155))/x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	volatile uint32_t x158 = 79279U;
	static int16_t x160 = 499;
	volatile int64_t t36 = -3906428981LL;

	t36 = ((x157+(x158|x159))/x160);

	if (t36 != 8607148LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x161 = 41U;
	volatile int64_t x162 = -1739871630LL;
	uint64_t x163 = 6294LLU;
	static uint64_t t37 = 311106LLU;

	t37 = ((x161+(x162|x163))/x164);

	if (t37 != 145249953322595939LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = 0;
	volatile uint64_t x174 = 8LLU;
	uint16_t x175 = 1909U;
	int16_t x176 = INT16_MIN;
	uint64_t t38 = 1276364436LLU;

	t38 = ((x173+(x174|x175))/x176);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1458243017899219691LL;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 5U;
	static volatile uint64_t x180 = 2362596534590350LLU;
	volatile uint64_t t39 = 1981285LLU;

	t39 = ((x177+(x178|x179))/x180);

	if (t39 != 7190LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x181 = UINT32_MAX;
	static int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	volatile uint32_t t40 = 8988738U;

	t40 = ((x181+(x182|x183))/x184);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 1LLU;
	static volatile uint16_t x186 = 1062U;
	volatile int16_t x187 = -4;
	int16_t x188 = INT16_MAX;
	uint64_t t41 = 70768285285240724LLU;

	t41 = ((x185+(x186|x187))/x188);

	if (t41 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x193 = UINT64_MAX;
	int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static uint64_t t42 = 5647573514LLU;

	t42 = ((x193+(x194|x195))/x196);

	if (t42 != 454973837314LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	volatile int64_t t43 = 914LL;

	t43 = ((x197+(x198|x199))/x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	volatile int64_t t44 = 3881814LL;

	t44 = ((x201+(x202|x203))/x204);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x205 = 30071U;
	int64_t x206 = -4013028724487LL;
	uint8_t x207 = 18U;
	uint32_t x208 = UINT32_MAX;
	int64_t t45 = 26830182LL;

	t45 = ((x205+(x206|x207))/x208);

	if (t45 != -934LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x209 = INT64_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	uint64_t t46 = 393LLU;

	t46 = ((x209+(x210|x211))/x212);

	if (t46 != 23614018LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	static int64_t x216 = -1LL;
	int64_t t47 = -3736461LL;

	t47 = ((x213+(x214|x215))/x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = UINT64_MAX;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t48 = 3843120914297876161LLU;

	t48 = ((x217+(x218|x219))/x220);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x221 = -1;
	int32_t x222 = 0;
	volatile int8_t x224 = 27;

	t49 = ((x221+(x222|x223))/x224);

	if (t49 != 79536431) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x225 = 0;
	volatile int64_t x226 = INT64_MIN;

	t50 = ((x225+(x226|x227))/x228);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x230 = INT32_MIN;
	int8_t x231 = -1;
	volatile int8_t x232 = -15;
	volatile int32_t t51 = 7934;

	t51 = ((x229+(x230|x231))/x232);

	if (t51 != -143165576) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x234 = UINT16_MAX;
	volatile int64_t x235 = 2LL;
	int32_t x236 = 4781817;
	volatile int64_t t52 = 309646407609358LL;

	t52 = ((x233+(x234|x235))/x236);

	if (t52 != -449LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = INT8_MAX;
	static uint64_t x238 = UINT64_MAX;
	uint32_t x239 = 2U;
	static uint64_t x240 = UINT64_MAX;
	uint64_t t53 = 540970LLU;

	t53 = ((x237+(x238|x239))/x240);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = -1;
	int64_t x242 = -1LL;
	uint16_t x243 = UINT16_MAX;

	t54 = ((x241+(x242|x243))/x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x246 = -3;
	static uint16_t x247 = 12U;
	int16_t x248 = -1;
	volatile int32_t t55 = -1965;

	t55 = ((x245+(x246|x247))/x248);

	if (t55 != -36231730) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x254 = INT8_MAX;
	volatile int16_t x255 = -1;

	t56 = ((x253+(x254|x255))/x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = INT16_MAX;
	uint8_t x262 = 57U;
	uint32_t x263 = 54414U;
	uint64_t x264 = 2187LLU;
	volatile uint64_t t57 = 14LLU;

	t57 = ((x261+(x262|x263))/x264);

	if (t57 != 39LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MAX;
	volatile int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MAX;
	uint16_t x272 = 51U;
	volatile int64_t t58 = 3662058154829169LL;

	t58 = ((x269+(x270|x271))/x272);

	if (t58 != -180850432095191037LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x273 = 4U;
	static volatile uint32_t x274 = 64511846U;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -1;
	uint32_t t59 = 8460U;

	t59 = ((x273+(x274|x275))/x276);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = -1;
	int32_t x279 = INT32_MIN;
	static int8_t x280 = -2;
	int32_t t60 = -15;

	t60 = ((x277+(x278|x279))/x280);

	if (t60 != 1073741697) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = 2U;
	int16_t x282 = -58;
	uint16_t x283 = 75U;
	volatile int64_t x284 = -1LL;
	static volatile int64_t t61 = 7110198349068306LL;

	t61 = ((x281+(x282|x283))/x284);

	if (t61 != 47LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = 17749120410LLU;
	uint64_t x286 = 5120767LLU;
	int8_t x287 = INT8_MAX;

	t62 = ((x285+(x286|x287))/x288);

	if (t62 != 535LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x289 = -2;
	uint32_t x290 = 3309747U;
	static volatile int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	uint32_t t63 = 834466U;

	t63 = ((x289+(x290|x291))/x292);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = -178LL;
	uint64_t x294 = 6184476214480444876LLU;
	static volatile int32_t x296 = INT32_MAX;
	volatile uint64_t t64 = 2872LLU;

	t64 = ((x293+(x294|x295))/x296);

	if (t64 != 8589934595LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x297 = -1LL;
	int32_t x298 = -1494;
	int64_t x299 = INT64_MIN;
	volatile uint8_t x300 = 8U;
	volatile int64_t t65 = 133634116630421934LL;

	t65 = ((x297+(x298|x299))/x300);

	if (t65 != -186LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = INT16_MIN;
	volatile int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = -1;
	int32_t t66 = -26;

	t66 = ((x301+(x302|x303))/x304);

	if (t66 != 32896) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = UINT8_MAX;
	static int8_t x307 = INT8_MIN;
	volatile int32_t t67 = 344396136;

	t67 = ((x305+(x306|x307))/x308);

	if (t67 != -63) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = 6;
	int64_t x310 = INT64_MIN;
	uint32_t x312 = 954508020U;

	t68 = ((x309+(x310|x311))/x312);

	if (t68 != -9662959182LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = -1LL;
	uint8_t x323 = 60U;
	int64_t x324 = INT64_MIN;

	t69 = ((x321+(x322|x323))/x324);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = 60605638782213LLU;
	uint32_t x326 = 3577899U;
	uint8_t x327 = UINT8_MAX;
	static uint8_t x328 = 63U;

	t70 = ((x325+(x326|x327))/x328);

	if (t70 != 961994323179LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = UINT64_MAX;
	uint64_t x330 = 446297584373376928LLU;
	volatile int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t71 = 680426833829LLU;

	t71 = ((x329+(x330|x331))/x332);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -1;
	uint16_t x335 = 64U;
	static int16_t x336 = INT16_MAX;

	t72 = ((x333+(x334|x335))/x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = 26826U;
	int32_t x338 = INT32_MIN;
	int16_t x339 = 14;
	uint64_t x340 = 60391575968745LLU;
	uint64_t t73 = 931822196007LLU;

	t73 = ((x337+(x338|x339))/x340);

	if (t73 != 305452LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = UINT64_MAX;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MAX;
	static uint8_t x344 = UINT8_MAX;
	volatile uint64_t t74 = 38630124719976LLU;

	t74 = ((x341+(x342|x343))/x344);

	if (t74 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x346 = -1;
	uint64_t x347 = 403LLU;
	int64_t x348 = INT64_MIN;
	static uint64_t t75 = 1021896LLU;

	t75 = ((x345+(x346|x347))/x348);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x349 = INT64_MIN;
	uint8_t x351 = 13U;
	uint8_t x352 = UINT8_MAX;
	int64_t t76 = -310303593569LL;

	t76 = ((x349+(x350|x351))/x352);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = -150203LL;
	int8_t x354 = INT8_MIN;
	uint16_t x356 = 95U;
	int64_t t77 = 283268531LL;

	t77 = ((x353+(x354|x355))/x356);

	if (t77 != 45208600LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = 4U;
	volatile uint32_t x358 = 3U;
	int32_t x359 = INT32_MAX;
	uint16_t x360 = 6U;

	t78 = ((x357+(x358|x359))/x360);

	if (t78 != 357913941U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MAX;
	static volatile uint64_t x364 = 1401842610107LLU;

	t79 = ((x361+(x362|x363))/x364);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x365 = INT16_MAX;
	uint32_t x366 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = 48U;
	volatile uint64_t t80 = 348216579285909LLU;

	t80 = ((x365+(x366|x367))/x368);

	if (t80 != 682LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = -20;
	static int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	int64_t t81 = 12250503LL;

	t81 = ((x369+(x370|x371))/x372);

	if (t81 != -7LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x378 = -1;
	int8_t x379 = 1;
	volatile int8_t x380 = INT8_MIN;
	int64_t t82 = -1155601460LL;

	t82 = ((x377+(x378|x379))/x380);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x381 = 181;
	int64_t x382 = -6LL;
	int64_t t83 = 234205664716LL;

	t83 = ((x381+(x382|x383))/x384);

	if (t83 != 176LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = 24539LL;
	static int32_t x391 = -1;

	t84 = ((x389+(x390|x391))/x392);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x393 = INT32_MAX;
	int64_t t85 = -524406829960LL;

	t85 = ((x393+(x394|x395))/x396);

	if (t85 != 134120451LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x398 = 3U;
	int64_t x399 = -58471135387LL;
	static int64_t t86 = 3LL;

	t86 = ((x397+(x398|x399))/x400);

	if (t86 != 58471135386LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x405 = UINT32_MAX;
	static uint16_t x406 = 11U;
	uint32_t x407 = 467176731U;
	volatile int8_t x408 = 11;
	static uint32_t t87 = 1416683320U;

	t87 = ((x405+(x406|x407))/x408);

	if (t87 != 42470611U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static uint32_t t88 = 111U;

	t88 = ((x409+(x410|x411))/x412);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = -1438614723LL;
	static int64_t x414 = INT64_MIN;
	static int32_t x415 = INT32_MIN;
	int32_t x416 = INT32_MIN;
	static int64_t t89 = -588577388168822LL;

	t89 = ((x413+(x414|x415))/x416);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = 6;
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = -1;
	volatile int16_t x428 = INT16_MIN;
	volatile uint32_t t90 = 3U;

	t90 = ((x425+(x426|x427))/x428);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x429 = 5U;
	static int16_t x430 = INT16_MAX;
	uint16_t x431 = UINT16_MAX;
	static uint32_t x432 = 88927U;
	uint32_t t91 = 24502U;

	t91 = ((x429+(x430|x431))/x432);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = -1;
	int64_t x434 = -1LL;
	int64_t x435 = -46LL;
	volatile int8_t x436 = INT8_MIN;
	int64_t t92 = 1LL;

	t92 = ((x433+(x434|x435))/x436);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x442 = INT32_MAX;
	int8_t x443 = INT8_MAX;
	int64_t x444 = -1LL;
	static volatile int64_t t93 = 26LL;

	t93 = ((x441+(x442|x443))/x444);

	if (t93 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = -1LL;
	static uint64_t x446 = UINT64_MAX;
	uint8_t x447 = 56U;
	uint64_t t94 = 3741722590635282LLU;

	t94 = ((x445+(x446|x447))/x448);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x449 = INT16_MIN;
	uint64_t x450 = 85967552LLU;
	int16_t x451 = -3549;
	uint32_t x452 = UINT32_MAX;
	static volatile uint64_t t95 = 3560283189198324LLU;

	t95 = ((x449+(x450|x451))/x452);

	if (t95 != 4294967296LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x454 = -1;
	int8_t x455 = -1;
	int64_t t96 = -4039092388487230LL;

	t96 = ((x453+(x454|x455))/x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x461 = UINT32_MAX;
	int8_t x462 = INT8_MAX;
	uint8_t x463 = 1U;
	uint8_t x464 = UINT8_MAX;
	uint32_t t97 = 1724331595U;

	t97 = ((x461+(x462|x463))/x464);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x466 = 40;
	uint32_t x468 = UINT32_MAX;
	uint32_t t98 = 22866906U;

	t98 = ((x465+(x466|x467))/x468);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = INT8_MIN;
	static int32_t x474 = -2543438;
	int16_t x475 = 3;
	static int32_t x476 = INT32_MAX;

	t99 = ((x473+(x474|x475))/x476);

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

