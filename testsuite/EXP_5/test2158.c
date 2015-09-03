#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -1;
uint32_t x11 = 1517792537U;
int8_t x12 = -6;
int8_t x20 = INT8_MIN;
uint64_t x23 = UINT64_MAX;
static uint8_t x29 = UINT8_MAX;
volatile uint64_t x30 = UINT64_MAX;
int8_t x35 = INT8_MIN;
int64_t x36 = INT64_MIN;
volatile uint64_t x37 = 7074010207LLU;
volatile int8_t x42 = -1;
int32_t t10 = -27;
int16_t x48 = INT16_MAX;
volatile uint32_t t11 = 242858430U;
volatile int64_t x50 = INT64_MIN;
volatile uint64_t t13 = 48616401788LLU;
int8_t x57 = 40;
int8_t x59 = INT8_MAX;
volatile int64_t t16 = 57874LL;
static uint64_t x76 = 137LLU;
uint16_t x77 = UINT16_MAX;
volatile int16_t x80 = INT16_MIN;
uint8_t x83 = UINT8_MAX;
uint8_t x94 = 63U;
uint16_t x97 = UINT16_MAX;
int8_t x100 = INT8_MIN;
static int32_t t24 = -11221260;
static uint8_t x103 = 3U;
uint32_t x107 = 121U;
volatile int32_t t26 = -634286811;
static int32_t x113 = -1;
int32_t x115 = 124;
uint64_t x118 = UINT64_MAX;
static int16_t x119 = -1;
int16_t x126 = INT16_MIN;
int16_t x128 = INT16_MIN;
uint64_t x131 = 2714399525680012LLU;
volatile int32_t x132 = INT32_MIN;
int64_t x136 = INT64_MIN;
uint64_t x142 = 1116245369344790568LLU;
volatile uint16_t x152 = 1859U;
volatile int8_t x156 = INT8_MIN;
int16_t x160 = 37;
int64_t t39 = -280568442734364859LL;
int32_t x164 = -673271;
int32_t x166 = -7;
volatile int32_t x171 = INT32_MAX;
int8_t x184 = -1;
static volatile uint16_t x191 = 23280U;
int8_t x193 = INT8_MAX;
int32_t x208 = INT32_MIN;
static volatile uint16_t x210 = UINT16_MAX;
uint64_t x211 = 45217635071LLU;
int16_t x220 = -2;
int64_t x226 = INT64_MAX;
int64_t x230 = INT64_MIN;
int32_t x231 = -1;
int32_t t59 = -80;
uint32_t x244 = UINT32_MAX;
volatile int16_t x245 = -1;
uint16_t x246 = UINT16_MAX;
uint32_t x247 = UINT32_MAX;
int32_t x252 = INT32_MAX;
int32_t t62 = 1;
int32_t t63 = -135269;
int64_t x257 = INT64_MIN;
uint8_t x259 = UINT8_MAX;
volatile int16_t x265 = INT16_MAX;
int32_t x268 = INT32_MAX;
volatile int32_t t67 = -3;
uint32_t x279 = UINT32_MAX;
volatile int32_t x280 = INT32_MIN;
static uint8_t x281 = 2U;
volatile uint16_t x285 = 11605U;
static int64_t x295 = -1LL;
int16_t x299 = INT16_MIN;
volatile uint16_t x300 = UINT16_MAX;
volatile int8_t x303 = -1;
static int64_t x305 = -100774453368LL;
int64_t x310 = INT64_MIN;
volatile uint16_t x314 = 0U;
volatile int64_t x318 = -11458884228999808LL;
int32_t t79 = -366007;
volatile uint32_t x321 = 3764U;
volatile int64_t x322 = INT64_MAX;
uint64_t x323 = 2195501250772LLU;
int32_t x329 = 128;
int32_t t82 = -214770;
int8_t x337 = INT8_MAX;
volatile int32_t t84 = 412585;
uint8_t x350 = UINT8_MAX;
uint8_t x360 = 3U;
int64_t x379 = -1LL;
int64_t x380 = -2LL;
uint16_t x381 = 262U;
uint16_t x391 = 45U;
volatile int16_t x393 = INT16_MIN;
int32_t x394 = INT32_MIN;
static int32_t t98 = -352;


