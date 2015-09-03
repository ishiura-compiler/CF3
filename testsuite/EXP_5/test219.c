#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 3116U;
static volatile int64_t x23 = INT64_MAX;
volatile int16_t x24 = INT16_MIN;
int64_t x25 = -258223356463LL;
static volatile uint64_t t4 = 689376237715LLU;
static volatile uint64_t t5 = 1498121716300658LLU;
uint64_t t6 = 378124340921533LLU;
volatile uint16_t x40 = 24009U;
volatile int8_t x45 = INT8_MIN;
static uint64_t x46 = UINT64_MAX;
uint64_t t8 = 332734LLU;
volatile uint64_t t9 = 7727254600LLU;
static uint64_t x58 = 7116892307774090498LLU;
int16_t x63 = -1;
static int8_t x67 = INT8_MIN;
int32_t x77 = 476590;
volatile int64_t t15 = 24561LL;
int64_t x85 = INT64_MIN;
int64_t t17 = -2930LL;
int16_t x105 = INT16_MIN;
volatile int8_t x109 = INT8_MAX;
volatile uint8_t x111 = 0U;
uint8_t x117 = 0U;
static uint32_t x129 = 736671947U;
volatile int64_t t25 = 64672838LL;
volatile uint16_t x134 = 1356U;
int32_t t26 = -14247786;
int8_t x138 = 58;
int16_t x140 = INT16_MIN;
int8_t x145 = INT8_MIN;
volatile int16_t x150 = -1;
volatile int64_t t30 = -6019333746803937LL;
int16_t x158 = INT16_MIN;
volatile int64_t t32 = 90934LL;
volatile uint64_t x168 = 1550262LLU;
int16_t x171 = 0;
int8_t x178 = 13;
int16_t x181 = -7859;
uint32_t x187 = 415686U;
int32_t x188 = INT32_MAX;
int8_t x192 = 9;
uint8_t x193 = UINT8_MAX;
int16_t x197 = INT16_MIN;
uint32_t x202 = UINT32_MAX;
static uint16_t x204 = UINT16_MAX;
static int64_t t42 = INT64_MIN;
static int32_t x209 = INT32_MAX;
int16_t x211 = INT16_MAX;
int64_t x212 = INT64_MIN;
uint64_t x224 = 45LLU;
static int64_t x227 = INT64_MIN;
int16_t x228 = 988;
volatile int32_t t47 = -68;
int8_t x233 = -1;
static uint16_t x237 = UINT16_MAX;
uint8_t x240 = 109U;
int64_t x241 = -2700702LL;
uint8_t x245 = UINT8_MAX;
int64_t x248 = INT64_MAX;
static int8_t x255 = INT8_MIN;
static int8_t x256 = INT8_MIN;
int16_t x257 = INT16_MIN;
int32_t x258 = INT32_MAX;
static uint8_t x263 = 5U;
uint8_t x273 = 8U;
uint64_t x274 = 188919958577268LLU;
static volatile int16_t x276 = -1;
volatile uint64_t t56 = 0LLU;
int32_t x278 = INT32_MIN;
uint8_t x280 = 13U;
volatile uint64_t t58 = 2185759564LLU;
static uint16_t x286 = 8716U;
int8_t x288 = INT8_MIN;
int64_t x290 = 5LL;
uint32_t x296 = UINT32_MAX;
static volatile uint64_t t61 = 664939237LLU;
static int8_t x299 = INT8_MAX;
uint32_t x304 = UINT32_MAX;
uint32_t x305 = UINT32_MAX;
int16_t x312 = 5349;
int32_t x321 = INT32_MAX;
volatile int16_t x323 = -1;
int32_t t68 = 126943;
int16_t x341 = -1;
int32_t x345 = INT32_MAX;
int32_t x346 = 1013;
static volatile uint16_t x364 = UINT16_MAX;
static int32_t x368 = INT32_MIN;
volatile int8_t x369 = INT8_MAX;
int8_t x372 = -1;
static int32_t x373 = -126;
int64_t x375 = -1LL;
int32_t x379 = -55930220;
volatile int64_t x388 = 1926954LL;
uint32_t x398 = 915648U;
volatile int64_t x400 = INT64_MIN;
volatile uint64_t x405 = UINT64_MAX;
uint32_t x407 = UINT32_MAX;
static uint64_t t85 = 1907745418618LLU;
uint16_t x415 = 286U;
static volatile uint64_t x418 = 468563700LLU;
int64_t x420 = 1607296357LL;
volatile uint64_t t88 = 3LLU;
uint16_t x424 = UINT16_MAX;
int8_t x428 = -1;
static uint64_t t91 = 132035092828LLU;
static int64_t x434 = INT64_MAX;
int8_t x436 = 1;
uint64_t x440 = 28LLU;
int8_t x450 = 0;
int32_t x458 = -587;
static volatile uint64_t t98 = 1989150627696LLU;
int16_t x463 = INT16_MAX;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint32_t x2 = 1036535U;
	volatile int32_t x3 = INT32_MIN;
	static uint32_t x4 = UINT32_MAX;

	t0 = (x1&((x2-x3)/x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MAX;
	volatile int64_t x15 = 403067065771091339LL;
	int8_t x16 = INT8_MIN;
	int64_t t1 = -19845122652LL;

	t1 = (x13&((x14-x15)/x16));

	if (t1 != 58059LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 398U;
	volatile int16_t x18 = 38;
	static int64_t x19 = 2341995841149LL;
	int32_t x20 = INT32_MIN;
	int64_t t2 = 1042LL;

	t2 = (x17&((x18-x19)/x20));

	if (t2 != 2LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = 0U;
	int64_t t3 = 1LL;

	t3 = (x21&((x22-x23)/x24));

	if (t3 != 281472829227008LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x26 = -1LL;
	static uint64_t x27 = 26930804LLU;
	static int16_t x28 = INT16_MIN;

	t4 = (x25&((x26-x27)/x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = 20U;
	uint16_t x31 = 273U;
	uint16_t x32 = 3U;

	t5 = (x29&((x30-x31)/x32));

	if (t5 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 723U;
	static uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = INT16_MIN;
	static int64_t x36 = INT64_MIN;

	t6 = (x33&((x34-x35)/x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 90578192LLU;
	volatile int8_t x38 = INT8_MIN;
	volatile int8_t x39 = -1;
	uint64_t t7 = 29357LLU;

	t7 = (x37&((x38-x39)/x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x47 = -250128715583758463LL;
	int64_t x48 = -3546621LL;

	t8 = (x45&((x46-x47)/x48));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	static uint16_t x50 = UINT16_MAX;
	int16_t x51 = -1;
	uint16_t x52 = UINT16_MAX;

	t9 = (x49&((x50-x51)/x52));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 1414294224968LLU;
	volatile int8_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile int16_t x56 = 1691;
	uint64_t t10 = 34008056879683776LLU;

	t10 = (x53&((x54-x55)/x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = 5U;
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	uint64_t t11 = 257982160519LLU;

	t11 = (x57&((x58-x59)/x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	int32_t x62 = -1;
	int64_t x64 = -1LL;
	int64_t t12 = -9232LL;

	t12 = (x61&((x62-x63)/x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 5;
	static volatile uint64_t x66 = 10LLU;
	int8_t x68 = -7;
	uint64_t t13 = 815046074444LLU;

	t13 = (x65&((x66-x67)/x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	static uint32_t x71 = 1120562633U;
	uint16_t x72 = 1U;
	uint32_t t14 = 4236U;

	t14 = (x69&((x70-x71)/x72));

	if (t14 != 3174400000U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x78 = 5201;
	int64_t x79 = INT64_MAX;
	volatile uint32_t x80 = 30U;

	t15 = (x77&((x78-x79)/x80));

	if (t15 != 197674LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 563301U;
	static uint32_t x83 = UINT32_MAX;
	uint16_t x84 = UINT16_MAX;
	static volatile int64_t t16 = -206LL;

	t16 = (x81&((x82-x83)/x84));

	if (t16 != 8LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x86 = 2U;
	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;

	t17 = (x85&((x86-x87)/x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = -576540517;
	int16_t x98 = INT16_MAX;
	uint16_t x99 = 80U;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t18 = 16463384;

	t18 = (x97&((x98-x99)/x100));

	if (t18 != -576540671) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 243;
	int8_t x104 = -1;
	uint32_t t19 = 2852684U;

	t19 = (x101&((x102-x103)/x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 213U;
	uint32_t x108 = 8U;
	static volatile uint32_t t20 = 42U;

	t20 = (x105&((x106-x107)/x108));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x110 = 6314LL;
	int16_t x112 = INT16_MIN;
	volatile int64_t t21 = 385LL;

	t21 = (x109&((x110-x111)/x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = UINT32_MAX;
	static volatile uint64_t x114 = 3423LLU;
	static uint64_t x115 = UINT64_MAX;
	static int8_t x116 = INT8_MIN;
	volatile uint64_t t22 = 221LLU;

	t22 = (x113&((x114-x115)/x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = INT16_MAX;
	int32_t x119 = 2772;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t23 = 5U;

	t23 = (x117&((x118-x119)/x120));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 6257966544LLU;
	static uint16_t x122 = UINT16_MAX;
	int32_t x123 = 5395615;
	uint64_t x124 = 133LLU;
	volatile uint64_t t24 = 84579676LLU;

	t24 = (x121&((x122-x123)/x124));

	if (t24 != 5100285264LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x130 = INT16_MIN;
	int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;

	t25 = (x129&((x130-x131)/x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = 24;
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MAX;

	t26 = (x133&((x134-x135)/x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 424U;
	static int32_t x139 = -1;
	uint32_t t27 = 12U;

	t27 = (x137&((x138-x139)/x140));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 25U;
	int8_t x144 = INT8_MAX;
	static uint32_t t28 = 662U;

	t28 = (x141&((x142-x143)/x144));

	if (t28 != 33818639U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x146 = 59;
	volatile int32_t x147 = -559373;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t29 = -778829213;

	t29 = (x145&((x146-x147)/x148));

	if (t29 != 2176) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x149 = UINT16_MAX;
	int64_t x151 = 558591225902954LL;
	uint32_t x152 = 1510U;

	t30 = (x149&((x150-x151)/x152));

	if (t30 != 14834LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t31 = -369208;

	t31 = (x153&((x154-x155)/x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -1LL;
	uint8_t x159 = 8U;
	int16_t x160 = INT16_MIN;

	t32 = (x157&((x158-x159)/x160));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = -3;
	int32_t x166 = -76000;
	int64_t x167 = INT64_MIN;
	uint64_t t33 = 21357LLU;

	t33 = (x165&((x166-x167)/x168));

	if (t33 != 5949556937376LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = -7;
	int64_t x170 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	int64_t t34 = 40397LL;

	t34 = (x169&((x170-x171)/x172));

	if (t34 != 4294967296LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	int8_t x179 = 38;
	static uint16_t x180 = 8853U;
	static volatile int32_t t35 = 204200727;

	t35 = (x177&((x178-x179)/x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x182 = INT32_MIN;
	int8_t x183 = -1;
	int16_t x184 = INT16_MAX;
	static int32_t t36 = 0;

	t36 = (x181&((x182-x183)/x184));

	if (t36 != -73396) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = 5U;
	int64_t t37 = 172459387LL;

	t37 = (x185&((x186-x187)/x188));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = UINT8_MAX;
	uint8_t x190 = 15U;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t38 = -311;

	t38 = (x189&((x190-x191)/x192));

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x194 = 1405553U;
	int16_t x195 = -1641;
	int32_t x196 = INT32_MIN;
	volatile uint32_t t39 = 847496169U;

	t39 = (x193&((x194-x195)/x196));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x198 = 99373U;
	int16_t x199 = 0;
	static int64_t x200 = -1LL;
	volatile int64_t t40 = -94451088275233889LL;

	t40 = (x197&((x198-x199)/x200));

	if (t40 != -131072LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x201 = 14905130471949327LLU;
	int16_t x203 = 7425;
	static uint64_t t41 = 161673738034LLU;

	t41 = (x201&((x202-x203)/x204));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	int16_t x207 = -1;
	int64_t x208 = -1LL;

	t42 = (x205&((x206-x207)/x208));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = -1;
	static int64_t t43 = -876964320744LL;

	t43 = (x209&((x210-x211)/x212));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = 2;
	static int16_t x214 = 0;
	volatile uint16_t x215 = UINT16_MAX;
	int16_t x216 = INT16_MAX;
	int32_t t44 = 1547;

	t44 = (x213&((x214-x215)/x216));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x221 = 231234615LLU;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MAX;
	volatile uint64_t t45 = 69LLU;

	t45 = (x221&((x222-x223)/x224));

	if (t45 != 226514992LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = -80;
	static volatile int32_t x226 = INT32_MIN;
	static int64_t t46 = -223543709251846LL;

	t46 = (x225&((x226-x227)/x228));

	if (t46 != 9335396796262432LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MAX;
	int16_t x230 = -312;
	static volatile int8_t x231 = 0;
	int32_t x232 = 32290806;

	t47 = (x229&((x230-x231)/x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x234 = 400015963LL;
	int32_t x235 = 395831951;
	uint64_t x236 = 1220660979LLU;
	uint64_t t48 = 160383LLU;

	t48 = (x233&((x234-x235)/x236));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 1432980LLU;
	volatile uint64_t t49 = 133LLU;

	t49 = (x237&((x238-x239)/x240));

	if (t49 != 38560LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x242 = -6;
	uint32_t x243 = 188267U;
	int32_t x244 = 11934;
	volatile int64_t t50 = 51363LL;

	t50 = (x241&((x242-x243)/x244));

	if (t50 != 280640LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x246 = 0;
	volatile int8_t x247 = -14;
	int64_t t51 = -1963992988295909LL;

	t51 = (x245&((x246-x247)/x248));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x250 = INT16_MIN;
	uint64_t x251 = 21313885587851024LLU;
	uint64_t x252 = 85092LLU;
	volatile uint64_t t52 = 18424266470410742LLU;

	t52 = (x249&((x250-x251)/x252));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = -1;
	uint64_t t53 = 1504921845LLU;

	t53 = (x253&((x254-x255)/x256));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x259 = INT8_MAX;
	int8_t x260 = 1;
	volatile int32_t t54 = -2869436;

	t54 = (x257&((x258-x259)/x260));

	if (t54 != 2147450880) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = 16292249752846LLU;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x264 = INT64_MIN;
	uint64_t t55 = 606043180388LLU;

	t55 = (x261&((x262-x263)/x264));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x275 = -40;

	t56 = (x273&((x274-x275)/x276));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	int64_t t57 = -276924LL;

	t57 = (x277&((x278-x279)/x280));

	if (t57 != 9223372036689584768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = INT64_MIN;
	volatile uint64_t x282 = UINT64_MAX;
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = 8;

	t58 = (x281&((x282-x283)/x284));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x285 = INT8_MAX;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t t59 = -289529026;

	t59 = (x285&((x286-x287)/x288));

	if (t59 != 59) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x289 = INT64_MIN;
	static uint16_t x291 = 1U;
	uint16_t x292 = 22U;
	volatile int64_t t60 = 136587012130374256LL;

	t60 = (x289&((x290-x291)/x292));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 8U;
	uint64_t x294 = 30818699LLU;
	int16_t x295 = INT16_MIN;

	t61 = (x293&((x294-x295)/x296));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = 171037996865859LLU;
	uint32_t x298 = UINT32_MAX;
	int16_t x300 = -1;
	static uint64_t t62 = 128962666LLU;

	t62 = (x297&((x298-x299)/x300));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = 247309889U;
	int8_t x302 = -4;
	static volatile int8_t x303 = -1;
	volatile uint32_t t63 = 127U;

	t63 = (x301&((x302-x303)/x304));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x306 = -1;
	static volatile int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MAX;
	volatile int64_t t64 = -1472247293LL;

	t64 = (x305&((x306-x307)/x308));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = 1560317137349LL;
	int16_t x311 = -1;
	int64_t t65 = -97150442066LL;

	t65 = (x309&((x310-x311)/x312));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	volatile int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	volatile int64_t x316 = -33289328170194148LL;
	int64_t t66 = 141430483256LL;

	t66 = (x313&((x314-x315)/x316));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x322 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t67 = -12878LL;

	t67 = (x321&((x322-x323)/x324));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -117089;

	t68 = (x325&((x326-x327)/x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x329 = 2U;
	int32_t x330 = -46;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MIN;
	int32_t t69 = 61;

	t69 = (x329&((x330-x331)/x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x333 = 81U;
	static uint32_t x334 = 4923U;
	int64_t x335 = INT64_MAX;
	int16_t x336 = -1;
	volatile int64_t t70 = 802820612LL;

	t70 = (x333&((x334-x335)/x336));

	if (t70 != 64LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = -1;
	int32_t x338 = -10016;
	static volatile int8_t x339 = 0;
	int8_t x340 = INT8_MAX;
	int32_t t71 = 30;

	t71 = (x337&((x338-x339)/x340));

	if (t71 != -78) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x342 = INT8_MAX;
	volatile int32_t x343 = -1;
	uint32_t x344 = 254233U;
	uint32_t t72 = 225875531U;

	t72 = (x341&((x342-x343)/x344));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x347 = -1;
	uint64_t x348 = 37934470LLU;
	volatile uint64_t t73 = 290847739785480LLU;

	t73 = (x345&((x346-x347)/x348));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x349 = 1177327293309279861LLU;
	static int64_t x350 = INT64_MAX;
	static uint16_t x351 = 1963U;
	uint64_t x352 = 3818514346364998LLU;
	volatile uint64_t t74 = 1823267472695LLU;

	t74 = (x349&((x350-x351)/x352));

	if (t74 != 2149LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = -2;
	int16_t x358 = INT16_MIN;
	int32_t x359 = -1960;
	uint8_t x360 = 59U;
	int32_t t75 = -687726165;

	t75 = (x357&((x358-x359)/x360));

	if (t75 != -522) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = -1;
	int16_t x363 = -1;
	volatile int32_t t76 = 1;

	t76 = (x361&((x362-x363)/x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -1;
	uint32_t x366 = 560323952U;
	uint8_t x367 = 50U;
	volatile uint32_t t77 = 405U;

	t77 = (x365&((x366-x367)/x368));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	int64_t t78 = 12LL;

	t78 = (x369&((x370-x371)/x372));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x374 = -1;
	uint16_t x376 = 7U;
	static int64_t t79 = -1760481270521613LL;

	t79 = (x373&((x374-x375)/x376));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = -2603649;
	static int64_t x378 = -3428321001LL;
	uint8_t x380 = UINT8_MAX;
	int64_t t80 = -1111568876858097079LL;

	t80 = (x377&((x378-x379)/x380));

	if (t80 != -15728357LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x385 = INT32_MIN;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = -1;
	int64_t t81 = 845LL;

	t81 = (x385&((x386-x387)/x388));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x389 = INT32_MAX;
	volatile uint8_t x390 = 3U;
	int8_t x391 = 0;
	int64_t x392 = -1LL;
	volatile int64_t t82 = 3LL;

	t82 = (x389&((x390-x391)/x392));

	if (t82 != 2147483645LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MAX;
	int16_t x395 = 10;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t83 = -4053;

	t83 = (x393&((x394-x395)/x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MIN;
	int8_t x399 = 3;
	volatile int64_t t84 = -3665059582LL;

	t84 = (x397&((x398-x399)/x400));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x406 = 36U;
	volatile uint32_t x408 = 3179U;

	t85 = (x405&((x406-x407)/x408));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x409 = -1LL;
	volatile uint8_t x410 = 12U;
	int64_t x411 = 1086255431749998709LL;
	int16_t x412 = -1;
	static int64_t t86 = -11335827367041LL;

	t86 = (x409&((x410-x411)/x412));

	if (t86 != 1086255431749998697LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = 8U;
	int16_t x414 = -1;
	static uint8_t x416 = 2U;
	static volatile uint32_t t87 = 1971U;

	t87 = (x413&((x414-x415)/x416));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = INT8_MAX;
	int16_t x419 = INT16_MIN;

	t88 = (x417&((x418-x419)/x420));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 605916U;
	int16_t x422 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	volatile uint32_t t89 = 360957U;

	t89 = (x421&((x422-x423)/x424));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x425&((x426-x427)/x428));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = 2LLU;
	int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MAX;
	int16_t x432 = -1;

	t91 = (x429&((x430-x431)/x432));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x433 = 0U;
	uint8_t x435 = 0U;
	volatile int64_t t92 = 62952479781LL;

	t92 = (x433&((x434-x435)/x436));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = UINT16_MAX;
	int32_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	uint64_t t93 = 31310734443648425LLU;

	t93 = (x437&((x438-x439)/x440));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x441 = 32053339U;
	int16_t x442 = INT16_MAX;
	volatile int8_t x443 = -1;
	static uint16_t x444 = 25U;
	volatile uint32_t t94 = 12831U;

	t94 = (x441&((x442-x443)/x444));

	if (t94 != 26U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = -1LL;
	int32_t x446 = -1981930;
	uint16_t x447 = 1298U;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t95 = -927LL;

	t95 = (x445&((x446-x447)/x448));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = -24975440LL;
	int64_t x451 = INT64_MAX;
	int16_t x452 = -1;
	static int64_t t96 = -245917LL;

	t96 = (x449&((x450-x451)/x452));

	if (t96 != 9223372036829800368LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x453 = 897;
	volatile uint64_t x454 = 316LLU;
	static int32_t x455 = INT32_MAX;
	volatile int64_t x456 = -237492134445083342LL;
	volatile uint64_t t97 = 367781451330666919LLU;

	t97 = (x453&((x454-x455)/x456));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x457 = UINT8_MAX;
	volatile uint64_t x459 = 4824LLU;
	int64_t x460 = 27983LL;

	t98 = (x457&((x458-x459)/x460));

	if (t98 != 132LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MIN;
	static int16_t x462 = -479;
	static uint8_t x464 = UINT8_MAX;
	volatile int32_t t99 = 1420809;

	t99 = (x461&((x462-x463)/x464));

	if (t99 != -256) { NG(); } else { ; }
	
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

