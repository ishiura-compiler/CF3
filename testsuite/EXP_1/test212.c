#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
int16_t x10 = -104;
uint16_t x21 = 5U;
volatile uint64_t x23 = 208962882708LLU;
volatile int8_t x29 = INT8_MIN;
int8_t x30 = 1;
int8_t x32 = INT8_MAX;
volatile uint16_t x39 = UINT16_MAX;
int8_t x40 = INT8_MAX;
volatile int32_t t7 = 333;
volatile int64_t x52 = -1LL;
int16_t x56 = INT16_MIN;
uint32_t t11 = 14421U;
volatile uint16_t x57 = 15U;
int8_t x73 = INT8_MAX;
static int64_t t17 = -8604LL;
int8_t x92 = -1;
uint64_t x111 = 535627178456096LLU;
int64_t x112 = INT64_MIN;
volatile uint64_t x124 = 16509578669547LLU;
static volatile uint64_t t25 = 179900489747735095LLU;
int64_t x129 = -1LL;
uint16_t x131 = UINT16_MAX;
volatile int8_t x136 = -8;
volatile int64_t x140 = INT64_MIN;
volatile uint8_t x143 = 71U;
volatile int64_t t29 = -26548718722LL;
uint32_t x146 = 249936330U;
int64_t x160 = -867363545338031275LL;
int16_t x161 = INT16_MIN;
int32_t x164 = INT32_MAX;
uint16_t x179 = 25U;
static uint8_t x180 = 1U;
int32_t t35 = -1730092;
static int8_t x182 = INT8_MIN;
int64_t x197 = -1LL;
volatile int16_t x198 = -1;
uint64_t t43 = 123LLU;
int8_t x217 = 0;
volatile int16_t x220 = -1;
int64_t x228 = INT64_MIN;
volatile uint16_t x230 = 108U;
static volatile int32_t t47 = 497481048;
uint8_t x238 = UINT8_MAX;
uint16_t x250 = 28U;
int32_t x251 = -21223682;
int64_t x252 = INT64_MIN;
volatile uint64_t x254 = UINT64_MAX;
uint32_t x261 = 23668U;
int16_t x263 = INT16_MAX;
volatile int64_t t55 = -4037982887LL;
int64_t x282 = -2583176LL;
static uint32_t x284 = 1309U;
static uint8_t x286 = UINT8_MAX;
uint32_t x288 = 36224296U;
int8_t x292 = INT8_MIN;
int16_t x305 = -164;
volatile int64_t t67 = -29564678387180941LL;
uint16_t x317 = 6868U;
int8_t x326 = 63;
int64_t t69 = 3LL;
volatile int64_t t70 = 1LL;
volatile int16_t x345 = -14676;
int8_t x353 = -3;
volatile int16_t x369 = 825;
uint8_t x371 = 1U;
int32_t t78 = -10;
volatile int8_t x373 = INT8_MIN;
int32_t x383 = INT32_MIN;
int16_t x389 = -1;
int64_t x396 = -1LL;
int32_t x402 = INT32_MAX;
uint64_t x403 = UINT64_MAX;
int8_t x404 = INT8_MIN;
volatile uint64_t t86 = 19LLU;
static uint16_t x410 = 28241U;
static volatile uint64_t x421 = UINT64_MAX;
int16_t x423 = -28;
int64_t t91 = -69792323451336091LL;
int8_t x430 = INT8_MAX;
volatile uint32_t t92 = 24281U;
volatile int8_t x436 = -1;
volatile uint64_t t94 = 399456965593LLU;
int32_t x441 = INT32_MIN;
int8_t x444 = -1;
int64_t t95 = -9189804623184LL;
static int32_t x445 = 51;
int8_t x446 = INT8_MAX;
int64_t x451 = -1LL;
static int32_t x457 = -1;
volatile int8_t x458 = -6;
uint8_t x460 = UINT8_MAX;
int64_t t99 = 359714492046999614LL;


