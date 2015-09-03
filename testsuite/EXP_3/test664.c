#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -90;
int32_t x11 = -39;
volatile uint64_t t2 = 110092LLU;
uint8_t x20 = 56U;
volatile int16_t x22 = 13;
int32_t t5 = -25624;
int32_t x31 = -1;
uint32_t x38 = UINT32_MAX;
volatile int16_t x42 = INT16_MAX;
uint8_t x43 = 63U;
int32_t x48 = -1;
int64_t t11 = -64137249631693081LL;
int64_t x53 = INT64_MIN;
int64_t x60 = 1895029692LL;
uint64_t x64 = 20869261503399LLU;
volatile int64_t x72 = INT64_MIN;
uint64_t x74 = 9551229958804909LLU;
int64_t x81 = INT64_MIN;
uint16_t x83 = 6U;
int64_t t19 = -13509LL;
volatile int8_t x89 = INT8_MIN;
static int8_t x97 = INT8_MIN;
int32_t x100 = -1;
int8_t x102 = INT8_MIN;
static int32_t t23 = 1;
static int8_t x106 = INT8_MAX;
volatile uint64_t x111 = 124677898700LLU;
static uint64_t x126 = 117862LLU;
uint8_t x127 = UINT8_MAX;
uint16_t x128 = 192U;
static uint64_t x131 = UINT64_MAX;
volatile int32_t x134 = INT32_MIN;
static int32_t x136 = 954281624;
volatile uint64_t x137 = UINT64_MAX;
static volatile int32_t x147 = INT32_MIN;
uint16_t x148 = UINT16_MAX;
int32_t t33 = -12554973;
static volatile int8_t x151 = INT8_MAX;
int32_t t34 = 9061972;
uint16_t x155 = UINT16_MAX;
int64_t x158 = INT64_MAX;
volatile uint32_t t37 = 1805341U;
int64_t x166 = 486299673426LL;
uint16_t x167 = 49U;
int8_t x168 = -5;
int32_t t39 = 7;
static volatile int64_t x174 = 12LL;
int8_t x178 = 12;
volatile uint64_t t41 = 6369721207200232097LLU;
uint16_t x186 = UINT16_MAX;
int8_t x187 = -1;
volatile int32_t t42 = -1895;
uint16_t x190 = 90U;
volatile int32_t t43 = -757026268;
volatile int32_t x193 = -1241938;
uint8_t x197 = 34U;
static uint32_t x198 = 127U;
static int8_t x200 = INT8_MAX;
int16_t x210 = 411;
volatile int64_t x216 = INT64_MAX;
volatile int64_t t48 = -31876653277100LL;
int8_t x234 = -1;
volatile int64_t t54 = 116LL;
static uint16_t x247 = 241U;
int32_t x257 = -1;
volatile int16_t x259 = 43;
int16_t x264 = INT16_MIN;
static int8_t x270 = 59;
int8_t x297 = -1;
static uint32_t x298 = 20193773U;
static uint64_t t68 = 6LLU;
static int32_t x302 = -1;
int16_t x303 = INT16_MAX;
int8_t x305 = -1;
int32_t x312 = INT32_MIN;
uint32_t t72 = 4031U;
int8_t x326 = 0;
volatile int32_t x327 = 1;
static uint8_t x329 = 49U;
int32_t x336 = 602344;
int64_t t76 = 9LL;
uint8_t x337 = UINT8_MAX;
volatile int64_t t77 = 55799543920185LL;
static uint16_t x341 = 64U;
int32_t t79 = -7;
volatile int32_t x362 = INT32_MIN;
static uint16_t x378 = 12U;
static uint32_t t85 = 16U;
int16_t x381 = -1;
static volatile int8_t x383 = -5;
volatile int32_t x386 = INT32_MAX;
uint32_t t87 = 3506475U;
uint8_t x393 = UINT8_MAX;
static uint8_t x395 = 28U;
uint8_t x400 = 1U;
int32_t x403 = INT32_MAX;
uint64_t x405 = UINT64_MAX;
int64_t x407 = INT64_MIN;
volatile uint64_t x412 = UINT64_MAX;
volatile uint8_t x413 = UINT8_MAX;
int64_t x415 = INT64_MAX;
uint32_t x418 = 306U;
volatile int64_t x426 = -1LL;
volatile int8_t x427 = INT8_MIN;
int8_t x434 = INT8_MIN;
int64_t x435 = -1013473812858178LL;
int32_t x437 = INT32_MAX;
int64_t x440 = 324584LL;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = -1;
	int32_t x3 = -1;
	static volatile int8_t x4 = INT8_MAX;
	int32_t t0 = -239;

	t0 = ((x1^x2)+(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	static int8_t x7 = 1;
	int16_t x8 = 3;
	int64_t t1 = -56902LL;

	t1 = ((x5^x6)+(x7/x8));

	if (t1 != 9223372036854775718LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -10;
	uint64_t x10 = UINT64_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9^x10)+(x11/x12));

	if (t2 != 9LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 649816015U;
	int64_t x14 = 18376063055356LL;
	int32_t x15 = -1;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -137LL;

	t3 = ((x13^x14)+(x15/x16));

	if (t3 != 18376622510644LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	volatile uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	int32_t t4 = 0;

	t4 = ((x17^x18)+(x19/x20));

	if (t4 != -585) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int32_t x23 = -1;
	static int8_t x24 = -7;

	t5 = ((x21^x22)+(x23/x24));

	if (t5 != 242) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int8_t x26 = INT8_MAX;
	uint32_t x27 = 3112481U;
	static int64_t x28 = 66296200195858120LL;
	int64_t t6 = -442958770922LL;

	t6 = ((x25^x26)+(x27/x28));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	static volatile int8_t x30 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 200785;

	t7 = ((x29^x30)+(x31/x32));

	if (t7 != -2147483521) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 16123U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	uint32_t t8 = 19U;

	t8 = ((x37^x38)+(x39/x40));

	if (t8 != 4294951171U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int8_t x44 = 1;
	volatile int32_t t9 = 165;

	t9 = ((x41^x42)+(x43/x44));

	if (t9 != -32578) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	volatile int16_t x46 = INT16_MIN;
	static volatile uint64_t x47 = 520426072402989LLU;
	volatile uint64_t t10 = 13LLU;

	t10 = ((x45^x46)+(x47/x48));

	if (t10 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = UINT16_MAX;
	static int16_t x50 = -1;
	int8_t x51 = -1;
	int64_t x52 = -1LL;

	t11 = ((x49^x50)+(x51/x52));

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x54 = 111;
	int8_t x55 = 1;
	int64_t x56 = -1LL;
	volatile int64_t t12 = -607623LL;

	t12 = ((x53^x54)+(x55/x56));

	if (t12 != -9223372036854775698LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 62U;
	int64_t x58 = 937473713777445LL;
	static uint32_t x59 = UINT32_MAX;
	volatile int64_t t13 = -69877432284LL;

	t13 = ((x57^x58)+(x59/x60));

	if (t13 != 937473713777437LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 34449472443LLU;
	static int64_t x62 = INT64_MIN;
	uint8_t x63 = 85U;
	volatile uint64_t t14 = 2LLU;

	t14 = ((x61^x62)+(x63/x64));

	if (t14 != 9223372071304248251LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MAX;
	static int32_t x67 = INT32_MIN;
	static uint32_t x68 = 9824U;
	uint32_t t15 = 96900U;

	t15 = ((x65^x66)+(x67/x68));

	if (t15 != 2147702115U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 2117359877051LLU;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	volatile uint64_t t16 = 18710769992LLU;

	t16 = ((x69^x70)+(x71/x72));

	if (t16 != 2117359877060LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -1;
	static volatile uint64_t t17 = 7LLU;

	t17 = ((x73^x74)+(x75/x76));

	if (t17 != 9551229958793938LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = 7;
	int64_t x80 = INT64_MAX;
	volatile int64_t t18 = 1044591522860LL;

	t18 = ((x77^x78)+(x79/x80));

	if (t18 != -2147450881LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x82 = 14;
	uint8_t x84 = UINT8_MAX;

	t19 = ((x81^x82)+(x83/x84));

	if (t19 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = 32U;
	int16_t x91 = INT16_MAX;
	int16_t x92 = -1;
	uint32_t t20 = 3U;

	t20 = ((x89^x90)+(x91/x92));

	if (t20 != 4294934433U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int8_t x94 = 1;
	static int16_t x95 = INT16_MIN;
	uint32_t x96 = 2044066U;
	volatile uint32_t t21 = 6871952U;

	t21 = ((x93^x94)+(x95/x96));

	if (t21 != 2355U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = -1;
	int8_t x99 = 31;
	volatile int32_t t22 = 12737893;

	t22 = ((x97^x98)+(x99/x100));

	if (t22 != 96) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = -40;

	t23 = ((x101^x102)+(x103/x104));

	if (t23 != 32634) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 45;
	static uint32_t x107 = 6003U;
	uint8_t x108 = 14U;
	uint32_t t24 = 114241U;

	t24 = ((x105^x106)+(x107/x108));

	if (t24 != 510U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MIN;
	int64_t x110 = -56LL;
	static int64_t x112 = -614627LL;
	static volatile uint64_t t25 = 17846964703386LLU;

	t25 = ((x109^x110)+(x111/x112));

	if (t25 != 9223372036854775752LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x114 = 0;
	uint16_t x115 = 1U;
	int8_t x116 = 22;
	int32_t t26 = INT32_MIN;

	t26 = ((x113^x114)+(x115/x116));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 4353202U;
	volatile int16_t x118 = 3099;
	int64_t x119 = -1LL;
	int64_t x120 = -1LL;
	volatile int64_t t27 = -319130LL;

	t27 = ((x117^x118)+(x119/x120));

	if (t27 != 4350122LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	volatile uint64_t t28 = 3088259055747LLU;

	t28 = ((x125^x126)+(x127/x128));

	if (t28 != 9223372036854893671LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x129 = UINT64_MAX;
	int64_t x130 = -1LL;
	static int8_t x132 = INT8_MIN;
	volatile uint64_t t29 = 273608766594370353LLU;

	t29 = ((x129^x130)+(x131/x132));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MAX;
	static volatile int8_t x135 = INT8_MAX;
	int32_t t30 = -1092078;

	t30 = ((x133^x134)+(x135/x136));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = -1LL;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = -1LL;
	volatile uint64_t t31 = 1203337596LLU;

	t31 = ((x137^x138)+(x139/x140));

	if (t31 != 128LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1;
	int16_t x142 = 107;
	uint8_t x143 = 0U;
	int8_t x144 = INT8_MAX;
	volatile int32_t t32 = 78027909;

	t32 = ((x141^x142)+(x143/x144));

	if (t32 != -108) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MAX;

	t33 = ((x145^x146)+(x147/x148));

	if (t33 != -65409) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = 24;
	uint16_t x152 = 14U;

	t34 = ((x149^x150)+(x151/x152));

	if (t34 != 240) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x153 = 33U;
	uint32_t x154 = 4149U;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t35 = 11U;

	t35 = ((x153^x154)+(x155/x156));

	if (t35 != 4115U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	static uint64_t x159 = 16152LLU;
	uint32_t x160 = 51611U;
	volatile uint64_t t36 = 275739333622439222LLU;

	t36 = ((x157^x158)+(x159/x160));

	if (t36 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = 0;
	int8_t x163 = 4;
	static int32_t x164 = -1;

	t37 = ((x161^x162)+(x163/x164));

	if (t37 != 4294967291U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x165 = INT64_MIN;
	int64_t t38 = 178294LL;

	t38 = ((x165^x166)+(x167/x168));

	if (t38 != -9223371550555102391LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	int8_t x170 = -21;
	static volatile int16_t x171 = INT16_MIN;
	int8_t x172 = -1;

	t39 = ((x169^x170)+(x171/x172));

	if (t39 != 32788) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 117434LLU;
	static int8_t x175 = 46;
	volatile int8_t x176 = INT8_MAX;
	volatile uint64_t t40 = 14997517545055136LLU;

	t40 = ((x173^x174)+(x175/x176));

	if (t40 != 117430LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 7499770165LLU;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;

	t41 = ((x177^x178)+(x179/x180));

	if (t41 != 7499770169LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 10;
	int8_t x188 = INT8_MIN;

	t42 = ((x185^x186)+(x187/x188));

	if (t42 != 65525) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -585229537;

	t43 = ((x189^x190)+(x191/x192));

	if (t43 != -2147483555) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x194 = -1LL;
	volatile int32_t x195 = -251706549;
	int8_t x196 = INT8_MIN;
	int64_t t44 = -2010182LL;

	t44 = ((x193^x194)+(x195/x196));

	if (t44 != 3208394LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x199 = INT32_MAX;
	static uint32_t t45 = 48U;

	t45 = ((x197^x198)+(x199/x200));

	if (t45 != 16909413U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x205 = 2956220186321069827LL;
	volatile int16_t x206 = -1;
	volatile uint16_t x207 = UINT16_MAX;
	int32_t x208 = -14;
	int64_t t46 = 12847661676167042LL;

	t46 = ((x205^x206)+(x207/x208));

	if (t46 != -2956220186321074509LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = INT64_MIN;
	int32_t x211 = 20;
	volatile int32_t x212 = 706827;
	int64_t t47 = -1LL;

	t47 = ((x209^x210)+(x211/x212));

	if (t47 != -9223372036854775397LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = 3U;
	volatile uint16_t x214 = 225U;
	uint16_t x215 = UINT16_MAX;

	t48 = ((x213^x214)+(x215/x216));

	if (t48 != 226LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = 47;
	static int8_t x218 = INT8_MIN;
	volatile int32_t x219 = -11151;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t49 = -244137;

	t49 = ((x217^x218)+(x219/x220));

	if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 3U;
	uint64_t x222 = 527308151299794318LLU;
	uint8_t x223 = 0U;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t50 = 811468LLU;

	t50 = ((x221^x222)+(x223/x224));

	if (t50 != 527308151299794317LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MIN;
	static uint64_t x230 = 737818LLU;
	int64_t x231 = INT64_MIN;
	volatile int16_t x232 = 4;
	static volatile uint64_t t51 = 19962673LLU;

	t51 = ((x229^x230)+(x231/x232));

	if (t51 != 6917529027641819674LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = 10U;
	uint16_t x235 = 12U;
	int8_t x236 = INT8_MAX;
	volatile uint32_t t52 = 467997728U;

	t52 = ((x233^x234)+(x235/x236));

	if (t52 != 4294967285U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	static int8_t x238 = -1;
	volatile int8_t x239 = -1;
	int64_t x240 = 6314559593LL;
	volatile uint64_t t53 = 45892LLU;

	t53 = ((x237^x238)+(x239/x240));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 757U;
	int16_t x242 = -5;
	volatile int64_t x243 = INT64_MAX;
	int32_t x244 = 322;

	t54 = ((x241^x242)+(x243/x244));

	if (t54 != 28644012536815319LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x245 = 26215992LLU;
	int16_t x246 = INT16_MIN;
	static int32_t x248 = INT32_MIN;
	volatile uint64_t t55 = 880929161LLU;

	t55 = ((x245^x246)+(x247/x248));

	if (t55 != 18446744073683306040LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -3;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = 15213;
	int32_t x252 = 81846820;
	volatile int32_t t56 = -10586540;

	t56 = ((x249^x250)+(x251/x252));

	if (t56 != -65534) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x253 = UINT32_MAX;
	static uint32_t x254 = 35585419U;
	int32_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	static uint32_t t57 = 1955U;

	t57 = ((x253^x254)+(x255/x256));

	if (t57 != 4259381877U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t58 = 110970LLU;

	t58 = ((x257^x258)+(x259/x260));

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = -1161996LL;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 0LLU;
	uint64_t t59 = 2698720223494LLU;

	t59 = ((x261^x262)+(x263/x264));

	if (t59 != 1162100LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t60 = 43468U;

	t60 = ((x265^x266)+(x267/x268));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	int32_t x271 = 105516391;
	static int16_t x272 = INT16_MIN;
	int32_t t61 = 7535910;

	t61 = ((x269^x270)+(x271/x272));

	if (t61 != -35929) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = 40089;
	int16_t x274 = INT16_MAX;
	volatile int16_t x275 = INT16_MIN;
	static int16_t x276 = -9;
	int32_t t62 = -146569;

	t62 = ((x273^x274)+(x275/x276));

	if (t62 != 61854) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	volatile uint32_t x278 = UINT32_MAX;
	int32_t x279 = 119;
	uint16_t x280 = 5498U;
	volatile uint32_t t63 = 1550706860U;

	t63 = ((x277^x278)+(x279/x280));

	if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = 412U;
	int8_t x282 = 4;
	volatile uint64_t x283 = 8327298869599928LLU;
	uint64_t x284 = 37727626241774456LLU;
	volatile uint64_t t64 = 189474LLU;

	t64 = ((x281^x282)+(x283/x284));

	if (t64 != 408LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = 1;
	int8_t x286 = INT8_MAX;
	static uint64_t x287 = 6293063429722451216LLU;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t65 = 847572061973724LLU;

	t65 = ((x285^x286)+(x287/x288));

	if (t65 != 126LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x289 = -93517472568949969LL;
	static int16_t x290 = INT16_MAX;
	int16_t x291 = -472;
	int8_t x292 = 1;
	int64_t t66 = -948LL;

	t66 = ((x289^x290)+(x291/x292));

	if (t66 != -93517472568952072LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x293 = 6U;
	static int16_t x294 = -1;
	int8_t x295 = -1;
	int32_t x296 = 849;
	int32_t t67 = -4747741;

	t67 = ((x293^x294)+(x295/x296));

	if (t67 != -7) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x299 = 185868U;
	volatile uint64_t x300 = 391350327LLU;

	t68 = ((x297^x298)+(x299/x300));

	if (t68 != 4274773522LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x301 = INT16_MIN;
	static int32_t x304 = INT32_MAX;
	volatile int32_t t69 = 3;

	t69 = ((x301^x302)+(x303/x304));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x306 = 63066U;
	uint16_t x307 = 0U;
	int64_t x308 = -1LL;
	int64_t t70 = 38326492613LL;

	t70 = ((x305^x306)+(x307/x308));

	if (t70 != 4294904229LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x309 = -1;
	volatile int8_t x310 = 0;
	int64_t x311 = -2185156987LL;
	int64_t t71 = 1555990447557LL;

	t71 = ((x309^x310)+(x311/x312));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = -1;
	volatile int32_t x314 = INT32_MIN;
	uint32_t x315 = 15556125U;
	volatile int16_t x316 = INT16_MIN;

	t72 = ((x313^x314)+(x315/x316));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = -10382240456454349LL;
	int32_t x318 = -16092809;
	static int8_t x319 = 12;
	uint32_t x320 = 854U;
	static volatile int64_t t73 = 1324896283LL;

	t73 = ((x317^x318)+(x319/x320));

	if (t73 != 10382240459832900LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 46U;
	int8_t x328 = INT8_MIN;
	int32_t t74 = -58936;

	t74 = ((x325^x326)+(x327/x328));

	if (t74 != 46) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x330 = -1;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	uint32_t t75 = 563788825U;

	t75 = ((x329^x330)+(x331/x332));

	if (t75 != 4294967246U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -1;
	volatile int64_t x334 = -2554LL;
	int32_t x335 = INT32_MIN;

	t76 = ((x333^x334)+(x335/x336));

	if (t76 != -1012LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = -393948;
	int64_t x340 = INT64_MIN;

	t77 = ((x337^x338)+(x339/x340));

	if (t77 != -2147483393LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x342 = INT8_MAX;
	uint16_t x343 = 179U;
	volatile int64_t x344 = -192LL;
	static int64_t t78 = 317735LL;

	t78 = ((x341^x342)+(x343/x344));

	if (t78 != 63LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = 5852U;
	volatile int32_t x350 = 1688;
	uint16_t x351 = 858U;
	int8_t x352 = INT8_MAX;

	t79 = ((x349^x350)+(x351/x352));

	if (t79 != 4170) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x353 = 318U;
	static int16_t x354 = -1;
	static int16_t x355 = INT16_MAX;
	static int64_t x356 = INT64_MAX;
	int64_t t80 = 6701636065LL;

	t80 = ((x353^x354)+(x355/x356));

	if (t80 != -319LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = INT64_MAX;
	uint16_t x363 = 30U;
	volatile int8_t x364 = INT8_MIN;
	int64_t t81 = 112LL;

	t81 = ((x361^x362)+(x363/x364));

	if (t81 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	uint64_t x368 = 57095535LLU;
	uint64_t t82 = 1LLU;

	t82 = ((x365^x366)+(x367/x368));

	if (t82 != 9223372359940421917LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	static int32_t x370 = INT32_MAX;
	int8_t x371 = -16;
	static int8_t x372 = 1;
	volatile int64_t t83 = 18LL;

	t83 = ((x369^x370)+(x371/x372));

	if (t83 != -9223372034707292177LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 359527402U;
	volatile int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	static uint16_t x376 = 300U;
	static volatile uint32_t t84 = 278385U;

	t84 = ((x373^x374)+(x375/x376));

	if (t84 != 2499852772U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = 5701U;
	int32_t x379 = INT32_MAX;
	int8_t x380 = INT8_MIN;

	t85 = ((x377^x378)+(x379/x380));

	if (t85 != 4278195786U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x382 = INT32_MIN;
	int16_t x384 = 7484;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x381^x382)+(x383/x384));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = UINT32_MAX;
	static uint16_t x387 = UINT16_MAX;
	uint16_t x388 = UINT16_MAX;

	t87 = ((x385^x386)+(x387/x388));

	if (t87 != 2147483649U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x394 = INT64_MIN;
	uint32_t x396 = 10509131U;
	int64_t t88 = 129480LL;

	t88 = ((x393^x394)+(x395/x396));

	if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int32_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;
	volatile int32_t t89 = 502186;

	t89 = ((x397^x398)+(x399/x400));

	if (t89 != -65664) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x401 = 10;
	uint16_t x402 = 3U;
	static int16_t x404 = 177;
	volatile int32_t t90 = 0;

	t90 = ((x401^x402)+(x403/x404));

	if (t90 != 12132684) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x406 = INT8_MAX;
	int32_t x408 = -122348849;
	volatile uint64_t t91 = 1LLU;

	t91 = ((x405^x406)+(x407/x408));

	if (t91 != 75385850349LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = 0;
	volatile uint64_t t92 = 34084661051501LLU;

	t92 = ((x409^x410)+(x411/x412));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x414 = INT32_MIN;
	volatile int16_t x416 = INT16_MIN;
	static volatile int64_t t93 = -16375579LL;

	t93 = ((x413^x414)+(x415/x416));

	if (t93 != -281477124194048LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 59U;
	int16_t x419 = -1;
	int32_t x420 = INT32_MAX;
	uint32_t t94 = 6264U;

	t94 = ((x417^x418)+(x419/x420));

	if (t94 != 265U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = -15;
	uint16_t x422 = UINT16_MAX;
	int32_t x423 = INT32_MIN;
	int8_t x424 = -3;
	volatile int32_t t95 = 14;

	t95 = ((x421^x422)+(x423/x424));

	if (t95 != 715762360) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x425 = INT64_MIN;
	uint64_t x428 = 1534LLU;
	uint64_t t96 = 891654211929366LLU;

	t96 = ((x425^x426)+(x427/x428));

	if (t96 != 9235397293747676427LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = INT64_MAX;
	volatile int32_t x430 = -359743;
	int32_t x431 = INT32_MAX;
	static int32_t x432 = INT32_MIN;
	int64_t t97 = 3098232125451683131LL;

	t97 = ((x429^x430)+(x431/x432));

	if (t97 != -9223372036854416066LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x433 = -1;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t98 = -2100579307175LL;

	t98 = ((x433^x434)+(x435/x436));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = INT16_MIN;
	static int8_t x439 = INT8_MIN;
	volatile int64_t t99 = 2468919915806LL;

	t99 = ((x437^x438)+(x439/x440));

	if (t99 != -2147450881LL) { NG(); } else { ; }
	
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

