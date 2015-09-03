#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint32_t x5 = 5U;
volatile int64_t x11 = INT64_MIN;
static uint64_t x20 = 9482380008186054LLU;
uint16_t x23 = 1890U;
int64_t x27 = 1597928727LL;
static int32_t x33 = INT32_MIN;
static volatile int32_t t8 = -304;
int32_t x51 = -25825;
static int32_t x58 = 31628270;
volatile int32_t t12 = -92;
int32_t x65 = INT32_MAX;
int16_t x75 = 1129;
volatile int8_t x80 = 8;
int16_t x96 = INT16_MIN;
int32_t x97 = INT32_MIN;
int32_t t20 = 230;
volatile int64_t x109 = 545908978258616LL;
uint32_t x112 = 173155U;
int16_t x114 = INT16_MIN;
volatile int32_t t26 = -10;
int64_t x125 = -11689LL;
int64_t x128 = 14031012511734LL;
volatile int8_t x138 = INT8_MIN;
int64_t x153 = INT64_MAX;
uint32_t x158 = UINT32_MAX;
int64_t x168 = -631043306154205LL;
volatile int32_t t37 = 0;
uint16_t x170 = 51U;
uint64_t x178 = UINT64_MAX;
volatile int16_t x179 = INT16_MIN;
int16_t x188 = INT16_MAX;
int32_t t43 = 112255344;
int8_t x195 = INT8_MIN;
static int64_t x196 = -1LL;
volatile int32_t t49 = 30;
uint64_t x222 = 1253943932517651054LLU;
uint64_t x224 = 2448947LLU;
int32_t x229 = INT32_MIN;
volatile int32_t t52 = 2;
int16_t x235 = INT16_MIN;
int32_t x239 = INT32_MIN;
int16_t x241 = INT16_MIN;
static uint16_t x242 = 0U;
int32_t x250 = INT32_MIN;
volatile int32_t t58 = 1358864;
int8_t x264 = INT8_MIN;
volatile int32_t t59 = -189;
int64_t x265 = 200693LL;
static volatile int32_t t62 = 12847334;
static int32_t x283 = INT32_MIN;
volatile int32_t t63 = -58989764;
int8_t x295 = INT8_MIN;
int8_t x302 = 0;
static int16_t x310 = 4553;
uint8_t x318 = 15U;
int32_t x320 = INT32_MAX;
uint64_t x321 = 3096LLU;
int32_t x322 = INT32_MIN;
int8_t x329 = 1;
int32_t x332 = -1;
int32_t x338 = 433521178;
uint8_t x342 = 6U;
static int32_t x344 = -26593360;
int64_t x346 = -123LL;
volatile int16_t x351 = INT16_MIN;
volatile int32_t t79 = -70812030;
int8_t x355 = INT8_MAX;
volatile int32_t t80 = -27;
int64_t x359 = -44686031492LL;
volatile int32_t t81 = -110800895;
static int8_t x363 = 6;
uint64_t x365 = 24391617LLU;
int32_t x376 = -3172258;
int16_t x378 = INT16_MAX;
uint32_t x393 = UINT32_MAX;
volatile int32_t x394 = INT32_MAX;
static volatile int32_t x395 = -1;
volatile int32_t t89 = 1047;
int16_t x397 = 117;
int32_t x400 = -1;
volatile int32_t t91 = 9275142;
int64_t x411 = -1LL;
int16_t x415 = -34;
volatile int8_t x431 = INT8_MIN;
uint16_t x435 = UINT16_MAX;
int32_t t96 = 10579439;
uint16_t x443 = 30525U;
volatile int64_t x448 = INT64_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static uint8_t x2 = 3U;
	int32_t x4 = -984;
	int32_t t0 = 20319856;

	t0 = (x1<=((x2^x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	volatile uint64_t x8 = 14145574LLU;
	volatile int32_t t1 = -470;

	t1 = (x5<=((x6^x7)-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 0;
	int32_t x10 = INT32_MAX;
	uint16_t x12 = UINT16_MAX;
	static int32_t t2 = -1271182;

	t2 = (x9<=((x10^x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 5U;
	volatile int32_t x14 = INT32_MAX;
	static uint8_t x15 = 30U;
	static int64_t x16 = -1LL;
	int32_t t3 = 138;

	t3 = (x13<=((x14^x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -3;
	volatile int32_t x18 = -1;
	uint64_t x19 = 3327538712LLU;
	int32_t t4 = -1588;

	t4 = (x17<=((x18^x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint64_t x22 = 76724LLU;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -3;

	t5 = (x21<=((x22^x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -64662856802880LL;
	uint64_t x26 = UINT64_MAX;
	int64_t x28 = -1LL;
	static volatile int32_t t6 = 3543;

	t6 = (x25<=((x26^x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = -7;
	int8_t x31 = 24;
	static uint8_t x32 = 113U;
	volatile int32_t t7 = 150429928;

	t7 = (x29<=((x30^x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = UINT64_MAX;
	static volatile int16_t x35 = 991;
	uint32_t x36 = 48U;

	t8 = (x33<=((x34^x35)-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 23U;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 117820418622LLU;
	static int32_t x40 = -28709;
	volatile int32_t t9 = 3;

	t9 = (x37<=((x38^x39)-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 10U;
	volatile int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MIN;
	static volatile uint64_t x48 = 80531192374604LLU;
	volatile int32_t t10 = 416;

	t10 = (x45<=((x46^x47)-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -168093;

	t11 = (x49<=((x50^x51)-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x57 = 295U;
	uint16_t x59 = 7U;
	volatile int16_t x60 = -1;

	t12 = (x57<=((x58^x59)-x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x66 = 272LLU;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = -1;
	int32_t t13 = 44;

	t13 = (x65<=((x66^x67)-x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = 39044;
	volatile int16_t x74 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t14 = 916350;

	t14 = (x73<=((x74^x75)-x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -46;
	volatile int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	volatile int32_t t15 = -41309;

	t15 = (x77<=((x78^x79)-x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	static int32_t x82 = INT32_MIN;
	volatile int16_t x83 = INT16_MAX;
	int16_t x84 = INT16_MAX;
	volatile int32_t t16 = 354;

	t16 = (x81<=((x82^x83)-x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MIN;
	volatile int16_t x86 = -1869;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t17 = -1;

	t17 = (x85<=((x86^x87)-x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 16022384551LLU;
	static volatile int32_t x91 = -90543036;
	static uint32_t x92 = UINT32_MAX;
	static int32_t t18 = -142304;

	t18 = (x89<=((x90^x91)-x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	volatile uint16_t x94 = 2U;
	uint64_t x95 = 72577LLU;
	static volatile int32_t t19 = -23824;

	t19 = (x93<=((x94^x95)-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = 230379312764LL;
	int32_t x99 = 5371161;
	static int8_t x100 = -1;

	t20 = (x97<=((x98^x99)-x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MAX;
	int8_t x103 = 1;
	volatile int64_t x104 = -1LL;
	volatile int32_t t21 = 919246;

	t21 = (x101<=((x102^x103)-x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	static uint64_t x106 = 15508937984682460LLU;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = -7;
	int32_t t22 = -130;

	t22 = (x105<=((x106^x107)-x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x110 = -1;
	int32_t x111 = -1;
	int32_t t23 = -1685;

	t23 = (x109<=((x110^x111)-x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = INT32_MAX;
	int8_t x115 = 26;
	uint32_t x116 = 897360691U;
	volatile int32_t t24 = 6154;

	t24 = (x113<=((x114^x115)-x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = -19;
	int32_t x118 = -26;
	volatile int64_t x119 = -8806374243LL;
	uint8_t x120 = 1U;
	static volatile int32_t t25 = -1;

	t25 = (x117<=((x118^x119)-x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 8U;
	static uint32_t x122 = 5342U;
	volatile int16_t x123 = -7;
	int32_t x124 = INT32_MAX;

	t26 = (x121<=((x122^x123)-x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MIN;
	int32_t t27 = -399016;

	t27 = (x125<=((x126^x127)-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 482U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t28 = -13640;

	t28 = (x129<=((x130^x131)-x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MAX;
	uint32_t x134 = 1U;
	static uint32_t x135 = 63760U;
	static int32_t x136 = -1;
	volatile int32_t t29 = -96537;

	t29 = (x133<=((x134^x135)-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 2U;
	int64_t x139 = INT64_MAX;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t30 = 0;

	t30 = (x137<=((x138^x139)-x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = -20;
	int16_t x143 = 1;
	int32_t x144 = 6590206;
	static int32_t t31 = 128523;

	t31 = (x141<=((x142^x143)-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = -45;
	volatile int32_t x148 = 11452;
	volatile int32_t t32 = -40;

	t32 = (x145<=((x146^x147)-x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = 706065830816LL;
	volatile int8_t x150 = INT8_MIN;
	static int16_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	int32_t t33 = 6530017;

	t33 = (x149<=((x150^x151)-x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t34 = 2;

	t34 = (x153<=((x154^x155)-x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	int8_t x159 = 6;
	uint8_t x160 = 13U;
	static int32_t t35 = 1;

	t35 = (x157<=((x158^x159)-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = INT32_MIN;
	uint32_t x162 = 68861936U;
	int8_t x163 = -14;
	static uint64_t x164 = 213816980394LLU;
	volatile int32_t t36 = 61664201;

	t36 = (x161<=((x162^x163)-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -1LL;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;

	t37 = (x165<=((x166^x167)-x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x171 = 15LLU;
	volatile int32_t x172 = -9366880;
	volatile int32_t t38 = -39721643;

	t38 = (x169<=((x170^x171)-x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 1U;
	uint64_t x174 = 42LLU;
	uint64_t x175 = 269938LLU;
	uint16_t x176 = 110U;
	static volatile int32_t t39 = -16;

	t39 = (x173<=((x174^x175)-x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t40 = 2153;

	t40 = (x177<=((x178^x179)-x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MAX;
	static int16_t x182 = -10;
	int8_t x183 = INT8_MIN;
	static int8_t x184 = INT8_MIN;
	int32_t t41 = -14335;

	t41 = (x181<=((x182^x183)-x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	int16_t x187 = 1;
	int32_t t42 = 102587;

	t42 = (x185<=((x186^x187)-x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = 40492006;
	uint8_t x190 = 32U;
	uint32_t x191 = UINT32_MAX;
	volatile int64_t x192 = INT64_MAX;

	t43 = (x189<=((x190^x191)-x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 21;
	int64_t x194 = 54LL;
	volatile int32_t t44 = -102;

	t44 = (x193<=((x194^x195)-x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 232U;
	int16_t x204 = -1;
	volatile int32_t t45 = -68262;

	t45 = (x201<=((x202^x203)-x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -2118593287927820288LL;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 3330389;
	volatile int32_t t46 = 0;

	t46 = (x205<=((x206^x207)-x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	volatile int32_t x210 = INT32_MIN;
	volatile uint64_t x211 = 27306LLU;
	int64_t x212 = -49053369LL;
	volatile int32_t t47 = -1030791;

	t47 = (x209<=((x210^x211)-x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	static uint8_t x214 = 1U;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t48 = -208282;

	t48 = (x213<=((x214^x215)-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x217 = UINT32_MAX;
	int8_t x218 = INT8_MIN;
	int8_t x219 = 15;
	int64_t x220 = -1LL;

	t49 = (x217<=((x218^x219)-x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x221 = INT32_MIN;
	volatile int8_t x223 = INT8_MIN;
	int32_t t50 = 4704155;

	t50 = (x221<=((x222^x223)-x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = -12191;
	int8_t x226 = 47;
	uint64_t x227 = UINT64_MAX;
	volatile uint32_t x228 = 1465U;
	volatile int32_t t51 = -1;

	t51 = (x225<=((x226^x227)-x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x230 = -1;
	static volatile uint32_t x231 = 8U;
	static int16_t x232 = -1;

	t52 = (x229<=((x230^x231)-x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x233 = 1318171716508938LLU;
	int32_t x234 = INT32_MAX;
	static volatile int64_t x236 = INT64_MIN;
	static volatile int32_t t53 = -1616;

	t53 = (x233<=((x234^x235)-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = 130U;
	int32_t x238 = INT32_MIN;
	uint8_t x240 = 23U;
	volatile int32_t t54 = 7622747;

	t54 = (x237<=((x238^x239)-x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x243 = INT16_MAX;
	volatile int64_t x244 = INT64_MAX;
	int32_t t55 = 26611;

	t55 = (x241<=((x242^x243)-x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	volatile int32_t x247 = -1;
	uint8_t x248 = 116U;
	volatile int32_t t56 = 235235921;

	t56 = (x245<=((x246^x247)-x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	int16_t x252 = 1;
	volatile int32_t t57 = 0;

	t57 = (x249<=((x250^x251)-x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = -1LL;
	static uint32_t x254 = 17738U;
	int16_t x255 = INT16_MAX;
	int32_t x256 = -1;

	t58 = (x253<=((x254^x255)-x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	static int8_t x262 = 33;
	int16_t x263 = INT16_MAX;

	t59 = (x261<=((x262^x263)-x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x266 = -3599LL;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 274099858970LLU;
	int32_t t60 = -10;

	t60 = (x265<=((x266^x267)-x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = -6;
	int8_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	static int32_t t61 = 109717775;

	t61 = (x269<=((x270^x271)-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = UINT64_MAX;
	static volatile int32_t x274 = 721252;
	int32_t x275 = INT32_MIN;
	volatile uint16_t x276 = UINT16_MAX;

	t62 = (x273<=((x274^x275)-x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MAX;
	uint64_t x284 = 116792LLU;

	t63 = (x281<=((x282^x283)-x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x285 = 1420U;
	volatile int8_t x286 = 7;
	int16_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;
	int32_t t64 = 207518562;

	t64 = (x285<=((x286^x287)-x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = INT16_MIN;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t65 = -3;

	t65 = (x289<=((x290^x291)-x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MAX;
	volatile int16_t x294 = INT16_MIN;
	static uint8_t x296 = UINT8_MAX;
	volatile int32_t t66 = -31;

	t66 = (x293<=((x294^x295)-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = UINT8_MAX;
	volatile int16_t x298 = 0;
	static int32_t x299 = -1;
	int32_t x300 = INT32_MIN;
	volatile int32_t t67 = -11;

	t67 = (x297<=((x298^x299)-x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 672U;
	uint64_t x303 = 8254437579LLU;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t68 = -3745501;

	t68 = (x301<=((x302^x303)-x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x309 = 14398456U;
	uint64_t x311 = 61514689814LLU;
	uint64_t x312 = 4LLU;
	static volatile int32_t t69 = -2;

	t69 = (x309<=((x310^x311)-x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x313 = -1;
	volatile int8_t x314 = 2;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MAX;
	volatile int32_t t70 = 154496653;

	t70 = (x313<=((x314^x315)-x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = 11699;
	int8_t x319 = 4;
	int32_t t71 = 174282;

	t71 = (x317<=((x318^x319)-x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x323 = -1LL;
	int64_t x324 = -1LL;
	int32_t t72 = -17;

	t72 = (x321<=((x322^x323)-x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x325 = INT16_MIN;
	volatile int8_t x326 = 15;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = -1;
	static int32_t t73 = 1099575;

	t73 = (x325<=((x326^x327)-x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x330 = 0U;
	int8_t x331 = INT8_MAX;
	static int32_t t74 = -1654145;

	t74 = (x329<=((x330^x331)-x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MAX;
	uint64_t x334 = 90916504092LLU;
	static uint32_t x335 = UINT32_MAX;
	volatile uint32_t x336 = 6702120U;
	volatile int32_t t75 = -110024;

	t75 = (x333<=((x334^x335)-x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x337 = 86U;
	int8_t x339 = -1;
	int16_t x340 = -3056;
	volatile int32_t t76 = 31;

	t76 = (x337<=((x338^x339)-x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x341 = 21;
	uint32_t x343 = UINT32_MAX;
	static volatile int32_t t77 = -1172581;

	t77 = (x341<=((x342^x343)-x344));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = -1;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t78 = 206;

	t78 = (x345<=((x346^x347)-x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MAX;
	int8_t x350 = INT8_MAX;
	static int8_t x352 = 11;

	t79 = (x349<=((x350^x351)-x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x353 = 25U;
	volatile uint8_t x354 = 0U;
	int64_t x356 = INT64_MAX;

	t80 = (x353<=((x354^x355)-x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MIN;
	int8_t x360 = -1;

	t81 = (x357<=((x358^x359)-x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MIN;
	volatile uint8_t x362 = 1U;
	int8_t x364 = -1;
	int32_t t82 = 9840;

	t82 = (x361<=((x362^x363)-x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x366 = INT64_MIN;
	static uint8_t x367 = 50U;
	volatile int8_t x368 = INT8_MIN;
	int32_t t83 = 3;

	t83 = (x365<=((x366^x367)-x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x369 = -1LL;
	uint16_t x370 = 210U;
	uint16_t x371 = 0U;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t84 = -5403656;

	t84 = (x369<=((x370^x371)-x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x373 = 254750U;
	uint64_t x374 = 75821347086298402LLU;
	uint16_t x375 = 0U;
	int32_t t85 = 688;

	t85 = (x373<=((x374^x375)-x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = 0U;
	int8_t x379 = INT8_MAX;
	static volatile uint8_t x380 = 40U;
	volatile int32_t t86 = 277;

	t86 = (x377<=((x378^x379)-x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = 3946988131062323790LLU;
	uint16_t x384 = UINT16_MAX;
	int32_t t87 = 0;

	t87 = (x381<=((x382^x383)-x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MAX;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 3066U;
	int8_t x388 = -6;
	volatile int32_t t88 = -98015;

	t88 = (x385<=((x386^x387)-x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x396 = 213U;

	t89 = (x393<=((x394^x395)-x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x398 = INT64_MIN;
	static volatile int64_t x399 = 31333461587439396LL;
	volatile int32_t t90 = 47;

	t90 = (x397<=((x398^x399)-x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = 20;
	int64_t x402 = INT64_MIN;
	static uint8_t x403 = 5U;
	int8_t x404 = -22;

	t91 = (x401<=((x402^x403)-x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MAX;
	int8_t x412 = -4;
	volatile int32_t t92 = 6061;

	t92 = (x409<=((x410^x411)-x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	static volatile uint64_t x414 = 345LLU;
	int32_t x416 = INT32_MAX;
	static volatile int32_t t93 = -4030117;

	t93 = (x413<=((x414^x415)-x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	static int32_t x420 = INT32_MIN;
	static int32_t t94 = 119277519;

	t94 = (x417<=((x418^x419)-x420));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x429 = 117U;
	uint16_t x430 = 32U;
	volatile uint8_t x432 = UINT8_MAX;
	volatile int32_t t95 = 15353842;

	t95 = (x429<=((x430^x431)-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -1LL;
	int16_t x434 = -338;
	volatile int64_t x436 = -1LL;

	t96 = (x433<=((x434^x435)-x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MIN;
	int64_t x440 = 26849LL;
	int32_t t97 = 359407;

	t97 = (x437<=((x438^x439)-x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = 0;
	uint8_t x442 = 2U;
	int16_t x444 = 2;
	int32_t t98 = -156723680;

	t98 = (x441<=((x442^x443)-x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = -4;
	static int16_t x446 = 9;
	static int64_t x447 = INT64_MIN;
	volatile int32_t t99 = 6612;

	t99 = (x445<=((x446^x447)-x448));

	if (t99 != 1) { NG(); } else { ; }
	
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