void f0(void) {
	volatile int16_t x1 = -1;
	int16_t x2 = INT16_MAX;
	int64_t x3 = -1LL;
	volatile uint16_t x4 = 37U;
	int32_t t0 = 274;

	t0 = (x1^((x2^x3)<=x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 42U;
	int32_t x7 = -79;
	volatile int64_t x8 = -1LL;
	int32_t t1 = 147;

	t1 = (x5^((x6^x7)<=x8));

	if (t1 != 42) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	volatile int32_t t2 = 10986900;

	t2 = (x9^((x10^x11)<=x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x14 = 4U;
	static int32_t x15 = 205251513;
	int8_t x16 = -23;
	int32_t t3 = -183;

	t3 = (x13^((x14^x15)<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 176;
	volatile uint32_t x18 = 241U;
	volatile int32_t x19 = -236;
	int32_t t4 = 187143920;

	t4 = (x17^((x18^x19)<=x20));

	if (t4 != 176) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 2U;
	int16_t x22 = -4202;
	volatile int8_t x24 = INT8_MAX;
	static int32_t t5 = -1;

	t5 = (x21^((x22^x23)<=x24));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 886U;
	int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 1;
	static int32_t t6 = -61696990;

	t6 = (x25^((x26^x27)<=x28));

	if (t6 != 886) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -1301;

	t7 = (x29^((x30^x31)<=x32));

	if (t7 != 254) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 27;
	int32_t x34 = -56811938;
	volatile int32_t t8 = 123912221;

	t8 = (x33^((x34^x35)<=x36));

	if (t8 != 27) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -1;
	volatile uint32_t x39 = UINT32_MAX;
	volatile uint64_t x40 = 89855027LLU;
	static volatile uint64_t t9 = 30LLU;

	t9 = (x37^((x38^x39)<=x40));

	if (t9 != 7074010206LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int64_t x43 = -98672446167343LL;
	volatile uint8_t x44 = 48U;

	t10 = (x41^((x42^x43)<=x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 2314752U;
	int32_t x46 = -1;
	uint32_t x47 = 81U;

	t11 = (x45^((x46^x47)<=x48));

	if (t11 != 2314752U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MAX;
	volatile int8_t x51 = 1;
	int32_t x52 = INT32_MAX;
	volatile int64_t t12 = 792095300159LL;

	t12 = (x49^((x50^x51)<=x52));

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 21LLU;
	uint8_t x54 = 0U;
	volatile int8_t x55 = 0;
	volatile int8_t x56 = -1;

	t13 = (x53^((x54^x55)<=x56));

	if (t13 != 21LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	uint8_t x60 = 1U;
	volatile int32_t t14 = 186921780;

	t14 = (x57^((x58^x59)<=x60));

	if (t14 != 40) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	static int32_t x63 = INT32_MAX;
	int32_t x64 = -1;
	static int32_t t15 = -27816588;

	t15 = (x61^((x62^x63)<=x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 55LL;
	int16_t x66 = -1;
	uint32_t x67 = 180U;
	int64_t x68 = 462034831LL;

	t16 = (x65^((x66^x67)<=x68));

	if (t16 != 55LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = INT64_MIN;
	static int64_t x71 = INT64_MIN;
	uint64_t x72 = 249LLU;
	volatile int32_t t17 = 168845949;

	t17 = (x69^((x70^x71)<=x72));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 26U;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	volatile int32_t t18 = 22253;

	t18 = (x73^((x74^x75)<=x76));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	static volatile int8_t x79 = -1;
	int32_t t19 = 3;

	t19 = (x77^((x78^x79)<=x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MAX;
	static int16_t x84 = INT16_MAX;
	int32_t t20 = -31;

	t20 = (x81^((x82^x83)<=x84));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	static int64_t x86 = -1LL;
	int32_t x87 = INT32_MAX;
	uint16_t x88 = 0U;
	int32_t t21 = -11;

	t21 = (x85^((x86^x87)<=x88));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 51U;
	static int16_t x90 = -9;
	uint32_t x91 = 6472U;
	uint64_t x92 = 3288116688080925LLU;
	int32_t t22 = 13592813;

	t22 = (x89^((x90^x91)<=x92));

	if (t22 != 50) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	volatile int16_t x95 = -4;
	static int64_t x96 = -55LL;
	int64_t t23 = -292121LL;

	t23 = (x93^((x94^x95)<=x96));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;

	t24 = (x97^((x98^x99)<=x100));

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 32;
	static int64_t x102 = INT64_MIN;
	uint8_t x104 = 45U;
	volatile int32_t t25 = -542160510;

	t25 = (x101^((x102^x103)<=x104));

	if (t25 != 33) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x106 = -1;
	uint64_t x108 = 2LLU;

	t26 = (x105^((x106^x107)<=x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MAX;
	int64_t x110 = -81LL;
	uint16_t x111 = 65U;
	volatile int64_t x112 = 246286968LL;
	static int64_t t27 = 114906118734488LL;

	t27 = (x109^((x110^x111)<=x112));

	if (t27 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 0U;
	uint8_t x116 = 4U;
	int32_t t28 = 112;

	t28 = (x113^((x114^x115)<=x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 41;

	t29 = (x117^((x118^x119)<=x120));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MAX;
	int16_t x122 = INT16_MAX;
	static uint32_t x123 = 291U;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -1366305;

	t30 = (x121^((x122^x123)<=x124));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -78LL;
	int32_t x127 = 2;
	volatile int64_t t31 = -529100104444LL;

	t31 = (x125^((x126^x127)<=x128));

	if (t31 != -78LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 12327;
	int32_t x130 = INT32_MAX;
	volatile int32_t t32 = 32135;

	t32 = (x129^((x130^x131)<=x132));

	if (t32 != 12326) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = -841;
	static uint8_t x135 = 25U;
	int32_t t33 = INT32_MAX;

	t33 = (x133^((x134^x135)<=x136));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = -1;
	static uint64_t x140 = 7427874610LLU;
	int32_t t34 = 100272;

	t34 = (x137^((x138^x139)<=x140));

	if (t34 != 254) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	static int32_t x143 = -14149;
	volatile uint64_t x144 = UINT64_MAX;
	int64_t t35 = -308727359LL;

	t35 = (x141^((x142^x143)<=x144));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 4U;
	uint32_t x146 = 3436115U;
	int32_t x147 = INT32_MIN;
	static uint32_t x148 = UINT32_MAX;
	uint32_t t36 = 486110335U;

	t36 = (x145^((x146^x147)<=x148));

	if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 668703LLU;
	uint16_t x150 = 125U;
	int64_t x151 = -1LL;
	uint64_t t37 = 338711019LLU;

	t37 = (x149^((x150^x151)<=x152));

	if (t37 != 668702LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 3450920;
	int32_t x154 = -1;
	volatile int32_t x155 = -1;
	int32_t t38 = 205306523;

	t38 = (x153^((x154^x155)<=x156));

	if (t38 != 3450920) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MAX;

	t39 = (x157^((x158^x159)<=x160));

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 4U;
	int8_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t t40 = 27988450;

	t40 = (x161^((x162^x163)<=x164));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x167 = -59933117;
	uint64_t x168 = 815530046844486LLU;
	volatile uint32_t t41 = 33097U;

	t41 = (x165^((x166^x167)<=x168));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = -1;
	int8_t x170 = -1;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t42 = 3902;

	t42 = (x169^((x170^x171)<=x172));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -8;
	uint32_t x174 = UINT32_MAX;
	volatile int64_t x175 = -244LL;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 22508;

	t43 = (x173^((x174^x175)<=x176));

	if (t43 != -7) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int8_t x178 = INT8_MIN;
	volatile int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = -1054099701;

	t44 = (x177^((x178^x179)<=x180));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	static volatile int32_t t45 = 10541;

	t45 = (x181^((x182^x183)<=x184));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = -2;
	static int16_t x187 = 504;
	volatile uint16_t x188 = 12U;
	int32_t t46 = 35726;

	t46 = (x185^((x186^x187)<=x188));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -47341;
	uint32_t x192 = UINT32_MAX;
	static volatile int32_t t47 = 1045;

	t47 = (x189^((x190^x191)<=x192));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x194 = UINT8_MAX;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = -310167130;

	t48 = (x193^((x194^x195)<=x196));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = UINT32_MAX;
	static uint64_t x198 = 417430LLU;
	volatile int8_t x199 = INT8_MIN;
	volatile uint16_t x200 = UINT16_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x197^((x198^x199)<=x200));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x202 = 15U;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -64371;

	t50 = (x201^((x202^x203)<=x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 4LLU;
	int32_t x206 = 0;
	int32_t x207 = -1;
	static uint64_t t51 = 508722610894325LLU;

	t51 = (x205^((x206^x207)<=x208));

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 52861U;
	volatile int16_t x212 = -1;
	uint32_t t52 = 1U;

	t52 = (x209^((x210^x211)<=x212));

	if (t52 != 52860U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -2014827961071932LL;
	int8_t x214 = 3;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = 779779U;
	static int64_t t53 = 174716LL;

	t53 = (x213^((x214^x215)<=x216));

	if (t53 != -2014827961071932LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 97U;
	int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MIN;
	volatile int32_t t54 = -7071;

	t54 = (x217^((x218^x219)<=x220));

	if (t54 != 97) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	int16_t x224 = -1;
	static int64_t t55 = INT64_MIN;

	t55 = (x221^((x222^x223)<=x224));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 0U;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -1126;
	volatile int32_t t56 = -52445474;

	t56 = (x225^((x226^x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	int8_t x232 = INT8_MAX;
	int32_t t57 = 818;

	t57 = (x229^((x230^x231)<=x232));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static uint32_t x234 = 0U;
	int8_t x235 = INT8_MIN;
	volatile int64_t x236 = -103677940896491LL;
	volatile int32_t t58 = 9;

	t58 = (x233^((x234^x235)<=x236));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static int32_t x238 = INT32_MIN;
	uint16_t x239 = 76U;
	volatile int32_t x240 = INT32_MAX;

	t59 = (x237^((x238^x239)<=x240));

	if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint16_t x242 = 3U;
	uint16_t x243 = 207U;
	volatile int32_t t60 = 200;

	t60 = (x241^((x242^x243)<=x244));

	if (t60 != 2147483646) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x248 = 9547LLU;
	volatile int32_t t61 = 1;

	t61 = (x245^((x246^x247)<=x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	volatile int8_t x251 = INT8_MAX;

	t62 = (x249^((x250^x251)<=x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 99U;
	volatile int32_t x256 = 2136;

	t63 = (x253^((x254^x255)<=x256));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x258 = -1;
	volatile int8_t x260 = -1;
	volatile int64_t t64 = -22426089076361LL;

	t64 = (x257^((x258^x259)<=x260));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 5764U;
	int16_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile uint32_t t65 = 0U;

	t65 = (x261^((x262^x263)<=x264));

	if (t65 != 5764U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t66 = -1;

	t66 = (x265^((x266^x267)<=x268));

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -6466;
	int8_t x270 = -1;
	uint8_t x271 = 10U;
	static volatile uint64_t x272 = UINT64_MAX;

	t67 = (x269^((x270^x271)<=x272));

	if (t67 != -6465) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 30958295;

	t68 = (x273^((x274^x275)<=x276));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = 28;
	int32_t t69 = INT32_MAX;

	t69 = (x277^((x278^x279)<=x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 19U;
	volatile int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t70 = -252;

	t70 = (x281^((x282^x283)<=x284));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1;
	uint64_t x287 = 119707673LLU;
	int8_t x288 = 1;
	int32_t t71 = -1625;

	t71 = (x285^((x286^x287)<=x288));

	if (t71 != 11605) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = -1LL;
	static int16_t x292 = -1;
	int32_t t72 = 7453;

	t72 = (x289^((x290^x291)<=x292));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 5847006408LLU;
	uint8_t x294 = UINT8_MAX;
	static int16_t x296 = -3;
	static uint64_t t73 = 1414853058LLU;

	t73 = (x293^((x294^x295)<=x296));

	if (t73 != 5847006409LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	volatile int64_t t74 = -5179060782LL;

	t74 = (x297^((x298^x299)<=x300));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	volatile uint32_t x302 = 22U;
	volatile int8_t x304 = -63;
	int64_t t75 = INT64_MIN;

	t75 = (x301^((x302^x303)<=x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MAX;
	static uint16_t x307 = UINT16_MAX;
	static int8_t x308 = -11;
	volatile int64_t t76 = 42562233410786LL;

	t76 = (x305^((x306^x307)<=x308));

	if (t76 != -100774453368LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = UINT64_MAX;
	static int32_t t77 = -5544878;

	t77 = (x309^((x310^x311)<=x312));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -2748;
	volatile uint8_t x315 = 7U;
	static int8_t x316 = INT8_MAX;
	volatile int32_t t78 = -418149759;

	t78 = (x313^((x314^x315)<=x316));

	if (t78 != -2747) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	int64_t x319 = INT64_MIN;
	static volatile int8_t x320 = -1;

	t79 = (x317^((x318^x319)<=x320));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x324 = 181272LLU;
	volatile uint32_t t80 = 148U;

	t80 = (x321^((x322^x323)<=x324));

	if (t80 != 3764U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -159;
	volatile int8_t x326 = INT8_MAX;
	int16_t x327 = -1;
	int64_t x328 = -11LL;
	volatile int32_t t81 = -35657597;

	t81 = (x325^((x326^x327)<=x328));

	if (t81 != -160) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = 377691;
	uint16_t x331 = 1U;
	uint64_t x332 = 28524399133099LLU;

	t82 = (x329^((x330^x331)<=x332));

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 978U;
	int8_t x334 = 15;
	int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	static int32_t t83 = 6453;

	t83 = (x333^((x334^x335)<=x336));

	if (t83 != 978) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = 0;
	uint16_t x339 = 31U;
	uint64_t x340 = 15136419972264567LLU;

	t84 = (x337^((x338^x339)<=x340));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile uint32_t x342 = 481346727U;
	int64_t x343 = -244254771736LL;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 2;

	t85 = (x341^((x342^x343)<=x344));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 75U;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -53175;

	t86 = (x345^((x346^x347)<=x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	static int16_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -11;

	t87 = (x349^((x350^x351)<=x352));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MAX;
	uint16_t x355 = 10042U;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t88 = 1213;

	t88 = (x353^((x354^x355)<=x356));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	static uint64_t x358 = UINT64_MAX;
	static uint8_t x359 = UINT8_MAX;
	static volatile int32_t t89 = -160322;

	t89 = (x357^((x358^x359)<=x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 13U;
	static uint32_t x362 = 1321U;
	int8_t x363 = 0;
	int16_t x364 = INT16_MAX;
	int32_t t90 = -2;

	t90 = (x361^((x362^x363)<=x364));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int16_t x366 = -1;
	static int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 0;

	t91 = (x365^((x366^x367)<=x368));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 148;
	int16_t x370 = -1;
	int16_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -10886195;

	t92 = (x369^((x370^x371)<=x372));

	if (t92 != 148) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = 65022LLU;
	int8_t x376 = INT8_MIN;
	int64_t t93 = -1602614LL;

	t93 = (x373^((x374^x375)<=x376));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 1699U;
	int32_t t94 = 5539;

	t94 = (x377^((x378^x379)<=x380));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MAX;
	volatile int8_t x383 = INT8_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t95 = -564189;

	t95 = (x381^((x382^x383)<=x384));

	if (t95 != 263) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	volatile uint64_t x386 = 860701349LLU;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t96 = 15;

	t96 = (x385^((x386^x387)<=x388));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 2;
	int8_t x390 = INT8_MAX;
	uint32_t x392 = 9624434U;
	static volatile int32_t t97 = 1693555;

	t97 = (x389^((x390^x391)<=x392));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x395 = 3212U;
	int8_t x396 = -29;

	t98 = (x393^((x394^x395)<=x396));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int8_t x398 = -1;
	int16_t x399 = 65;
	uint16_t x400 = 12817U;
	int64_t t99 = -256706450451996092LL;

	t99 = (x397^((x398^x399)<=x400));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

