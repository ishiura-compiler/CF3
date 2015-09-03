#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
static int8_t x14 = INT8_MIN;
int64_t x18 = 768401254LL;
int32_t t4 = 149;
int16_t x28 = -1;
volatile uint8_t x32 = 33U;
uint8_t x33 = UINT8_MAX;
uint8_t x34 = 2U;
int16_t x35 = INT16_MAX;
volatile int8_t x40 = INT8_MIN;
static int16_t x41 = INT16_MAX;
uint64_t x42 = 190907510457635LLU;
int64_t x45 = INT64_MAX;
uint32_t x47 = UINT32_MAX;
volatile uint64_t x48 = 15851958LLU;
volatile int32_t t11 = 240;
int16_t x54 = -135;
static int8_t x56 = -1;
int64_t x57 = INT64_MAX;
static uint64_t x58 = UINT64_MAX;
int32_t t15 = 26416;
static int8_t x74 = INT8_MAX;
static int32_t t19 = -838220566;
int64_t x81 = -1LL;
uint32_t x89 = UINT32_MAX;
static int32_t x91 = 1250;
uint16_t x94 = 18U;
int8_t x96 = INT8_MIN;
int16_t x98 = INT16_MAX;
int32_t t24 = 160897193;
uint32_t x104 = UINT32_MAX;
int32_t t26 = -1;
static uint64_t x109 = 85586949568267LLU;
static volatile int32_t t27 = -5439;
int8_t x116 = INT8_MIN;
volatile int32_t x119 = INT32_MAX;
static int64_t x120 = INT64_MIN;
static int32_t x129 = -3636765;
uint8_t x133 = 1U;
int32_t t33 = 531;
uint32_t x147 = 2024U;
int64_t x151 = -3361751056889150203LL;
int32_t t37 = 3;
static int32_t x154 = 125749685;
volatile int64_t x155 = INT64_MAX;
volatile int16_t x161 = -4930;
volatile uint32_t x163 = UINT32_MAX;
int32_t t40 = 3783;
static volatile int32_t t41 = -5;
static volatile int32_t t42 = 364656;
int16_t x173 = -1;
static uint8_t x174 = UINT8_MAX;
int32_t x182 = INT32_MAX;
static int32_t t45 = -1632030;
int64_t x194 = INT64_MAX;
uint32_t x203 = UINT32_MAX;
uint8_t x204 = UINT8_MAX;
int32_t t51 = -28535;
int16_t x209 = -1;
int16_t x218 = -85;
uint8_t x226 = 9U;
int32_t t57 = 409653175;
int16_t x237 = 343;
uint32_t x238 = 32184U;
volatile int32_t t61 = 1521;
static int8_t x249 = INT8_MAX;
uint64_t x260 = 10481477700LLU;
uint32_t x264 = 52U;
int16_t x273 = 31;
int16_t x274 = INT16_MIN;
uint32_t x276 = UINT32_MAX;
volatile int32_t x296 = INT32_MIN;
int16_t x297 = INT16_MIN;
int16_t x299 = -1;
uint32_t x306 = UINT32_MAX;
uint8_t x308 = UINT8_MAX;
volatile int32_t t76 = 405256;
int64_t x310 = INT64_MAX;
int32_t x313 = -1;
int32_t x316 = -10664852;
static uint8_t x320 = 41U;
static volatile int32_t x325 = INT32_MIN;
int64_t x326 = 2543075590159356LL;
volatile uint8_t x328 = UINT8_MAX;
volatile int32_t t81 = -118283267;
volatile uint32_t x329 = 347683U;
uint16_t x331 = 567U;
uint16_t x332 = UINT16_MAX;
volatile int64_t x335 = 21787003LL;
int64_t x339 = INT64_MIN;
int64_t x341 = INT64_MIN;
int32_t t86 = 695636545;
volatile int64_t x350 = -1LL;
volatile uint16_t x356 = 6U;
volatile int8_t x358 = INT8_MAX;
int16_t x361 = INT16_MIN;
int64_t x366 = INT64_MAX;
uint32_t x380 = 8903U;
static int8_t x386 = INT8_MIN;
static volatile int32_t t96 = -65;
int64_t x390 = -1LL;
static volatile int32_t t97 = -14;
volatile uint64_t x400 = 301996354LLU;


