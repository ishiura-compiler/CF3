#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = 323476156848382LL;
static int64_t x7 = -1LL;
volatile int32_t x10 = INT32_MAX;
volatile uint16_t x15 = 2U;
int64_t x18 = -501697857279889LL;
uint8_t x19 = UINT8_MAX;
uint32_t t5 = UINT32_MAX;
static int8_t x25 = INT8_MIN;
uint16_t x28 = UINT16_MAX;
static volatile uint16_t x36 = UINT16_MAX;
static uint64_t x45 = 1267793129986LLU;
static uint32_t x47 = UINT32_MAX;
volatile int64_t x52 = 14729130LL;
volatile int32_t x53 = 3;
int32_t x59 = INT32_MAX;
volatile int8_t x65 = INT8_MIN;
int16_t x72 = 6;
uint64_t t16 = 176093259689LLU;
static volatile int64_t x76 = -1LL;
uint64_t t18 = 43581586093175LLU;
volatile int64_t x82 = -1LL;
volatile int64_t t19 = 1576514726005515LL;
uint8_t x86 = UINT8_MAX;
static volatile uint16_t x95 = 6928U;
uint32_t t23 = 858159U;
int32_t x107 = INT32_MAX;
static uint16_t x108 = UINT16_MAX;
int32_t x109 = 130;
uint64_t x111 = 666054538047199LLU;
int32_t t27 = 192561529;
int32_t x117 = -163235870;
int16_t x118 = INT16_MAX;
static uint32_t x122 = UINT32_MAX;
static uint64_t x123 = UINT64_MAX;
uint64_t t29 = 3LLU;
int64_t x125 = 1LL;
static uint64_t x133 = 14840LLU;
uint32_t x134 = 21916U;
int64_t x137 = INT64_MAX;
volatile int64_t t33 = INT64_MAX;
static uint32_t x151 = 1656624U;
volatile int32_t x153 = -20;
volatile uint8_t x158 = UINT8_MAX;
static uint64_t t38 = 3903730LLU;
volatile int64_t t43 = 26508LL;
int8_t x186 = INT8_MIN;
volatile int64_t x195 = INT64_MAX;
int8_t x199 = INT8_MAX;
int64_t t48 = INT64_MIN;
uint16_t x202 = 114U;
uint8_t x209 = 12U;
volatile uint64_t x210 = UINT64_MAX;
uint16_t x212 = UINT16_MAX;
uint8_t x213 = 3U;
static int16_t x216 = INT16_MAX;
uint64_t t54 = UINT64_MAX;
static int8_t x233 = -1;
uint8_t x238 = 126U;
volatile int32_t t57 = 302;
uint32_t x241 = 55U;
static volatile uint16_t x247 = 229U;
int64_t x256 = -1LL;
int64_t t61 = 13059397LL;
static int32_t x259 = -1;
static uint16_t x271 = 24U;
int64_t x280 = INT64_MAX;
static int8_t x287 = 61;
static int32_t x293 = INT32_MAX;
int64_t t71 = 1011601866254478288LL;
volatile uint32_t x302 = UINT32_MAX;
uint32_t t73 = 50U;
uint32_t x320 = 8168U;
static int64_t x324 = 5997289731LL;
volatile int32_t x325 = INT32_MAX;
int32_t x327 = -31998969;
volatile uint16_t x329 = UINT16_MAX;
uint8_t x330 = 11U;
volatile uint32_t x331 = UINT32_MAX;
volatile uint32_t t78 = 10U;
static int16_t x337 = -1;
int16_t x339 = 12;
static uint8_t x345 = 57U;
int64_t x348 = INT64_MIN;
int64_t t80 = -56LL;
int64_t t81 = 510472514321LL;
static volatile int32_t x356 = -27;
int64_t x362 = -1LL;
volatile int16_t x366 = INT16_MAX;
int8_t x368 = INT8_MAX;
int8_t x370 = -1;
volatile int32_t x380 = INT32_MIN;
static int8_t x388 = 3;
int32_t x396 = -1;
int8_t x401 = INT8_MIN;
int32_t t94 = 1432;
int32_t x406 = 136650867;
uint64_t t95 = 6388238771LLU;
int32_t x423 = 2;


