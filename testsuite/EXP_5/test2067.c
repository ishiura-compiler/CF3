#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint32_t x4 = 1939U;
volatile uint64_t t0 = 120LLU;
static int16_t x6 = INT16_MIN;
int16_t x13 = 1;
int8_t x14 = -17;
int16_t x21 = -1;
uint8_t x23 = 5U;
int64_t x31 = 330468LL;
int8_t x33 = -6;
volatile int16_t x34 = -1;
volatile uint32_t x46 = 30824U;
volatile int64_t t7 = 2LL;
volatile int16_t x51 = INT16_MAX;
uint64_t x57 = 123784LLU;
int64_t x58 = INT64_MIN;
static volatile int8_t x60 = 1;
volatile uint64_t t10 = 9LLU;
uint16_t x76 = UINT16_MAX;
volatile uint64_t t12 = 38245908758LLU;
static int8_t x80 = -1;
uint32_t x81 = 3053U;
int8_t x84 = 4;
volatile uint32_t t14 = 239U;
int8_t x88 = INT8_MIN;
uint64_t t16 = 2662885923083809705LLU;
uint8_t x99 = 14U;
uint8_t x100 = UINT8_MAX;
static uint16_t x104 = 469U;
volatile int8_t x111 = 24;
int16_t x115 = -10;
volatile uint64_t t22 = 4LLU;
uint64_t x128 = 20083483LLU;
int32_t x131 = -25530;
volatile int32_t t25 = 1;
uint32_t x133 = UINT32_MAX;
static int32_t x134 = -38372;
volatile uint64_t t26 = 6135737715392467LLU;
int16_t x140 = -15;
int8_t x142 = INT8_MAX;
int8_t x144 = -1;
int64_t t28 = 1831LL;
uint8_t x150 = 2U;
int8_t x155 = -1;
uint8_t x159 = 95U;
uint32_t x160 = UINT32_MAX;
int16_t x162 = INT16_MIN;
int64_t x167 = INT64_MIN;
int64_t x175 = INT64_MIN;
int8_t x176 = -1;
int8_t x179 = INT8_MAX;
int64_t x183 = 79405685488LL;
uint64_t x197 = UINT64_MAX;
int64_t x204 = 68414831452901487LL;
static int64_t t40 = -30244172629819LL;
static uint64_t t41 = 596674643908400258LLU;
uint8_t x223 = 1U;
int8_t x236 = 10;
uint64_t t48 = 13086224LLU;
int16_t x258 = INT16_MIN;
int64_t t49 = 2211LL;
int16_t x263 = 17;
static volatile uint64_t t50 = 8598791871040459LLU;
uint32_t x277 = UINT32_MAX;
volatile uint64_t x279 = 51LLU;
static uint64_t t53 = 2241101LLU;
int64_t x302 = -1LL;
volatile int8_t x308 = 0;
int32_t x309 = INT32_MIN;
int8_t x311 = -10;
uint32_t t59 = 45U;
uint8_t x322 = 2U;
volatile int32_t x323 = 6265089;
uint64_t t61 = 24072463LLU;
static int16_t x332 = -1;
static volatile uint64_t t64 = 2289416563988LLU;
int32_t x355 = -12;
static uint64_t x358 = 8733624079817431165LLU;
static uint8_t x363 = 3U;
static uint16_t x364 = 17U;
uint64_t t67 = 185106564703LLU;
int32_t x365 = INT32_MIN;
uint64_t x367 = 930963592836LLU;
volatile int64_t t69 = 51696826LL;
int64_t x385 = -3893337042531LL;
static int16_t x386 = INT16_MAX;
volatile uint64_t t71 = 1997143476472247LLU;
uint8_t x390 = 25U;
int64_t x391 = 13202390091679124LL;
volatile int16_t x400 = INT16_MIN;
uint64_t x402 = 12871887LLU;
int16_t x404 = 204;
int16_t x405 = INT16_MIN;
uint8_t x407 = 6U;
int64_t x420 = -1LL;
volatile uint32_t t79 = 880733821U;
static uint16_t x433 = UINT16_MAX;
int8_t x435 = 45;
static uint8_t x436 = 0U;
volatile int32_t t80 = -61;
int8_t x441 = 53;
int32_t x451 = -1613330;
uint64_t x454 = UINT64_MAX;
int8_t x455 = -1;
uint64_t t86 = 32LLU;
int64_t t87 = 1167LL;
int64_t x477 = 407731100868LL;
volatile int64_t x483 = -2LL;
uint32_t x497 = 652U;
volatile int64_t x499 = INT64_MAX;
int16_t x503 = 16227;
volatile int32_t x504 = INT32_MIN;
int64_t x506 = -94414LL;
int8_t x513 = INT8_MIN;
volatile int64_t t94 = 27LL;
static volatile int64_t x519 = -689858642LL;
static volatile int64_t t96 = 1751592001038845444LL;
int16_t x526 = 142;
uint32_t x537 = 13398780U;
int8_t x539 = INT8_MIN;
volatile int8_t x545 = INT8_MAX;
static int32_t x547 = 5799;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint64_t x3 = UINT64_MAX;

	t0 = (x1^((x2^x3)*x4));

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -5711;
	static int32_t x7 = -1;
	int8_t x8 = INT8_MAX;
	static int32_t t1 = 2;

	t1 = (x5^((x6^x7)*x8));

	if (t1 != -4155856) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x15 = 5U;
	int8_t x16 = 0;
	volatile int32_t t2 = 1;

	t2 = (x13^((x14^x15)*x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	uint32_t x18 = 18301U;
	volatile uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	uint64_t t3 = 159LLU;

	t3 = (x17^((x18^x19)*x20));

	if (t3 != 599720063LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 3U;
	int8_t x24 = -1;
	volatile int32_t t4 = -1;

	t4 = (x21^((x22^x23)*x24));

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = 438U;
	int32_t x30 = -1;
	int16_t x32 = -1;
	int64_t t5 = -393744214347925276LL;

	t5 = (x29^((x30^x31)*x32));

	if (t5 != 330579LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x35 = -146;
	volatile uint8_t x36 = 0U;
	volatile int32_t t6 = -227;

	t6 = (x33^((x34^x35)*x36));

	if (t6 != -6) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = UINT8_MAX;
	static int64_t x47 = -49371353LL;
	volatile uint16_t x48 = UINT16_MAX;

	t7 = (x45^((x46^x47)*x48));

	if (t7 != -3234609487794LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 7U;
	static int8_t x50 = -1;
	uint16_t x52 = 184U;
	volatile int32_t t8 = 1;

	t8 = (x49^((x50^x51)*x52));

	if (t8 != -6029305) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = -1;
	uint16_t x54 = 31941U;
	int32_t x55 = INT32_MAX;
	uint32_t x56 = 10U;
	volatile uint32_t t9 = 614092943U;

	t9 = (x53^((x54^x55)*x56));

	if (t9 != 319419U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x59 = UINT8_MAX;

	t10 = (x57^((x58^x59)*x60));

	if (t10 != 9223372036854899575LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -993;
	static uint32_t x66 = 103U;
	static uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	uint32_t t11 = 50U;

	t11 = (x65^((x66^x67)*x68));

	if (t11 != 4291558431U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 14513LLU;
	static uint64_t x74 = UINT64_MAX;
	static uint8_t x75 = UINT8_MAX;

	t12 = (x73^((x74^x75)*x76));

	if (t12 != 18446744073692789169LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int16_t x78 = -110;
	int16_t x79 = INT16_MAX;
	volatile uint32_t t13 = 52U;

	t13 = (x77^((x78^x79)*x80));

	if (t13 != 4294934636U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x82 = -1;
	static volatile int8_t x83 = INT8_MIN;

	t14 = (x81^((x82^x83)*x84));

	if (t14 != 2577U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	int8_t x87 = -1;
	volatile int32_t t15 = 11493;

	t15 = (x85^((x86^x87)*x88));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 17U;
	int32_t x90 = INT32_MAX;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 359635430629924472LLU;

	t16 = (x89^((x90^x91)*x92));

	if (t16 != 6966506460451217817LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = 1U;
	uint64_t x95 = 949971743146412LLU;
	int64_t x96 = 7498996LL;
	volatile uint64_t t17 = 78290346LLU;

	t17 = (x93^((x94^x95)*x96));

	if (t17 != 12614461552946353380LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t t18 = 40748364LL;

	t18 = (x97^((x98^x99)*x100));

	if (t18 != -9223372036854714353LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int16_t x102 = -1;
	int64_t x103 = 468593227LL;
	volatile uint64_t t19 = 4585LLU;

	t19 = (x101^((x102^x103)*x104));

	if (t19 != 219770223931LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	static int16_t x112 = INT16_MIN;
	int32_t t20 = -169;

	t20 = (x109^((x110^x111)*x112));

	if (t20 != 2146664447) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = INT32_MIN;
	static uint16_t x114 = 192U;
	int16_t x116 = -1;
	volatile int32_t t21 = 35931;

	t21 = (x113^((x114^x115)*x116));

	if (t21 != -2147483446) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 120639LLU;
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = 87770593;
	int8_t x120 = -1;

	t22 = (x117^((x118^x119)*x120));

	if (t22 != 18446744073621827037LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	uint16_t x122 = 28044U;
	static int16_t x123 = INT16_MAX;
	static uint8_t x124 = UINT8_MAX;
	int64_t t23 = -3366LL;

	t23 = (x121^((x122^x123)*x124));

	if (t23 != -9223372036853571443LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	static int8_t x127 = -1;
	volatile uint64_t t24 = 24824445LLU;

	t24 = (x125^((x126^x127)*x128));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 19;
	int8_t x130 = 36;
	uint8_t x132 = UINT8_MAX;

	t25 = (x129^((x130^x131)*x132));

	if (t25 != -6503027) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x135 = INT32_MIN;
	static uint64_t x136 = 223371LLU;

	t26 = (x133^((x134^x135)*x136));

	if (t26 != 479676961260235LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	volatile int32_t x139 = INT32_MAX;
	volatile int32_t t27 = 468168;

	t27 = (x137^((x138^x139)*x140));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = INT64_MIN;
	int32_t x143 = -1;

	t28 = (x141^((x142^x143)*x144));

	if (t28 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x145 = -1;
	int8_t x146 = INT8_MAX;
	uint16_t x147 = UINT16_MAX;
	uint32_t x148 = UINT32_MAX;
	uint32_t t29 = 2847U;

	t29 = (x145^((x146^x147)*x148));

	if (t29 != 65407U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MIN;
	int64_t x151 = 62229LL;
	uint32_t x152 = 2314661U;
	volatile int64_t t30 = -18463532435527LL;

	t30 = (x149^((x150^x151)*x152));

	if (t30 != -144043641645LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = 396594162LL;
	int32_t x154 = INT32_MAX;
	int64_t x156 = 6LL;
	volatile int64_t t31 = 4989541LL;

	t31 = (x153^((x154^x155)*x156));

	if (t31 != -12488307726LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -6038671171645LL;
	int16_t x158 = INT16_MIN;
	volatile int64_t t32 = -1356258LL;

	t32 = (x157^((x158^x159)*x160));

	if (t32 != -6038671187870LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MIN;
	int64_t t33 = -30LL;

	t33 = (x161^((x162^x163)*x164));

	if (t33 != -9223372032564002688LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = -1;
	uint64_t x166 = 15662LLU;
	int32_t x168 = INT32_MAX;
	volatile uint64_t t34 = 2656455557375795800LLU;

	t34 = (x165^((x166^x167)*x168));

	if (t34 != 9223338402965896493LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -2813371156LL;
	volatile int16_t x170 = -860;
	volatile int64_t x171 = INT64_MIN;
	static int8_t x172 = -1;
	static int64_t t35 = -474LL;

	t35 = (x169^((x170^x171)*x172));

	if (t35 != 9223372034041405360LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 14U;
	uint16_t x174 = 934U;
	volatile int64_t t36 = -777LL;

	t36 = (x173^((x174^x175)*x176));

	if (t36 != 9223372036854774868LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -1LL;
	int8_t x178 = -1;
	volatile int8_t x180 = -1;
	volatile int64_t t37 = 440682LL;

	t37 = (x177^((x178^x179)*x180));

	if (t37 != -129LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x181 = 3377096LLU;
	static int64_t x182 = INT64_MIN;
	volatile int8_t x184 = 1;
	static volatile uint64_t t38 = 76LLU;

	t38 = (x181^((x182^x183)*x184));

	if (t38 != 9223372116257217848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x198 = -1081LL;
	uint32_t x199 = 1653072783U;
	uint8_t x200 = UINT8_MAX;
	uint64_t t39 = 266828400852821LLU;

	t39 = (x197^((x198^x199)*x200));

	if (t39 != 421533831239LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = 97;
	uint8_t x203 = 1U;

	t40 = (x201^((x202^x203)*x204));

	if (t40 != -6567823819097101920LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x205 = 0U;
	int8_t x206 = 6;
	static volatile uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = INT32_MAX;

	t41 = (x205^((x206^x207)*x208));

	if (t41 != 18446744058677166087LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	static uint8_t x210 = 6U;
	int16_t x211 = 9;
	uint32_t x212 = UINT32_MAX;
	static uint32_t t42 = 119U;

	t42 = (x209^((x210^x211)*x212));

	if (t42 != 32753U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = 0;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 17U;
	int8_t x216 = INT8_MIN;
	int32_t t43 = -206;

	t43 = (x213^((x214^x215)*x216));

	if (t43 != 14208) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = -21;
	volatile uint32_t x222 = 4070013U;
	int16_t x224 = INT16_MIN;
	uint32_t t44 = 27U;

	t44 = (x221^((x222^x223)*x224));

	if (t44 != 222167019U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	static volatile int32_t x226 = INT32_MIN;
	volatile int64_t x227 = 113856042562LL;
	int16_t x228 = 976;
	int64_t t45 = 484910508343363106LL;

	t45 = (x225^((x226^x227)*x228));

	if (t45 != 113144279653280LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int32_t x235 = 0;
	int32_t t46 = -46406;

	t46 = (x233^((x234^x235)*x236));

	if (t46 != 327552) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	static uint32_t x248 = 17316853U;
	int64_t t47 = 19964428LL;

	t47 = (x245^((x246^x247)*x248));

	if (t47 != -2130166796LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x253 = -1LL;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;

	t48 = (x253^((x254^x255)*x256));

	if (t48 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -19;
	static volatile int64_t x259 = 283866158LL;
	uint16_t x260 = 10519U;

	t49 = (x257^((x258^x259)*x260));

	if (t49 != 2985707090383LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x261 = UINT64_MAX;
	int8_t x262 = 18;
	int32_t x264 = -117374;

	t50 = (x261^((x262^x263)*x264));

	if (t50 != 352121LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MAX;
	static volatile int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	int64_t t51 = -341532299585LL;

	t51 = (x269^((x270^x271)*x272));

	if (t51 != -272730390529LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x273 = INT64_MIN;
	uint64_t x274 = 1377476803242LLU;
	uint16_t x275 = 3263U;
	volatile uint32_t x276 = 5346U;
	static uint64_t t52 = 53LLU;

	t52 = (x273^((x274^x275)*x276));

	if (t52 != 9230736027838636682LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x278 = 4U;
	int16_t x280 = -233;

	t53 = (x277^((x278^x279)*x280));

	if (t53 != 18446744069414597134LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x281 = 316U;
	uint64_t x282 = UINT64_MAX;
	volatile uint64_t x283 = 89278309223083359LLU;
	volatile int8_t x284 = INT8_MIN;
	uint64_t t54 = 246684280LLU;

	t54 = (x281^((x282^x283)*x284));

	if (t54 != 11427623580554670396LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x285 = 1797830423754LLU;
	uint32_t x286 = UINT32_MAX;
	static uint64_t x287 = 851666318696924698LLU;
	static int64_t x288 = 13157732161735019LL;
	static volatile uint64_t t55 = 181027213LLU;

	t55 = (x285^((x286^x287)*x288));

	if (t55 != 13488434447829191549LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x301 = INT32_MAX;
	static volatile int16_t x303 = INT16_MAX;
	uint16_t x304 = 33U;
	volatile int64_t t56 = 79LL;

	t56 = (x301^((x302^x303)*x304));

	if (t56 != -2146402305LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = 1383;
	int64_t x306 = -158357518910434LL;
	int16_t x307 = INT16_MIN;
	volatile int64_t t57 = 3968320070185096LL;

	t57 = (x305^((x306^x307)*x308));

	if (t57 != 1383LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x310 = 380694432U;
	volatile int16_t x312 = INT16_MIN;
	static uint32_t t58 = 56352U;

	t58 = (x309^((x310^x311)*x312));

	if (t58 != 4157931520U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = 6;
	int8_t x320 = 43;

	t59 = (x317^((x318^x319)*x320));

	if (t59 != 4294956588U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x321 = UINT8_MAX;
	int8_t x324 = -1;
	volatile int32_t t60 = 11391;

	t60 = (x321^((x322^x323)*x324));

	if (t60 != -6265342) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x325 = 1424538910641LLU;
	uint64_t x326 = 189199250LLU;
	int8_t x327 = -1;
	volatile uint64_t x328 = 62040901651LLU;

	t61 = (x325^((x326^x327)*x328));

	if (t61 != 6708650595670748070LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x329 = INT64_MAX;
	int16_t x330 = 1;
	uint16_t x331 = 3U;
	int64_t t62 = 227409429182LL;

	t62 = (x329^((x330^x331)*x332));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile int16_t x347 = INT16_MAX;
	int16_t x348 = -1;
	int32_t t63 = -27;

	t63 = (x345^((x346^x347)*x348));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x349 = INT8_MAX;
	volatile uint16_t x350 = 32U;
	volatile int64_t x351 = -1LL;
	uint64_t x352 = 86LLU;

	t64 = (x349^((x350^x351)*x352));

	if (t64 != 18446744073709548693LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = 14;
	volatile int16_t x356 = INT16_MIN;
	static int32_t t65 = -6028;

	t65 = (x353^((x354^x355)*x356));

	if (t65 != -2147287040) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x357 = -1;
	static int32_t x359 = INT32_MIN;
	volatile uint64_t x360 = 461479251157138LLU;
	volatile uint64_t t66 = 514251094234055LLU;

	t66 = (x357^((x358^x359)*x360));

	if (t66 != 12416828088402766005LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x361 = 2973584595229LLU;
	int16_t x362 = -1;

	t67 = (x361^((x362^x363)*x364));

	if (t67 != 18446741100124956321LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x366 = 13151;
	uint32_t x368 = UINT32_MAX;
	static volatile uint64_t t68 = 1254LLU;

	t68 = (x365^((x366^x367)*x368));

	if (t68 != 4485263062260963877LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x377 = INT32_MIN;
	static int16_t x378 = INT16_MAX;
	int64_t x379 = -15235LL;
	uint16_t x380 = 2739U;

	t69 = (x377^((x378^x379)*x380));

	if (t69 != 2099458022LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	volatile uint8_t x383 = 28U;
	int8_t x384 = 1;
	volatile int32_t t70 = 4;

	t70 = (x381^((x382^x383)*x384));

	if (t70 != -2147450909) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x387 = INT64_MIN;
	uint64_t x388 = 3547753989LLU;

	t71 = (x385^((x386^x387)*x388));

	if (t71 != 9223255281936056422LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x389 = 2U;
	uint64_t x392 = UINT64_MAX;
	static uint64_t t72 = 0LLU;

	t72 = (x389^((x390^x391)*x392));

	if (t72 != 18433541683617872497LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x397 = 9;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -1;
	int32_t t73 = -2302;

	t73 = (x397^((x398^x399)*x400));

	if (t73 != -1073709047) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x401 = INT32_MIN;
	volatile uint64_t x403 = 638890LLU;
	uint64_t t74 = 341536036253415808LLU;

	t74 = (x401^((x402^x403)*x404));

	if (t74 != 18446744070019064956LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x406 = 50U;
	uint64_t x408 = 309661702198460876LLU;
	uint64_t t75 = 0LLU;

	t75 = (x405^((x406^x407)*x408));

	if (t75 != 2344335559389601136LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x409 = INT8_MIN;
	volatile int16_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	static int64_t x412 = -1LL;
	volatile int64_t t76 = 5246LL;

	t76 = (x409^((x410^x411)*x412));

	if (t76 != -65664LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x413 = 12221997U;
	static int64_t x414 = 40923LL;
	int8_t x415 = INT8_MIN;
	volatile int64_t x416 = -191826915LL;
	static volatile int64_t t77 = 737278998140659673LL;

	t77 = (x413^((x414^x415)*x416));

	if (t77 != 7839763322978LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = 26285532113LL;
	int8_t x419 = -7;
	volatile int64_t t78 = -1639695527568LL;

	t78 = (x417^((x418^x419)*x420));

	if (t78 != -9223372010569243688LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x425 = -4;
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = 0;

	t79 = (x425^((x426^x427)*x428));

	if (t79 != 4294967292U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x434 = UINT8_MAX;

	t80 = (x433^((x434^x435)*x436));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x442 = -59LL;
	int32_t x443 = 0;
	int32_t x444 = INT32_MIN;
	int64_t t81 = -7LL;

	t81 = (x441^((x442^x443)*x444));

	if (t81 != 126701535285LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MIN;
	static uint16_t x447 = 74U;
	volatile int32_t x448 = 0;
	int32_t t82 = 43512;

	t82 = (x445^((x446^x447)*x448));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = -1;
	uint64_t x450 = 8464951723551LLU;
	volatile int8_t x452 = -1;
	uint64_t t83 = 208LLU;

	t83 = (x449^((x450^x451)*x452));

	if (t83 != 18446735608758380528LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = -6;
	uint64_t x456 = 1859747259767LLU;
	volatile uint64_t t84 = 81192LLU;

	t84 = (x453^((x454^x455)*x456));

	if (t84 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = INT16_MIN;
	static uint32_t x458 = 230019545U;
	volatile uint16_t x459 = 3333U;
	int16_t x460 = INT16_MIN;
	uint32_t t85 = 1464U;

	t85 = (x457^((x458^x459)*x460));

	if (t85 != 4000153600U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x461 = 5U;
	static uint64_t x462 = 8910501459329694454LLU;
	volatile uint8_t x463 = 11U;
	uint8_t x464 = 1U;

	t86 = (x461^((x462^x463)*x464));

	if (t86 != 8910501459329694456LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = INT16_MIN;
	int64_t x466 = -29219LL;
	int16_t x467 = INT16_MIN;
	int8_t x468 = 0;

	t87 = (x465^((x466^x467)*x468));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x469 = 1757U;
	volatile int16_t x470 = -2268;
	static int16_t x471 = INT16_MAX;
	uint8_t x472 = 28U;
	volatile uint32_t t88 = 0U;

	t88 = (x469^((x470^x471)*x472));

	if (t88 != 4294111529U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x478 = INT8_MIN;
	volatile int8_t x479 = 0;
	uint16_t x480 = 11U;
	static volatile int64_t t89 = -45547LL;

	t89 = (x477^((x478^x479)*x480));

	if (t89 != -407731100092LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x481 = 3995U;
	volatile uint16_t x482 = UINT16_MAX;
	static uint16_t x484 = UINT16_MAX;
	int64_t t90 = 1456380296612LL;

	t90 = (x481^((x482^x483)*x484));

	if (t90 != -4294840220LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x498 = 12U;
	volatile uint64_t x500 = 1936257221476330486LLU;
	volatile uint64_t t91 = 652850747680661LLU;

	t91 = (x497^((x498^x499)*x500));

	if (t91 != 11722144268226807310LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x501 = UINT32_MAX;
	static uint64_t x502 = 8943LLU;
	uint64_t t92 = 70612643LLU;

	t92 = (x501^((x502^x503)*x504));

	if (t92 != 18446727834438205439LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x505 = INT64_MIN;
	int8_t x507 = 7;
	uint8_t x508 = 73U;
	int64_t t93 = -91332LL;

	t93 = (x505^((x506^x507)*x508));

	if (t93 != 9223372036847883805LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MAX;
	int8_t x516 = -1;

	t94 = (x513^((x514^x515)*x516));

	if (t94 != -127LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x517 = INT16_MIN;
	uint64_t x518 = 186919LLU;
	static uint16_t x520 = 7U;
	static volatile uint64_t t95 = 6LLU;

	t95 = (x517^((x518^x519)*x520));

	if (t95 != 4828208831LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = 34491LL;
	int32_t x522 = -1;
	int32_t x523 = INT32_MIN;
	int64_t x524 = -1949277LL;

	t96 = (x521^((x522^x523)*x524));

	if (t96 != -4186040481007386LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x525 = INT64_MAX;
	volatile int8_t x527 = 7;
	int8_t x528 = -1;
	volatile int64_t t97 = -1LL;

	t97 = (x525^((x526^x527)*x528));

	if (t97 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x538 = 5;
	int64_t x540 = 12409371LL;
	volatile int64_t t98 = -59729099LL;

	t98 = (x537^((x538^x539)*x540));

	if (t98 != -1513502725LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x546 = -1;
	int16_t x548 = -90;
	int32_t t99 = 0;

	t99 = (x545^((x546^x547)*x548));

	if (t99 != 522095) { NG(); } else { ; }
	
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