void f0(void) {
	volatile int32_t x1 = -1959;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -27874497;

	t0 = (x1==((x2&x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	uint8_t x7 = 0U;
	uint64_t x8 = 13721322LLU;
	static int32_t t1 = 182;

	t1 = (x5==((x6&x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 4024;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -14189802;

	t2 = (x9==((x10&x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -1;
	uint8_t x15 = 0U;
	static int64_t x16 = -958790993528LL;
	int32_t t3 = 1;

	t3 = (x13==((x14&x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int8_t x19 = -1;
	static uint64_t x20 = 6359118144461437840LLU;

	t4 = (x17==((x18&x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 3410338LLU;
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MAX;
	static int32_t x24 = -238;
	static int32_t t5 = -4224;

	t5 = (x21==((x22&x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint16_t x26 = 95U;
	static uint16_t x27 = 5288U;
	static volatile int32_t t6 = 114386470;

	t6 = (x25==((x26&x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 20;
	static uint32_t x30 = 181236934U;
	int32_t x31 = 8816782;
	volatile int32_t t7 = -1605;

	t7 = (x29==((x30&x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x36 = -1;
	static int32_t t8 = 86;

	t8 = (x33==((x34&x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 14;
	int64_t x38 = 1737841LL;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t t9 = 6125;

	t9 = (x37==((x38&x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x43 = INT8_MIN;
	static int16_t x44 = 8;
	int32_t t10 = -313783592;

	t10 = (x41==((x42&x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 27U;

	t11 = (x45==((x46&x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	volatile int8_t x50 = -3;
	int8_t x51 = INT8_MAX;
	int64_t x52 = -1LL;
	int32_t t12 = -92;

	t12 = (x49==((x50&x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile uint64_t x55 = 419037921113194LLU;
	int32_t t13 = 58;

	t13 = (x53==((x54&x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = -1;
	static volatile int32_t t14 = -20966686;

	t14 = (x57==((x58&x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MAX;

	t15 = (x61==((x62&x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = 2;
	volatile int64_t x67 = -1LL;
	static uint16_t x68 = UINT16_MAX;
	static volatile int32_t t16 = 0;

	t16 = (x65==((x66&x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int64_t x71 = -1LL;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -11;

	t17 = (x69==((x70&x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 10941U;
	static volatile int32_t t18 = -25156;

	t18 = (x73==((x74&x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -16986;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 370239910U;
	static int8_t x80 = INT8_MIN;

	t19 = (x77==((x78&x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = 184855;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 51092457;

	t20 = (x81==((x82&x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 174278080LL;
	volatile int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MAX;
	static volatile int32_t t21 = -253;

	t21 = (x85==((x86&x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 13;
	int64_t x92 = INT64_MAX;
	int32_t t22 = 608;

	t22 = (x89==((x90&x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 989443254016LLU;
	static uint8_t x95 = UINT8_MAX;
	int32_t t23 = 2;

	t23 = (x93==((x94&x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = -1;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -1;

	t24 = (x97==((x98&x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 3U;
	volatile uint64_t x102 = UINT64_MAX;
	volatile int8_t x103 = -1;
	volatile int32_t t25 = -5849;

	t25 = (x101==((x102&x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int16_t x106 = 51;
	uint16_t x107 = 338U;
	int64_t x108 = INT64_MAX;

	t26 = (x105==((x106&x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -1;
	int64_t x111 = 1733728315515926167LL;
	uint8_t x112 = 110U;

	t27 = (x109==((x110&x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	volatile int32_t t28 = 4818146;

	t28 = (x113==((x114&x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	int32_t t29 = 247116048;

	t29 = (x117==((x118&x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 118U;
	int64_t x122 = -1LL;
	volatile int8_t x123 = INT8_MIN;
	uint8_t x124 = 31U;
	int32_t t30 = 639;

	t30 = (x121==((x122&x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	uint8_t x126 = 0U;
	uint16_t x127 = UINT16_MAX;
	volatile int16_t x128 = INT16_MIN;
	int32_t t31 = -29059924;

	t31 = (x125==((x126&x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = INT32_MIN;
	uint16_t x132 = 64U;
	static volatile int32_t t32 = 53;

	t32 = (x129==((x130&x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = 265422601387501567LLU;
	uint8_t x135 = 100U;
	static volatile int64_t x136 = INT64_MAX;

	t33 = (x133==((x134&x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 76485LLU;
	uint32_t x138 = 410158U;
	int64_t x139 = -176543737125022LL;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 0;

	t34 = (x137==((x138&x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 33;
	volatile int64_t x142 = -75965077002104LL;
	int64_t x143 = -1LL;
	int64_t x144 = 3617407985676057506LL;
	int32_t t35 = -119;

	t35 = (x141==((x142&x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = 1642;
	int8_t x148 = INT8_MIN;
	int32_t t36 = 5961;

	t36 = (x145==((x146&x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = 19;
	uint8_t x152 = 29U;

	t37 = (x149==((x150&x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static int16_t x156 = INT16_MIN;
	int32_t t38 = 11;

	t38 = (x153==((x154&x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int32_t x158 = 0;
	static volatile int64_t x159 = -1LL;
	int64_t x160 = 60LL;
	volatile int32_t t39 = 30302757;

	t39 = (x157==((x158&x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = UINT32_MAX;
	volatile uint32_t x164 = 2117223406U;

	t40 = (x161==((x162&x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int32_t x166 = -1;
	volatile int8_t x167 = -6;
	uint8_t x168 = UINT8_MAX;

	t41 = (x165==((x166&x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -36364596LL;
	static int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;

	t42 = (x169==((x170&x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x175 = -289;
	uint32_t x176 = 28238U;
	volatile int32_t t43 = -1628124;

	t43 = (x173==((x174&x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MAX;
	uint64_t x178 = 1754900225445LLU;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 6;

	t44 = (x177==((x178&x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	volatile uint16_t x184 = 30384U;

	t45 = (x181==((x182&x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static int64_t x186 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = -1LL;
	int32_t t46 = 4000;

	t46 = (x185==((x186&x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 10;
	static volatile int64_t x190 = -3195LL;
	uint32_t x191 = 335U;
	volatile int8_t x192 = INT8_MAX;
	int32_t t47 = 0;

	t47 = (x189==((x190&x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = -1;
	static int16_t x195 = INT16_MIN;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -142326659;

	t48 = (x193==((x194&x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -1880621;
	volatile int32_t x198 = INT32_MIN;
	volatile int32_t x199 = INT32_MIN;
	uint64_t x200 = 42187613LLU;
	int32_t t49 = 123079;

	t49 = (x197==((x198&x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 3053;
	int64_t x202 = INT64_MIN;
	int32_t t50 = 59620845;

	t50 = (x201==((x202&x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x206 = INT32_MIN;
	int32_t x207 = -407219;
	static volatile int16_t x208 = INT16_MIN;

	t51 = (x205==((x206&x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = 48712;
	volatile uint64_t x211 = 11LLU;
	static volatile int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -15398;

	t52 = (x209==((x210&x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = 31;
	static uint32_t x214 = 4045101U;
	int32_t x215 = -1;
	int8_t x216 = -1;
	int32_t t53 = 5;

	t53 = (x213==((x214&x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t54 = 10334701;

	t54 = (x217==((x218&x219)/x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 16966U;
	static int64_t x222 = -1LL;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	static volatile int32_t t55 = -11096904;

	t55 = (x221==((x222&x223)/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint16_t x227 = 102U;
	static int8_t x228 = -1;
	volatile int32_t t56 = -276079;

	t56 = (x225==((x226&x227)/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 2223U;
	int8_t x230 = -2;
	int64_t x231 = INT64_MAX;
	int64_t x232 = 108251962663209993LL;

	t57 = (x229==((x230&x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int8_t x234 = 1;
	uint64_t x235 = 393922LLU;
	static int8_t x236 = -1;
	volatile int32_t t58 = -110320;

	t58 = (x233==((x234&x235)/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x239 = 31U;
	static uint32_t x240 = 478293U;
	static volatile int32_t t59 = -150911;

	t59 = (x237==((x238&x239)/x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 12U;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	static uint32_t x244 = 32828U;
	int32_t t60 = 45510487;

	t60 = (x241==((x242&x243)/x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MIN;
	static uint8_t x247 = 3U;
	uint16_t x248 = 766U;

	t61 = (x245==((x246&x247)/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int32_t x251 = 295;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 1;

	t62 = (x249==((x250&x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = -1;
	int64_t x254 = INT64_MIN;
	static uint64_t x255 = 67651600527679LLU;
	static uint32_t x256 = 93572039U;
	int32_t t63 = 107283547;

	t63 = (x253==((x254&x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	static volatile int32_t x258 = 46830021;
	int32_t x259 = 50;
	int32_t t64 = 178806670;

	t64 = (x257==((x258&x259)/x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	static int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	volatile int32_t t65 = -50336;

	t65 = (x261==((x262&x263)/x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MIN;
	static uint8_t x266 = 59U;
	uint64_t x267 = UINT64_MAX;
	static uint8_t x268 = 15U;
	int32_t t66 = 2;

	t66 = (x265==((x266&x267)/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	int8_t x270 = -5;
	static int8_t x271 = 1;
	int32_t x272 = -1;
	volatile int32_t t67 = -13883838;

	t67 = (x269==((x270&x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x275 = INT32_MIN;
	static volatile int32_t t68 = 4583199;

	t68 = (x273==((x274&x275)/x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1;
	int16_t x278 = -1;
	int32_t x279 = -1;
	volatile int64_t x280 = INT64_MAX;
	int32_t t69 = 382491299;

	t69 = (x277==((x278&x279)/x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 360514U;
	int32_t x282 = INT32_MAX;
	volatile int64_t x283 = -1LL;
	volatile uint16_t x284 = UINT16_MAX;
	int32_t t70 = 51382510;

	t70 = (x281==((x282&x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	volatile int8_t x286 = INT8_MAX;
	volatile int32_t x287 = -1621;
	uint64_t x288 = UINT64_MAX;
	static int32_t t71 = 188231669;

	t71 = (x285==((x286&x287)/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	uint8_t x290 = 24U;
	static int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = -16350080;

	t72 = (x289==((x290&x291)/x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = 16;
	volatile int32_t t73 = -1;

	t73 = (x293==((x294&x295)/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -1;
	int16_t x300 = INT16_MAX;
	int32_t t74 = 164373943;

	t74 = (x297==((x298&x299)/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	static uint64_t x302 = 131898554744003LLU;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = -483742;

	t75 = (x301==((x302&x303)/x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 60838566313LLU;
	static uint16_t x307 = 6959U;

	t76 = (x305==((x306&x307)/x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x311 = 0U;
	volatile uint64_t x312 = 803701306LLU;
	int32_t t77 = 4813;

	t77 = (x309==((x310&x311)/x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	int64_t x315 = -1002LL;
	int32_t t78 = 3409728;

	t78 = (x313==((x314&x315)/x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	volatile int32_t t79 = -37867;

	t79 = (x317==((x318&x319)/x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 1;
	uint64_t x322 = 541783128262LLU;
	static int32_t x323 = -1;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = 920;

	t80 = (x321==((x322&x323)/x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = 39;

	t81 = (x325==((x326&x327)/x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 1U;
	volatile int32_t t82 = -4;

	t82 = (x329==((x330&x331)/x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -191LL;
	volatile uint8_t x334 = 4U;
	int16_t x336 = 999;
	int32_t t83 = 14183;

	t83 = (x333==((x334&x335)/x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -20;
	static volatile int8_t x338 = -60;
	volatile int32_t x340 = -6982;
	volatile int32_t t84 = -243539;

	t84 = (x337==((x338&x339)/x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x342 = 343934997U;
	static volatile uint64_t x343 = 3161168LLU;
	volatile uint32_t x344 = 4268U;
	volatile int32_t t85 = -250;

	t85 = (x341==((x342&x343)/x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 15U;
	static int8_t x346 = -1;
	int32_t x347 = -1;
	volatile uint16_t x348 = 15U;

	t86 = (x345==((x346&x347)/x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -15326;
	int32_t x351 = -1;
	volatile int32_t x352 = -1;
	volatile int32_t t87 = -86;

	t87 = (x349==((x350&x351)/x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -147986875;
	static int8_t x354 = -1;
	uint64_t x355 = 9995789469LLU;
	static int32_t t88 = -3570460;

	t88 = (x353==((x354&x355)/x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 714791989273186187LL;
	uint8_t x359 = 0U;
	int32_t x360 = -1;
	static int32_t t89 = -5;

	t89 = (x357==((x358&x359)/x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	volatile int8_t x363 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;
	int32_t t90 = 1;

	t90 = (x361==((x362&x363)/x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	volatile int32_t x367 = -1;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -2752;

	t91 = (x365==((x366&x367)/x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = 32;
	uint64_t x372 = 424385195129LLU;
	static volatile int32_t t92 = -152335872;

	t92 = (x369==((x370&x371)/x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int16_t x374 = -11872;
	int16_t x375 = 166;
	uint16_t x376 = 44U;
	volatile int32_t t93 = -30619;

	t93 = (x373==((x374&x375)/x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -50;
	int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MAX;
	int32_t t94 = -1337;

	t94 = (x377==((x378&x379)/x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	static volatile int8_t x382 = -1;
	uint8_t x383 = 26U;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t95 = 1;

	t95 = (x381==((x382&x383)/x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile uint64_t x387 = 250354803LLU;
	int8_t x388 = -1;

	t96 = (x385==((x386&x387)/x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 92U;
	volatile int16_t x391 = -1;
	int32_t x392 = -407454;

	t97 = (x389==((x390&x391)/x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x393 = 2471720370639LLU;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -3;
	int32_t t98 = -49;

	t98 = (x393==((x394&x395)/x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -1;
	volatile int64_t x398 = -116275515LL;
	volatile uint16_t x399 = UINT16_MAX;
	volatile int32_t t99 = -1;

	t99 = (x397==((x398&x399)/x400));

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