void f0(void) {
	int32_t x2 = -1;
	int8_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -7982;

	t0 = (((x1-x2)/x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	static uint32_t x7 = 43754698U;
	int64_t x8 = -5168913LL;
	int64_t t1 = 130534951097LL;

	t1 = (((x5-x6)/x7)/x8);

	if (t1 != 40781LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 85LLU;
	static uint32_t x11 = UINT32_MAX;
	static uint32_t x12 = 5U;
	uint64_t t2 = 986361220081057LLU;

	t2 = (((x9-x10)/x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x22 = 1U;
	static uint8_t x24 = 4U;
	uint64_t t3 = 446154717001721LLU;

	t3 = (((x21-x22)/x23)/x24);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 808899727359282721LL;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = 935827LLU;
	volatile uint64_t t4 = 169LLU;

	t4 = (((x25-x26)/x27)/x28);

	if (t4 != 19711703202977LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x31 = 8;
	static volatile int32_t t5 = -727525;

	t5 = (((x29-x30)/x31)/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -1;
	static volatile uint32_t x34 = 6551U;
	volatile uint8_t x35 = 107U;
	uint8_t x36 = UINT8_MAX;
	volatile uint32_t t6 = 1585U;

	t6 = (((x33-x34)/x35)/x36);

	if (t6 != 157411U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x38 = INT32_MIN;

	t7 = (((x37-x38)/x39)/x40);

	if (t7 != 258) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	volatile uint32_t x42 = 26199U;
	uint64_t x43 = 1377368911497894105LLU;
	int32_t x44 = -28;
	volatile uint64_t t8 = 2997LLU;

	t8 = (((x41-x42)/x43)/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	uint16_t x46 = 5193U;
	int8_t x47 = INT8_MAX;
	int8_t x48 = -15;
	static int64_t t9 = 54348260181LL;

	t9 = (((x45-x46)/x47)/x48);

	if (t9 != -4841665111209853LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 27U;
	int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	volatile int64_t t10 = 956LL;

	t10 = (((x49-x50)/x51)/x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 986U;
	int32_t x55 = -1;

	t11 = (((x53-x54)/x55)/x56);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x58 = 148U;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t12 = -522615;

	t12 = (((x57-x58)/x59)/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = -2851026034665012LL;
	volatile uint16_t x66 = UINT16_MAX;
	uint16_t x67 = 8415U;
	int16_t x68 = INT16_MAX;
	volatile int64_t t13 = -1428LL;

	t13 = (((x65-x66)/x67)/x68);

	if (t13 != -10339758LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MAX;
	static int32_t x70 = -1;
	static uint16_t x71 = UINT16_MAX;
	int32_t x72 = -1;
	int32_t t14 = -1247;

	t14 = (((x69-x70)/x71)/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x74 = UINT8_MAX;
	static int16_t x75 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = -22519129;

	t15 = (((x73-x74)/x75)/x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = INT32_MAX;
	static uint32_t x78 = 81150604U;
	int16_t x79 = -1;
	static int32_t x80 = -1;
	uint32_t t16 = 5247627U;

	t16 = (((x77-x78)/x79)/x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 1U;
	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;
	int64_t x84 = -1LL;

	t17 = (((x81-x82)/x83)/x84);

	if (t17 != 129LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 602409193LLU;
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MAX;
	uint64_t t18 = 40726LLU;

	t18 = (((x85-x86)/x87)/x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x89 = UINT16_MAX;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	static int64_t t19 = 205667420LL;

	t19 = (((x89-x90)/x91)/x92);

	if (t19 != -281474976710654LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = INT64_MAX;
	uint8_t x98 = 4U;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 1096455U;
	int64_t t20 = -245016200LL;

	t20 = (((x97-x98)/x99)/x100);

	if (t20 != -65718697108LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = 864957252U;
	uint8_t x106 = 45U;
	volatile uint16_t x107 = 31U;
	static volatile int64_t x108 = INT64_MIN;
	int64_t t21 = 135999831601463LL;

	t21 = (((x105-x106)/x107)/x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 0;
	int32_t x110 = -1760363;
	volatile uint64_t t22 = 1LLU;

	t22 = (((x109-x110)/x111)/x112);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 3;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = -241705365LL;
	static uint32_t x120 = 3946036U;
	static int64_t t23 = 56806793549LL;

	t23 = (((x117-x118)/x119)/x120);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x122 = -843;
	int16_t x123 = -1;
	static volatile uint64_t t24 = 2517795293683567LLU;

	t24 = (((x121-x122)/x123)/x124);

	if (t24 != 1117335LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x125 = 3U;
	static uint64_t x126 = 285985661LLU;
	int32_t x127 = -1;
	int32_t x128 = 22;

	t25 = (((x125-x126)/x127)/x128);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x130 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	volatile int64_t t26 = -173017980LL;

	t26 = (((x129-x130)/x131)/x132);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = INT64_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 3386U;
	volatile int64_t t27 = 1LL;

	t27 = (((x133-x134)/x135)/x136);

	if (t27 != -340496605022695LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = -838071806700083066LL;
	int64_t x139 = INT64_MIN;
	int64_t t28 = -17036133686LL;

	t28 = (((x137-x138)/x139)/x140);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = -13525015LL;
	static int64_t x142 = INT64_MIN;
	int8_t x144 = 27;

	t29 = (((x141-x142)/x143)/x144);

	if (t29 != 4811357348378325LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 1150298565U;
	static int16_t x147 = -1;
	volatile int32_t x148 = 699216942;
	volatile uint32_t t30 = 1U;

	t30 = (((x145-x146)/x147)/x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = -1;
	static volatile uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MAX;
	volatile uint64_t t31 = 8LLU;

	t31 = (((x157-x158)/x159)/x160);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 10U;
	static volatile int32_t t32 = 969;

	t32 = (((x161-x162)/x163)/x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x165 = -14;
	volatile int32_t x166 = -2;
	int64_t x167 = INT64_MAX;
	int16_t x168 = 156;
	int64_t t33 = -9603060176LL;

	t33 = (((x165-x166)/x167)/x168);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x173 = 30U;
	int32_t x174 = -1;
	int16_t x175 = -1;
	static int16_t x176 = INT16_MAX;
	int32_t t34 = -103;

	t34 = (((x173-x174)/x175)/x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x177 = 4;
	static int8_t x178 = INT8_MAX;

	t35 = (((x177-x178)/x179)/x180);

	if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = -1;
	int32_t x183 = 466901;
	int8_t x184 = -1;
	int32_t t36 = 6925287;

	t36 = (((x181-x182)/x183)/x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = 1287189830678760723LL;
	volatile int64_t x186 = -112271959546861LL;
	uint8_t x187 = 3U;
	volatile uint64_t x188 = UINT64_MAX;
	static uint64_t t37 = 26703932704670483LLU;

	t37 = (((x185-x186)/x187)/x188);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 69669711U;
	int16_t x190 = 1;
	static uint8_t x191 = 120U;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t38 = 8918204U;

	t38 = (((x189-x190)/x191)/x192);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x199 = -1LL;
	static volatile int16_t x200 = INT16_MAX;
	static int64_t t39 = 224902002294765LL;

	t39 = (((x197-x198)/x199)/x200);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x201 = 29214489LLU;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MAX;
	volatile int32_t x204 = -1;
	uint64_t t40 = 109LLU;

	t40 = (((x201-x202)/x203)/x204);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = 4368U;
	static uint16_t x206 = 3935U;
	int8_t x207 = -3;
	volatile int32_t x208 = 329460;
	volatile uint32_t t41 = 101517863U;

	t41 = (((x205-x206)/x207)/x208);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 371635281724131LLU;
	int32_t x212 = INT32_MIN;
	volatile uint64_t t42 = 223786102605LLU;

	t42 = (((x209-x210)/x211)/x212);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x213 = 61783173LLU;
	int32_t x214 = 76406;
	int32_t x215 = INT32_MIN;
	volatile int8_t x216 = INT8_MIN;

	t43 = (((x213-x214)/x215)/x216);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x218 = INT8_MIN;
	int64_t x219 = 13874575811150869LL;
	static int64_t t44 = -1042922892532911562LL;

	t44 = (((x217-x218)/x219)/x220);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x221 = 13291980LLU;
	volatile int16_t x222 = 0;
	volatile int8_t x223 = -1;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t45 = 15927205296278LLU;

	t45 = (((x221-x222)/x223)/x224);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x225 = -123587523751143LL;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	int64_t t46 = -21156280759LL;

	t46 = (((x225-x226)/x227)/x228);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = -1;
	int16_t x231 = 3;
	int32_t x232 = 8;

	t47 = (((x229-x230)/x231)/x232);

	if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = INT32_MAX;
	int8_t x235 = -45;
	static uint16_t x236 = 222U;
	int32_t t48 = -1;

	t48 = (((x233-x234)/x235)/x236);

	if (t48 != 214960) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	volatile int8_t x240 = -1;
	int64_t t49 = -18090757901003LL;

	t49 = (((x237-x238)/x239)/x240);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x245 = INT16_MIN;
	int64_t x246 = -1LL;
	uint32_t x247 = 1280855U;
	int16_t x248 = INT16_MAX;
	int64_t t50 = 33463815624039437LL;

	t50 = (((x245-x246)/x247)/x248);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1282;
	volatile int64_t t51 = -25911443LL;

	t51 = (((x249-x250)/x251)/x252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MAX;
	static int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MIN;
	static uint64_t t52 = 88227318823LLU;

	t52 = (((x253-x254)/x255)/x256);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = 3;
	uint64_t x258 = 42625054LLU;
	int32_t x259 = INT32_MAX;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t53 = 120415252013LLU;

	t53 = (((x257-x258)/x259)/x260);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x262 = INT32_MIN;
	volatile int8_t x264 = -1;
	static volatile uint32_t t54 = 316313U;

	t54 = (((x261-x262)/x263)/x264);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	int64_t x268 = -1LL;

	t55 = (((x265-x266)/x267)/x268);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = 59;
	uint64_t x270 = 365454LLU;
	int32_t x271 = INT32_MAX;
	int32_t x272 = -1;
	uint64_t t56 = 586933LLU;

	t56 = (((x269-x270)/x271)/x272);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	int32_t x275 = -30785819;
	volatile int8_t x276 = INT8_MIN;
	int64_t t57 = 8963184690560557LL;

	t57 = (((x273-x274)/x275)/x276);

	if (t57 != -2340609941LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -77040406;
	static int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t58 = 1;

	t58 = (((x277-x278)/x279)/x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -1LL;
	volatile int32_t x283 = INT32_MAX;
	volatile int64_t t59 = -28715750760LL;

	t59 = (((x281-x282)/x283)/x284);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x285 = 17U;
	uint32_t x287 = 88U;
	uint32_t t60 = 185495U;

	t60 = (((x285-x286)/x287)/x288);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MIN;
	int32_t x291 = -8020221;
	int32_t t61 = 287550;

	t61 = (((x289-x290)/x291)/x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MAX;
	static int64_t x294 = 1LL;
	volatile uint16_t x295 = 1953U;
	volatile int64_t x296 = 97083705736LL;
	static volatile int64_t t62 = 3852574905172184999LL;

	t62 = (((x293-x294)/x295)/x296);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x297 = -1;
	int8_t x298 = -1;
	static int16_t x299 = 1147;
	uint64_t x300 = 41810LLU;
	uint64_t t63 = 2998318675LLU;

	t63 = (((x297-x298)/x299)/x300);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x301 = INT16_MAX;
	static int64_t x302 = 2114636215709799LL;
	static volatile int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	volatile int64_t t64 = 21LL;

	t64 = (((x301-x302)/x303)/x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	int32_t t65 = 31;

	t65 = (((x305-x306)/x307)/x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = -1;
	static volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	int32_t x312 = 7852372;
	volatile int64_t t66 = -21200526LL;

	t66 = (((x309-x310)/x311)/x312);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	static uint16_t x314 = 27835U;
	uint32_t x315 = 800U;
	static int64_t x316 = -1LL;

	t67 = (((x313-x314)/x315)/x316);

	if (t67 != -5368674LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x318 = INT32_MAX;
	static volatile int16_t x319 = INT16_MAX;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t68 = 3581530;

	t68 = (((x317-x318)/x319)/x320);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = 53;
	int64_t x327 = INT64_MAX;
	static uint16_t x328 = UINT16_MAX;

	t69 = (((x325-x326)/x327)/x328);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	volatile int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	static int16_t x336 = 380;

	t70 = (((x333-x334)/x335)/x336);

	if (t70 != 11302545LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = -2105456649018427006LL;
	volatile int64_t x338 = -41LL;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = -1;
	volatile int64_t t71 = 4468176213686437LL;

	t71 = (((x337-x338)/x339)/x340);

	if (t71 != 32127209109917LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x346 = UINT64_MAX;
	volatile int16_t x347 = INT16_MAX;
	static uint64_t x348 = 34436068376349LLU;
	static volatile uint64_t t72 = 78235563LLU;

	t72 = (((x345-x346)/x347)/x348);

	if (t72 != 16LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x349 = -25;
	volatile int8_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 769036504382950LL;
	volatile int64_t t73 = -121957656105184752LL;

	t73 = (((x349-x350)/x351)/x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x354 = 13832;
	int16_t x355 = INT16_MAX;
	uint32_t x356 = 6296U;
	volatile uint32_t t74 = 7205722U;

	t74 = (((x353-x354)/x355)/x356);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 15U;
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	static int8_t x360 = -55;
	static int64_t t75 = 53028LL;

	t75 = (((x357-x358)/x359)/x360);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = 157U;
	int8_t x362 = -1;
	static int16_t x363 = 947;
	volatile int16_t x364 = -716;
	volatile int32_t t76 = 3857;

	t76 = (((x361-x362)/x363)/x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = 20447LL;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1400;
	int32_t x368 = -45468967;
	int64_t t77 = -1958425388630125784LL;

	t77 = (((x365-x366)/x367)/x368);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x370 = INT16_MIN;
	static int16_t x372 = INT16_MAX;

	t78 = (((x369-x370)/x371)/x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x374 = 1;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t79 = -7862;

	t79 = (((x373-x374)/x375)/x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MIN;
	static int64_t x379 = -35382LL;
	uint64_t x380 = 1055046458145262804LLU;
	uint64_t t80 = 3258702226925LLU;

	t80 = (((x377-x378)/x379)/x380);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = -1;
	static uint16_t x384 = 258U;
	int32_t t81 = -220;

	t81 = (((x381-x382)/x383)/x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x385 = 0U;
	volatile int16_t x386 = 2726;
	static uint8_t x387 = 28U;
	static volatile int8_t x388 = INT8_MAX;
	int32_t t82 = -8585;

	t82 = (((x385-x386)/x387)/x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x390 = 1;
	uint32_t x391 = 32049U;
	uint16_t x392 = 2U;
	static uint32_t t83 = 6U;

	t83 = (((x389-x390)/x391)/x392);

	if (t83 != 67006U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x393 = 0;
	static int8_t x394 = -1;
	static uint64_t x395 = 371471456348LLU;
	static volatile uint64_t t84 = 91565760267LLU;

	t84 = (((x393-x394)/x395)/x396);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x401 = 419081LLU;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x401-x402)/x403)/x404);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x405 = -1LL;
	volatile int16_t x406 = -12117;
	volatile int8_t x407 = INT8_MAX;
	volatile uint64_t x408 = 6313105605LLU;

	t86 = (((x405-x406)/x407)/x408);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x409 = 1;
	int64_t x411 = -1LL;
	volatile uint32_t x412 = UINT32_MAX;
	int64_t t87 = 3570994650LL;

	t87 = (((x409-x410)/x411)/x412);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 0;
	uint8_t x414 = 5U;
	int8_t x415 = INT8_MIN;
	int16_t x416 = 14;
	int32_t t88 = -3272164;

	t88 = (((x413-x414)/x415)/x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x417 = 42U;
	uint8_t x418 = 2U;
	static volatile uint32_t x419 = 531347330U;
	uint8_t x420 = UINT8_MAX;
	uint32_t t89 = 51120021U;

	t89 = (((x417-x418)/x419)/x420);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x422 = 1LLU;
	int32_t x424 = INT32_MIN;
	volatile uint64_t t90 = 61LLU;

	t90 = (((x421-x422)/x423)/x424);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MIN;
	static int32_t x426 = -1420;
	int32_t x427 = INT32_MIN;
	static int64_t x428 = -232315070511886282LL;

	t91 = (((x425-x426)/x427)/x428);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 102101125U;
	int32_t x431 = -1;
	volatile uint32_t x432 = 321877U;

	t92 = (((x429-x430)/x431)/x432);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	volatile uint8_t x434 = 44U;
	int16_t x435 = 5;
	static volatile int32_t t93 = 0;

	t93 = (((x433-x434)/x435)/x436);

	if (t93 != 6562) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x437 = UINT8_MAX;
	uint8_t x438 = 1U;
	volatile uint64_t x439 = 1274524694649911LLU;
	volatile uint32_t x440 = 8298U;

	t94 = (((x437-x438)/x439)/x440);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x442 = -1;
	int64_t x443 = 217551034618631980LL;

	t95 = (((x441-x442)/x443)/x444);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;
	volatile int32_t t96 = -113;

	t96 = (((x445-x446)/x447)/x448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x449 = 0;
	static uint64_t x450 = UINT64_MAX;
	static int32_t x452 = 14552;
	uint64_t t97 = 11820LLU;

	t97 = (((x449-x450)/x451)/x452);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x453 = INT16_MAX;
	uint8_t x454 = 53U;
	int64_t x455 = INT64_MAX;
	uint64_t x456 = UINT64_MAX;
	uint64_t t98 = 800342827728091696LLU;

	t98 = (((x453-x454)/x455)/x456);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x459 = 15208272962139LL;

	t99 = (((x457-x458)/x459)/x460);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