void f0(void) {
	volatile int32_t x1 = -1;
	int8_t x2 = INT8_MAX;
	static int32_t x3 = 102511933;
	int64_t t0 = -29734186LL;

	t0 = (x1^((x2&x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 16728456825911765LLU;
	volatile int16_t x8 = -1;
	volatile uint64_t t1 = 207930122176LLU;

	t1 = (x5^((x6&x7)/x8));

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	static int8_t x11 = -1;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 1;

	t2 = (x9^((x10&x11)/x12));

	if (t2 != -65522) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 20U;
	int8_t x14 = 15;
	int32_t x16 = -11997;
	static volatile uint32_t t3 = 1713569364U;

	t3 = (x13^((x14&x15)/x16));

	if (t3 != 20U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x20 = UINT8_MAX;
	static int64_t t4 = 58440209675170098LL;

	t4 = (x17^((x18&x19)/x20));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	uint8_t x22 = 6U;
	uint32_t x23 = 92916959U;
	int16_t x24 = -1;

	t5 = (x21^((x22&x23)/x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	static int8_t x27 = INT8_MIN;
	volatile uint64_t t6 = 88LLU;

	t6 = (x25^((x26&x27)/x28));

	if (t6 != 18446462594437808000LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -12911373LL;
	static volatile int8_t x30 = -1;
	volatile uint16_t x31 = 447U;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 178347937LL;

	t7 = (x29^((x30&x31)/x32));

	if (t7 != -12911373LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 4895LLU;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	static uint64_t t8 = 263401121878162659LLU;

	t8 = (x33^((x34&x35)/x36));

	if (t8 != 4895LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 101650385LL;
	int64_t x38 = 0LL;
	uint32_t x39 = 39U;
	int8_t x40 = INT8_MIN;
	volatile int64_t t9 = 1920394LL;

	t9 = (x37^((x38&x39)/x40));

	if (t9 != 101650385LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int8_t x42 = INT8_MAX;
	uint8_t x43 = 10U;
	static volatile int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 8LL;

	t10 = (x41^((x42&x43)/x44));

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	volatile int32_t x48 = INT32_MIN;
	volatile uint64_t t11 = 1713448LLU;

	t11 = (x45^((x46&x47)/x48));

	if (t11 != 1267793129987LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = UINT8_MAX;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t t12 = 1792778668275792162LLU;

	t12 = (x49^((x50&x51)/x52));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 11U;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	int32_t t13 = -357;

	t13 = (x53^((x54&x55)/x56));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = -98651;
	int32_t x60 = -1;
	uint32_t t14 = 12875U;

	t14 = (x57^((x58&x59)/x60));

	if (t14 != 2147384996U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = 6664141859LL;
	volatile uint16_t x67 = 31U;
	static int64_t x68 = INT64_MIN;
	int64_t t15 = -29282LL;

	t15 = (x65^((x66&x67)/x68));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	volatile uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;

	t16 = (x69^((x70&x71)/x72));

	if (t16 != 15372286728091293013LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 0;
	static volatile int16_t x74 = -1;
	static volatile uint8_t x75 = 19U;
	int64_t t17 = -19219693437LL;

	t17 = (x73^((x74&x75)/x76));

	if (t17 != -19LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	volatile int64_t x78 = INT64_MIN;
	volatile int16_t x79 = INT16_MAX;
	uint64_t x80 = 273414761337LLU;

	t18 = (x77^((x78&x79)/x80));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 152591;
	int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;

	t19 = (x81^((x82&x83)/x84));

	if (t19 != 152591LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 4850LLU;
	static int64_t x87 = INT64_MAX;
	int64_t x88 = -309158845052LL;
	static uint64_t t20 = 3992LLU;

	t20 = (x85^((x86&x87)/x88));

	if (t20 != 4850LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MAX;
	int16_t x92 = -1;
	uint64_t t21 = 1911864478503091672LLU;

	t21 = (x89^((x90&x91)/x92));

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 484;
	int16_t x94 = INT16_MIN;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -37084764;

	t22 = (x93^((x94&x95)/x96));

	if (t22 != 484) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MAX;
	volatile int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 2839U;

	t23 = (x97^((x98&x99)/x100));

	if (t23 != 783673U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 22LLU;
	volatile int16_t x102 = INT16_MIN;
	static int64_t x103 = 2939436LL;
	int16_t x104 = INT16_MIN;
	uint64_t t24 = 3456177344603LLU;

	t24 = (x101^((x102&x103)/x104));

	if (t24 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MAX;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x105^((x106&x107)/x108));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = UINT8_MAX;
	int16_t x112 = -1;
	uint64_t t26 = 196196647072421564LLU;

	t26 = (x109^((x110&x111)/x112));

	if (t26 != 130LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 99;
	volatile int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	uint8_t x116 = 2U;

	t27 = (x113^((x114&x115)/x116));

	if (t27 != -16285) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x119 = -1;
	static int8_t x120 = -1;
	volatile int32_t t28 = -1;

	t28 = (x117^((x118&x119)/x120));

	if (t28 != 163231715) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 15U;
	int64_t x124 = 7900LL;

	t29 = (x121^((x122&x123)/x124));

	if (t29 != 543677LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x126 = 0U;
	uint64_t x127 = UINT64_MAX;
	static int16_t x128 = INT16_MIN;
	static uint64_t t30 = 2012271396305864144LLU;

	t30 = (x125^((x126&x127)/x128));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 57U;
	volatile uint8_t x130 = 11U;
	int8_t x131 = INT8_MIN;
	int16_t x132 = 140;
	int32_t t31 = 8572464;

	t31 = (x129^((x130&x131)/x132));

	if (t31 != 57) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	static uint64_t t32 = 827390516084626791LLU;

	t32 = (x133^((x134&x135)/x136));

	if (t32 != 14840LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = 22984973;
	volatile int64_t x140 = INT64_MAX;

	t33 = (x137^((x138&x139)/x140));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 41U;
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = 0U;
	int8_t x144 = INT8_MIN;
	static volatile uint32_t t34 = 4088U;

	t34 = (x141^((x142&x143)/x144));

	if (t34 != 41U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 14;
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = -1;
	int8_t x148 = -1;
	volatile uint32_t t35 = 674U;

	t35 = (x145^((x146&x147)/x148));

	if (t35 != 15U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 1LLU;
	uint32_t x150 = UINT32_MAX;
	uint64_t x152 = 24520291608LLU;
	volatile uint64_t t36 = 15983388896LLU;

	t36 = (x149^((x150&x151)/x152));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t37 = 65;

	t37 = (x153^((x154&x155)/x156));

	if (t37 != 274) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = 686388961569LLU;
	int32_t x159 = INT32_MAX;
	int8_t x160 = -1;

	t38 = (x157^((x158&x159)/x160));

	if (t38 != 18446743387320589856LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -2424;
	volatile int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int64_t t39 = -15393612413902LL;

	t39 = (x161^((x162&x163)/x164));

	if (t39 != 36170086419040520LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	int16_t x166 = -392;
	int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t40 = -105906558;

	t40 = (x165^((x166&x167)/x168));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = INT64_MIN;
	static int64_t x170 = -60LL;
	int32_t x171 = INT32_MAX;
	uint8_t x172 = UINT8_MAX;
	static volatile int64_t t41 = 391523521239081673LL;

	t41 = (x169^((x170&x171)/x172));

	if (t41 != -9223372036846354304LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -20325101LL;
	uint32_t x174 = 426U;
	static uint8_t x175 = 35U;
	int64_t x176 = 6894371061279281LL;
	int64_t t42 = -74LL;

	t42 = (x173^((x174&x175)/x176));

	if (t42 != -20325101LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 798U;
	int16_t x178 = INT16_MIN;
	int64_t x179 = -3676129LL;
	volatile int64_t x180 = INT64_MIN;

	t43 = (x177^((x178&x179)/x180));

	if (t43 != 798LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 111229322;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 3233U;
	int64_t t44 = -23LL;

	t44 = (x181^((x182&x183)/x184));

	if (t44 != 111229342LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 64792080;
	volatile int32_t x187 = -317831;
	int8_t x188 = INT8_MIN;
	static int32_t t45 = -9143;

	t45 = (x185^((x186&x187)/x188));

	if (t45 != 64794532) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 7377171U;
	int8_t x190 = -1;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;
	static uint32_t t46 = 7371U;

	t46 = (x189^((x190&x191)/x192));

	if (t46 != 7377171U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x193 = 58187U;
	int8_t x194 = INT8_MIN;
	volatile int32_t x196 = INT32_MIN;
	volatile int64_t t47 = 44368038476638754LL;

	t47 = (x193^((x194&x195)/x196));

	if (t47 != -4294909110LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile int16_t x198 = -1;
	uint16_t x200 = 13740U;

	t48 = (x197^((x198&x199)/x200));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MAX;
	volatile uint64_t x203 = 5447385352788963661LLU;
	static int32_t x204 = INT32_MIN;
	static uint64_t t49 = 161951670447LLU;

	t49 = (x201^((x202&x203)/x204));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 10U;
	uint32_t x206 = UINT32_MAX;
	volatile uint32_t x207 = 7279333U;
	uint64_t x208 = 1930856LLU;
	uint64_t t50 = 694733345851LLU;

	t50 = (x205^((x206&x207)/x208));

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x211 = INT16_MIN;
	volatile uint64_t t51 = 481140LLU;

	t51 = (x209^((x210&x211)/x212));

	if (t51 != 281479271743500LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x214 = UINT64_MAX;
	int32_t x215 = INT32_MIN;
	volatile uint64_t t52 = 129423LLU;

	t52 = (x213^((x214&x215)/x216));

	if (t52 != 562967133749261LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	volatile int32_t x223 = INT32_MAX;
	static int32_t x224 = 57472127;
	volatile int32_t t53 = -1011124576;

	t53 = (x221^((x222&x223)/x224));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	volatile uint64_t x226 = 1685798363LLU;
	static int32_t x227 = INT32_MAX;
	uint64_t x228 = 33802238023LLU;

	t54 = (x225^((x226&x227)/x228));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 10U;
	static volatile int32_t x230 = INT32_MIN;
	static uint64_t x231 = UINT64_MAX;
	uint32_t x232 = 7853U;
	volatile uint64_t t55 = 4699240LLU;

	t55 = (x229^((x230&x231)/x232));

	if (t55 != 2349005994086605LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x234 = -4161;
	static uint64_t x235 = 490665830498391348LLU;
	volatile uint32_t x236 = UINT32_MAX;
	uint64_t t56 = 2104471805122082LLU;

	t56 = (x233^((x234&x235)/x236));

	if (t56 != 18446744073595309574LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -7501587;
	static int32_t x239 = INT32_MIN;
	static volatile uint8_t x240 = 5U;

	t57 = (x237^((x238&x239)/x240));

	if (t57 != -7501587) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = INT8_MAX;
	int64_t x243 = -219289600LL;
	static int64_t x244 = -1LL;
	int64_t t58 = 481935LL;

	t58 = (x241^((x242&x243)/x244));

	if (t58 != 55LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 0U;
	uint16_t x248 = 5954U;
	volatile int32_t t59 = -11;

	t59 = (x245^((x246&x247)/x248));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 77U;
	volatile uint16_t x250 = 839U;
	uint16_t x251 = 11U;
	uint64_t x252 = 544712634619281165LLU;
	volatile uint64_t t60 = 14881028100581354LLU;

	t60 = (x249^((x250&x251)/x252));

	if (t60 != 77LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = INT16_MAX;
	static uint16_t x254 = 60U;
	int32_t x255 = INT32_MAX;

	t61 = (x253^((x254&x255)/x256));

	if (t61 != -32709LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MAX;
	uint16_t x258 = 27U;
	volatile uint32_t x260 = UINT32_MAX;
	volatile uint32_t t62 = 3877U;

	t62 = (x257^((x258&x259)/x260));

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MAX;
	int32_t x262 = 1;
	volatile uint16_t x263 = UINT16_MAX;
	int64_t x264 = -1LL;
	static int64_t t63 = -32945356LL;

	t63 = (x261^((x262&x263)/x264));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = 134879307269LL;
	int8_t x266 = INT8_MAX;
	volatile int64_t x267 = INT64_MIN;
	static int32_t x268 = 184508;
	volatile int64_t t64 = 103622LL;

	t64 = (x265^((x266&x267)/x268));

	if (t64 != 134879307269LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = 1196;
	uint64_t x270 = UINT64_MAX;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t65 = 6212148554186LLU;

	t65 = (x269^((x270&x271)/x272));

	if (t65 != 1196LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x273 = INT16_MIN;
	int32_t x274 = -1;
	static int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MIN;
	volatile int32_t t66 = -7;

	t66 = (x273^((x274&x275)/x276));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x277 = 3994038011393541426LLU;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = INT8_MIN;
	uint64_t t67 = 3500790925392326974LLU;

	t67 = (x277^((x278&x279)/x280));

	if (t67 != 3994038011393541426LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int64_t x286 = INT64_MIN;
	static uint8_t x288 = 32U;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x285^((x286&x287)/x288));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -1961057LL;
	uint32_t x292 = 49124U;
	int64_t t69 = -568135LL;

	t69 = (x289^((x290&x291)/x292));

	if (t69 != -21822LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MIN;
	static uint16_t x295 = 1223U;
	volatile uint64_t x296 = 74189613LLU;
	volatile uint64_t t70 = 5293363633483229095LLU;

	t70 = (x293^((x294&x295)/x296));

	if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 2U;
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = UINT16_MAX;

	t71 = (x297^((x298&x299)/x300));

	if (t71 != -140739635871742LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 779U;
	int8_t x303 = 1;
	static volatile int32_t x304 = INT32_MAX;
	static uint32_t t72 = 3208U;

	t72 = (x301^((x302&x303)/x304));

	if (t72 != 779U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 1U;
	int8_t x306 = -1;
	int16_t x307 = INT16_MAX;
	int8_t x308 = -1;

	t73 = (x305^((x306&x307)/x308));

	if (t73 != 4294934528U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = INT32_MIN;
	uint16_t x310 = 0U;
	volatile int32_t x311 = INT32_MIN;
	volatile int8_t x312 = 26;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x309^((x310&x311)/x312));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = INT8_MAX;
	int8_t x318 = 14;
	volatile uint16_t x319 = 4U;
	uint32_t t75 = 5U;

	t75 = (x317^((x318&x319)/x320));

	if (t75 != 127U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -8;
	static int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	static int64_t t76 = -3LL;

	t76 = (x321^((x322&x323)/x324));

	if (t76 != -8LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x326 = 6U;
	uint64_t x328 = 45766LLU;
	volatile uint64_t t77 = 17LLU;

	t77 = (x325^((x326&x327)/x328));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x332 = INT8_MIN;

	t78 = (x329^((x330&x331)/x332));

	if (t78 != 65535U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x338 = INT16_MAX;
	int16_t x340 = -450;
	volatile int32_t t79 = 562;

	t79 = (x337^((x338&x339)/x340));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 7U;

	t80 = (x345^((x346&x347)/x348));

	if (t80 != 57LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x349 = 1826U;
	volatile int16_t x350 = 2628;
	int64_t x351 = INT64_MIN;
	int16_t x352 = -1;

	t81 = (x349^((x350&x351)/x352));

	if (t81 != 1826LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = INT8_MIN;
	volatile int32_t x354 = -1;
	static int32_t x355 = -1;
	volatile int32_t t82 = -1;

	t82 = (x353^((x354&x355)/x356));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = UINT32_MAX;
	static int16_t x358 = INT16_MAX;
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MAX;
	static uint32_t t83 = UINT32_MAX;

	t83 = (x357^((x358&x359)/x360));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MAX;
	volatile int32_t x363 = INT32_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t84 = 2170513002831061LLU;

	t84 = (x361^((x362&x363)/x364));

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 731U;
	int32_t x367 = 132195507;
	volatile int32_t t85 = 0;

	t85 = (x365^((x366&x367)/x368));

	if (t85 != 658) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x369 = 1852308451105407345LLU;
	int8_t x371 = -21;
	int32_t x372 = -7619;
	volatile uint64_t t86 = 253LLU;

	t86 = (x369^((x370&x371)/x372));

	if (t86 != 1852308451105407345LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = 0LL;
	int64_t x374 = INT64_MIN;
	static volatile int64_t x375 = INT64_MAX;
	static int64_t x376 = -11630074794LL;
	volatile int64_t t87 = 57642LL;

	t87 = (x373^((x374&x375)/x376));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x377 = 981136548135LLU;
	static int16_t x378 = -23;
	volatile int32_t x379 = -1;
	static volatile uint64_t t88 = 2356354699LLU;

	t88 = (x377^((x378&x379)/x380));

	if (t88 != 981136548135LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x381 = -1;
	uint16_t x382 = 22279U;
	static volatile int64_t x383 = 77774124126639329LL;
	volatile int8_t x384 = -9;
	volatile int64_t t89 = 9LL;

	t89 = (x381^((x382&x383)/x384));

	if (t89 != 568LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x385 = 1418802770026000320LLU;
	int16_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	volatile uint64_t t90 = 166531009386320LLU;

	t90 = (x385^((x386&x387)/x388));

	if (t90 != 17027941304331942550LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = -14;
	int8_t x391 = INT8_MAX;
	int16_t x392 = 7418;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x389^((x390&x391)/x392));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x393 = -1;
	int8_t x394 = 49;
	int16_t x395 = INT16_MIN;
	volatile int32_t t92 = 2083296;

	t92 = (x393^((x394&x395)/x396));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint32_t t93 = 49U;

	t93 = (x397^((x398&x399)/x400));

	if (t93 != 4294934529U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 76U;
	int32_t x404 = 1;

	t94 = (x401^((x402&x403)/x404));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -10LL;
	static int32_t x407 = INT32_MAX;
	uint64_t x408 = 534431899610999LLU;

	t95 = (x405^((x406&x407)/x408));

	if (t95 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	static int64_t x411 = INT64_MIN;
	volatile int8_t x412 = -4;
	int64_t t96 = 349LL;

	t96 = (x409^((x410&x411)/x412));

	if (t96 != -2305843009213693953LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = 11;
	static int32_t x414 = INT32_MAX;
	int8_t x415 = -5;
	volatile uint32_t x416 = UINT32_MAX;
	static uint32_t t97 = 274U;

	t97 = (x413^((x414&x415)/x416));

	if (t97 != 11U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = 0;
	int16_t x418 = -2593;
	volatile int8_t x419 = INT8_MIN;
	int32_t x420 = 553812729;
	volatile int32_t t98 = -1747;

	t98 = (x417^((x418&x419)/x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = -588LL;
	int8_t x422 = INT8_MIN;
	int8_t x424 = -12;
	int64_t t99 = -602459LL;

	t99 = (x421^((x422&x423)/x424));

	if (t99 != -588LL) { NG(); } else { ; }
	
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

