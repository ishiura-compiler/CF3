#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 1;
int8_t x2 = INT8_MIN;
volatile int8_t x9 = -1;
volatile int8_t x13 = 49;
volatile int32_t x15 = 34094;
int64_t x16 = INT64_MAX;
volatile int16_t x20 = INT16_MIN;
static volatile int32_t t4 = -1995;
int8_t x22 = -1;
static int8_t x28 = -28;
int32_t x29 = INT32_MAX;
uint16_t x30 = 15927U;
int16_t x35 = INT16_MIN;
static volatile uint32_t x36 = UINT32_MAX;
static int8_t x41 = INT8_MIN;
volatile int32_t x42 = 301;
int32_t x51 = INT32_MIN;
static int64_t x52 = INT64_MAX;
int32_t t13 = 7211131;
int16_t x59 = INT16_MAX;
static int32_t x60 = INT32_MIN;
int32_t t14 = -60571;
volatile int64_t x64 = INT64_MIN;
volatile int32_t t15 = 27;
volatile uint64_t x71 = UINT64_MAX;
volatile int32_t t17 = -99075286;
volatile int32_t x74 = 12954;
uint64_t x82 = 255924LLU;
static int32_t x83 = INT32_MIN;
int16_t x86 = INT16_MAX;
static int16_t x93 = INT16_MIN;
static volatile int32_t t25 = -1688;
volatile int32_t t27 = -19304542;
volatile uint16_t x118 = 1901U;
int16_t x125 = -1;
int32_t x126 = 56131837;
uint64_t x133 = 114761261085410LLU;
int32_t x137 = INT32_MIN;
static volatile uint64_t x141 = 99741LLU;
int16_t x143 = INT16_MIN;
volatile int32_t x146 = -50809072;
static uint8_t x147 = 13U;
int8_t x148 = INT8_MAX;
uint8_t x151 = 108U;
int32_t t37 = -3620092;
uint8_t x158 = UINT8_MAX;
uint16_t x159 = UINT16_MAX;
volatile int8_t x160 = 1;
static volatile int32_t t39 = -115438;
uint8_t x164 = 1U;
uint8_t x165 = UINT8_MAX;
static int8_t x168 = INT8_MIN;
static volatile int16_t x175 = -1;
static volatile int32_t t43 = -7;
static int16_t x184 = INT16_MIN;
volatile uint16_t x189 = 240U;
static int64_t x191 = INT64_MIN;
volatile int32_t t48 = 1037690403;
volatile int8_t x197 = -9;
volatile uint8_t x201 = UINT8_MAX;
volatile uint64_t x203 = 6726048LLU;
int64_t x208 = 912511927LL;
uint16_t x211 = UINT16_MAX;
int8_t x217 = INT8_MAX;
int64_t x219 = INT64_MAX;
static int64_t x224 = -113596LL;
volatile int32_t t55 = -285;
int32_t t56 = -34915026;
int8_t x243 = -1;
int32_t x244 = INT32_MIN;
int32_t t60 = -720;
uint8_t x251 = 119U;
volatile int32_t t61 = 11;
int64_t x253 = -1LL;
uint16_t x255 = 10060U;
int8_t x265 = -1;
int64_t x272 = INT64_MIN;
volatile int32_t t66 = 10344712;
static uint16_t x274 = UINT16_MAX;
int8_t x275 = -1;
int16_t x278 = -1;
static volatile uint32_t x280 = 985198245U;
static int64_t x283 = -1LL;
int8_t x286 = INT8_MIN;
int64_t x289 = 10737035191629LL;
volatile int32_t t71 = -7639;
int32_t x293 = INT32_MIN;
static int32_t x295 = 0;
int8_t x302 = -1;
int8_t x308 = INT8_MIN;
uint32_t x309 = 440973U;
static int32_t t76 = -1179213;
volatile uint8_t x321 = UINT8_MAX;
int32_t x326 = -1;
int32_t t80 = 2231349;
uint64_t x332 = 214190208574559774LLU;
int64_t x334 = INT64_MAX;
volatile int32_t t83 = -1254;
volatile int32_t t84 = -69;
volatile int32_t x345 = -169;
uint16_t x346 = UINT16_MAX;
static uint16_t x348 = UINT16_MAX;
int32_t t89 = -625693532;
int32_t t90 = 38808930;
int32_t x375 = -364449;
int8_t x377 = 0;
int32_t t92 = 39895;
int32_t x381 = -745621;
uint8_t x386 = UINT8_MAX;
int8_t x391 = 24;
int8_t x399 = 3;
int32_t x401 = INT32_MIN;
int16_t x402 = INT16_MAX;
int64_t x410 = INT64_MIN;
int32_t t99 = -6150341;


void f0(void) {
	static int64_t x3 = INT64_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = 64477842;

	t0 = (x1<=((x2^x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	uint8_t x7 = 49U;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 26012;

	t1 = (x5<=((x6^x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int64_t x11 = -40295123100694883LL;
	volatile uint8_t x12 = 40U;
	int32_t t2 = 307410;

	t2 = (x9<=((x10^x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = UINT8_MAX;
	volatile int32_t t3 = 9173;

	t3 = (x13<=((x14^x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static int32_t x19 = INT32_MAX;

	t4 = (x17<=((x18^x19)/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x23 = 319LL;
	static uint32_t x24 = 77U;
	int32_t t5 = -4577;

	t5 = (x21<=((x22^x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	static int8_t x26 = -1;
	uint16_t x27 = 3140U;
	static int32_t t6 = -511932895;

	t6 = (x25<=((x26^x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = -3888;

	t7 = (x29<=((x30^x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	volatile int32_t t8 = -9;

	t8 = (x33<=((x34^x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -216;
	int32_t x38 = INT32_MAX;
	uint8_t x39 = UINT8_MAX;
	static volatile uint8_t x40 = 2U;
	static int32_t t9 = 11417;

	t9 = (x37<=((x38^x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -1LL;
	uint16_t x44 = 10U;
	volatile int32_t t10 = 2641973;

	t10 = (x41<=((x42^x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	int16_t x47 = -1;
	volatile int32_t x48 = 4;
	static int32_t t11 = 62319;

	t11 = (x45<=((x46^x47)/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	int32_t t12 = 0;

	t12 = (x49<=((x50^x51)/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = -7;
	static int32_t x55 = -178740827;
	static int16_t x56 = INT16_MIN;

	t13 = (x53<=((x54^x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 1292279307LL;
	int64_t x58 = -1LL;

	t14 = (x57<=((x58^x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 15U;
	int8_t x62 = 25;
	int32_t x63 = -1;

	t15 = (x61<=((x62^x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	uint32_t x66 = 84404U;
	int64_t x67 = INT64_MAX;
	uint16_t x68 = 3853U;
	int32_t t16 = 87173;

	t16 = (x65<=((x66^x67)/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 6U;
	int32_t x70 = 986;
	volatile uint32_t x72 = 4727U;

	t17 = (x69<=((x70^x71)/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x75 = INT64_MAX;
	static int64_t x76 = -1LL;
	static int32_t t18 = 2094263;

	t18 = (x73<=((x74^x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 17346U;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -577610;

	t19 = (x77<=((x78^x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	volatile uint32_t x84 = UINT32_MAX;
	static int32_t t20 = 32613;

	t20 = (x81<=((x82^x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int8_t x88 = -1;
	static int32_t t21 = 8630333;

	t21 = (x85<=((x86^x87)/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	uint64_t x90 = UINT64_MAX;
	static int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -359;

	t22 = (x89<=((x90^x91)/x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MAX;
	static int64_t x95 = -1LL;
	int32_t x96 = INT32_MAX;
	int32_t t23 = -5;

	t23 = (x93<=((x94^x95)/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 816360039500640LLU;
	volatile int64_t x98 = INT64_MIN;
	static uint32_t x99 = 7U;
	volatile uint8_t x100 = UINT8_MAX;
	static int32_t t24 = -42727974;

	t24 = (x97<=((x98^x99)/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int32_t x102 = 9857978;
	volatile uint8_t x103 = 36U;
	uint16_t x104 = 1U;

	t25 = (x101<=((x102^x103)/x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 6222U;
	int16_t x106 = -1;
	int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 378376;

	t26 = (x105<=((x106^x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 1716838U;
	int16_t x110 = -1;
	static uint32_t x111 = 965U;
	uint16_t x112 = 94U;

	t27 = (x109<=((x110^x111)/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = 98;
	int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MIN;
	static int32_t t28 = 1;

	t28 = (x113<=((x114^x115)/x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 0U;
	int8_t x119 = INT8_MAX;
	static volatile uint8_t x120 = UINT8_MAX;
	int32_t t29 = -38;

	t29 = (x117<=((x118^x119)/x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -3929;
	int16_t x122 = 4;
	volatile uint64_t x123 = 420269583096953106LLU;
	uint16_t x124 = 25307U;
	int32_t t30 = 0;

	t30 = (x121<=((x122^x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x127 = -1;
	uint32_t x128 = 1967085092U;
	int32_t t31 = 36373872;

	t31 = (x125<=((x126^x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	int16_t x130 = 32;
	static uint32_t x131 = UINT32_MAX;
	int16_t x132 = 16;
	int32_t t32 = 652495785;

	t32 = (x129<=((x130^x131)/x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = UINT16_MAX;
	volatile int8_t x135 = 5;
	static volatile int64_t x136 = INT64_MIN;
	static int32_t t33 = -15386;

	t33 = (x133<=((x134^x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	static uint64_t x140 = 26795LLU;
	volatile int32_t t34 = 16690394;

	t34 = (x137<=((x138^x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 1621;
	volatile int32_t x144 = 3;
	int32_t t35 = 17777593;

	t35 = (x141<=((x142^x143)/x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 59U;
	static int32_t t36 = -62;

	t36 = (x145<=((x146^x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int64_t x150 = INT64_MIN;
	volatile int64_t x152 = INT64_MAX;

	t37 = (x149<=((x150^x151)/x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 96U;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 28U;
	static volatile int32_t t38 = -195481;

	t38 = (x153<=((x154^x155)/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;

	t39 = (x157<=((x158^x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = UINT64_MAX;
	static int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int32_t t40 = 943025;

	t40 = (x161<=((x162^x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -8;
	uint8_t x167 = UINT8_MAX;
	int32_t t41 = 1;

	t41 = (x165<=((x166^x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -179;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	static int8_t x172 = INT8_MIN;
	int32_t t42 = 14624174;

	t42 = (x169<=((x170^x171)/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -146398047;
	int64_t x174 = 166852604133068LL;
	uint32_t x176 = 9289U;

	t43 = (x173<=((x174^x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -481078LL;
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	int8_t x180 = -1;
	volatile int32_t t44 = -1849197;

	t44 = (x177<=((x178^x179)/x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -999868;
	uint32_t x182 = UINT32_MAX;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t t45 = 201;

	t45 = (x181<=((x182^x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static int64_t x187 = -1LL;
	uint64_t x188 = 3744125542LLU;
	int32_t t46 = -9;

	t46 = (x185<=((x186^x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	volatile int64_t x192 = -1LL;
	static volatile int32_t t47 = 13419624;

	t47 = (x189<=((x190^x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int16_t x194 = 260;
	int16_t x195 = INT16_MAX;
	static uint64_t x196 = 172LLU;

	t48 = (x193<=((x194^x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x198 = 2532276862187335663LLU;
	static uint8_t x199 = 1U;
	volatile uint64_t x200 = 67539715820LLU;
	int32_t t49 = -2159;

	t49 = (x197<=((x198^x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 75973;

	t50 = (x201<=((x202^x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 11;
	uint32_t x206 = 21U;
	int16_t x207 = INT16_MAX;
	volatile int32_t t51 = 8181700;

	t51 = (x205<=((x206^x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 4683;

	t52 = (x209<=((x210^x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	static uint64_t x214 = UINT64_MAX;
	uint16_t x215 = 22U;
	volatile int16_t x216 = 71;
	static int32_t t53 = -1;

	t53 = (x213<=((x214^x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 1868;

	t54 = (x217<=((x218^x219)/x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -1LL;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;

	t55 = (x221<=((x222^x223)/x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -1;
	int64_t x230 = -242999466342013LL;
	volatile uint64_t x231 = 7385152548974820LLU;
	uint64_t x232 = UINT64_MAX;

	t56 = (x229<=((x230^x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x233 = 5;
	static int8_t x234 = 2;
	static int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;
	static volatile int32_t t57 = 505;

	t57 = (x233<=((x234^x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	static uint64_t x238 = 19969726785LLU;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -12;
	volatile int32_t t58 = 2183655;

	t58 = (x237<=((x238^x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x242 = UINT32_MAX;
	int32_t t59 = 5936675;

	t59 = (x241<=((x242^x243)/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = -2910;
	volatile uint64_t x247 = UINT64_MAX;
	static volatile uint32_t x248 = UINT32_MAX;

	t60 = (x245<=((x246^x247)/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	uint64_t x252 = 92217443192906755LLU;

	t61 = (x249<=((x250^x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x254 = 0;
	int16_t x256 = 1;
	static volatile int32_t t62 = 836583935;

	t62 = (x253<=((x254^x255)/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = -1;
	int16_t x258 = -9706;
	int16_t x259 = INT16_MAX;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t63 = 1;

	t63 = (x257<=((x258^x259)/x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 534170U;
	uint64_t x262 = 55456LLU;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	int32_t t64 = 221281387;

	t64 = (x261<=((x262^x263)/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x266 = INT32_MIN;
	uint16_t x267 = 1U;
	uint32_t x268 = 411716U;
	volatile int32_t t65 = 6232071;

	t65 = (x265<=((x266^x267)/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -329;
	uint32_t x270 = 376U;
	int8_t x271 = 1;

	t66 = (x269<=((x270^x271)/x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x276 = -1;
	volatile int32_t t67 = 818;

	t67 = (x273<=((x274^x275)/x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x277 = 1767U;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t68 = 3283304;

	t68 = (x277<=((x278^x279)/x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x281 = 112U;
	static uint16_t x282 = 14U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = -52653944;

	t69 = (x281<=((x282^x283)/x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x287 = -1LL;
	int32_t x288 = -223354367;
	static volatile int32_t t70 = -968076260;

	t70 = (x285<=((x286^x287)/x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = -1;
	uint8_t x291 = 66U;
	static int32_t x292 = INT32_MIN;

	t71 = (x289<=((x290^x291)/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x294 = -280;
	static int32_t x296 = -1;
	int32_t t72 = 5848259;

	t72 = (x293<=((x294^x295)/x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t73 = -321549081;

	t73 = (x297<=((x298^x299)/x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x303 = 91U;
	int64_t x304 = -629758287LL;
	int32_t t74 = 703066968;

	t74 = (x301<=((x302^x303)/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 29U;
	static int32_t x306 = 2082541;
	static volatile uint16_t x307 = UINT16_MAX;
	static volatile int32_t t75 = -2;

	t75 = (x305<=((x306^x307)/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x310 = -43;
	static volatile uint16_t x311 = 47U;
	volatile int64_t x312 = 52304940185341572LL;

	t76 = (x309<=((x310^x311)/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = 3270LLU;
	int64_t x314 = -1LL;
	volatile uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MIN;
	int32_t t77 = 460;

	t77 = (x313<=((x314^x315)/x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 885984U;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t78 = 13467822;

	t78 = (x317<=((x318^x319)/x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 59U;
	static uint8_t x324 = 7U;
	int32_t t79 = 127622;

	t79 = (x321<=((x322^x323)/x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = -1;
	uint8_t x327 = 0U;
	static volatile uint8_t x328 = UINT8_MAX;

	t80 = (x325<=((x326^x327)/x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = 153301147;
	int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	volatile int32_t t81 = -5;

	t81 = (x329<=((x330^x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	volatile int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int32_t t82 = 7079;

	t82 = (x333<=((x334^x335)/x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = 1;
	int32_t x338 = INT32_MIN;
	static int64_t x339 = INT64_MIN;
	uint8_t x340 = 25U;

	t83 = (x337<=((x338^x339)/x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	static int16_t x343 = INT16_MIN;
	volatile int8_t x344 = INT8_MIN;

	t84 = (x341<=((x342^x343)/x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x347 = 8;
	volatile int32_t t85 = -58006;

	t85 = (x345<=((x346^x347)/x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 30327U;
	int16_t x350 = INT16_MAX;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t86 = 1688357;

	t86 = (x349<=((x350^x351)/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	uint64_t x355 = 178332999949377LLU;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t87 = -1;

	t87 = (x353<=((x354^x355)/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x361 = -15920;
	int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MAX;
	int8_t x364 = 1;
	int32_t t88 = -29;

	t88 = (x361<=((x362^x363)/x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MAX;
	static uint32_t x366 = 23301U;
	static int64_t x367 = INT64_MIN;
	static volatile int32_t x368 = INT32_MAX;

	t89 = (x365<=((x366^x367)/x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 29U;
	int16_t x370 = INT16_MAX;
	volatile uint32_t x371 = 355308925U;
	int8_t x372 = -1;

	t90 = (x369<=((x370^x371)/x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MAX;
	uint32_t x374 = UINT32_MAX;
	static uint32_t x376 = 198U;
	int32_t t91 = 1015;

	t91 = (x373<=((x374^x375)/x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x378 = 29958565198512674LLU;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t x380 = -5696805;

	t92 = (x377<=((x378^x379)/x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x382 = 190;
	volatile int32_t x383 = INT32_MIN;
	volatile int8_t x384 = INT8_MAX;
	static volatile int32_t t93 = -3679;

	t93 = (x381<=((x382^x383)/x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = INT8_MIN;
	volatile int64_t x387 = 7668044880939342LL;
	uint8_t x388 = 31U;
	int32_t t94 = -3;

	t94 = (x385<=((x386^x387)/x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 122U;
	int16_t x390 = -379;
	uint64_t x392 = 993102174LLU;
	volatile int32_t t95 = -208;

	t95 = (x389<=((x390^x391)/x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	static uint32_t x400 = UINT32_MAX;
	volatile int32_t t96 = -33;

	t96 = (x397<=((x398^x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x403 = -1LL;
	static volatile int64_t x404 = INT64_MIN;
	int32_t t97 = -13;

	t97 = (x401<=((x402^x403)/x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = 356676LL;
	uint64_t x406 = 32323909LLU;
	int16_t x407 = -27;
	int32_t x408 = INT32_MIN;
	int32_t t98 = 1;

	t98 = (x405<=((x406^x407)/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x409 = 94U;
	static int16_t x411 = -1;
	static int16_t x412 = 927;

	t99 = (x409<=((x410^x411)/x412));

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

