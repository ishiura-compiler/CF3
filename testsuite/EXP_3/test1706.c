#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile uint32_t x22 = 1567718613U;
static int16_t x23 = INT16_MIN;
int32_t x24 = INT32_MIN;
uint16_t x51 = UINT16_MAX;
int64_t x54 = 11738431368019507LL;
volatile int64_t x56 = -1LL;
int64_t t10 = 1403660124320LL;
int8_t x61 = -1;
int32_t x66 = -6653131;
volatile int16_t x68 = -1;
int64_t t13 = -9221LL;
volatile int64_t t14 = -1313364568594612LL;
uint64_t t15 = 2LLU;
volatile uint32_t t16 = 3731576U;
static int32_t x93 = -31;
static int8_t x94 = INT8_MIN;
uint64_t x99 = 84850650315LLU;
volatile int8_t x100 = INT8_MAX;
int64_t x101 = -1LL;
uint32_t x106 = UINT32_MAX;
static int32_t x108 = INT32_MAX;
static uint32_t x117 = UINT32_MAX;
uint16_t x120 = 698U;
volatile int64_t x124 = INT64_MAX;
int8_t x130 = 51;
static int16_t x133 = -7;
int8_t x136 = INT8_MIN;
uint16_t x141 = 3605U;
volatile uint32_t t26 = 33385989U;
static int32_t t29 = -1;
volatile int8_t x157 = 0;
int32_t x158 = 2;
uint8_t x160 = 13U;
int32_t x161 = 43144;
int64_t x170 = -1LL;
volatile uint32_t x178 = UINT32_MAX;
int64_t x179 = INT64_MIN;
uint64_t x194 = 12283390197702LLU;
uint64_t x196 = 62693530393LLU;
volatile uint64_t t36 = 92574289931LLU;
volatile int32_t t37 = -93440;
int16_t x201 = -1;
uint16_t x202 = 2039U;
static int64_t x203 = -8492188LL;
static int32_t x205 = INT32_MIN;
volatile int16_t x207 = -5974;
uint64_t x217 = 9LLU;
uint64_t x219 = 10491429LLU;
int8_t x231 = 13;
int64_t x253 = 20192107LL;
volatile uint32_t t50 = 59075U;
uint32_t x276 = UINT32_MAX;
int8_t x277 = INT8_MIN;
int32_t x294 = -1;
volatile int8_t x295 = INT8_MIN;
int16_t x296 = INT16_MIN;
uint64_t t56 = 10219227884210LLU;
uint16_t x313 = UINT16_MAX;
int64_t t57 = 808181648602LL;
uint64_t x339 = 68452896340LLU;
static volatile int16_t x340 = INT16_MAX;
static int32_t x351 = 697;
volatile int8_t x360 = INT8_MAX;
volatile int32_t t63 = -15961840;
static volatile int8_t x375 = -2;
static volatile int64_t t67 = 39832296404825LL;
static uint16_t x387 = 9222U;
volatile uint32_t t69 = 56U;
static uint8_t x428 = 11U;
uint16_t x431 = 2946U;
static int32_t x432 = INT32_MIN;
uint32_t t75 = 58582U;
uint16_t x437 = UINT16_MAX;
uint32_t x439 = UINT32_MAX;
int32_t x460 = INT32_MIN;
volatile uint16_t x463 = 8U;
int8_t x476 = 38;
int32_t t81 = -248;
int8_t x497 = INT8_MAX;
static volatile uint64_t x498 = 13759LLU;
volatile int32_t x511 = INT32_MIN;
volatile int8_t x512 = INT8_MIN;
static uint64_t x526 = 18175836737685LLU;
uint16_t x528 = UINT16_MAX;
uint64_t t91 = 1458LLU;
uint8_t x537 = UINT8_MAX;
uint32_t x539 = UINT32_MAX;
int32_t x540 = 837830;
static volatile uint32_t t94 = 3959885U;
int64_t x543 = INT64_MIN;
uint64_t x545 = 258321403LLU;
uint64_t t97 = 1990583674808947613LLU;
volatile uint64_t x561 = 5781542837117LLU;
int16_t x564 = INT16_MIN;
static uint64_t t98 = 2406448989021186095LLU;
int8_t x570 = INT8_MIN;
volatile int64_t t99 = -9800402LL;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = 9778U;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 57031496LLU;

	t0 = ((x1-x2)*(x3&x4));

	if (t0 != 320405504LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 4U;
	static uint16_t x6 = 68U;
	volatile int32_t x7 = -299424065;
	int64_t x8 = -1LL;
	static int64_t t1 = -907033162381592LL;

	t1 = ((x5-x6)*(x7&x8));

	if (t1 != -1286016547647238080LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 119U;
	uint64_t x14 = 671365786627LLU;
	static int64_t x15 = -8626862375635434LL;
	volatile int32_t x16 = -45697;
	static uint64_t t2 = 4042340230455LLU;

	t2 = ((x13-x14)*(x15&x16));

	if (t2 != 2807753576769294840LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 1U;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = 112439816344LLU;
	volatile int16_t x20 = INT16_MIN;
	uint64_t t3 = 31421983LLU;

	t3 = ((x17-x18)*(x19&x20));

	if (t3 != 224879575040LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	uint32_t t4 = 147445930U;

	t4 = ((x21-x22)*(x23&x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 2U;
	static int8_t x26 = INT8_MIN;
	uint8_t x27 = 59U;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 29542292LL;

	t5 = ((x25-x26)*(x27&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = -32;
	uint32_t x32 = 2079667U;
	static int64_t t6 = -1167812LL;

	t6 = ((x29-x30)*(x31&x32));

	if (t6 != -68143826016LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int8_t x34 = INT8_MAX;
	int64_t x35 = -1LL;
	volatile uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 11768045227132246LLU;

	t7 = ((x33-x34)*(x35&x36));

	if (t7 != 128LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 214427057U;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t8 = 1430788LL;

	t8 = ((x41-x42)*(x43&x44));

	if (t8 != 14052485568975LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = -1;
	int8_t x50 = 41;
	uint64_t x52 = 1157866659752402LLU;
	uint64_t t9 = 23425806258504LLU;

	t9 = ((x49-x50)*(x51&x52));

	if (t9 != 18446744073707725708LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 2334;
	int8_t x55 = INT8_MIN;

	t10 = ((x53-x54)*(x55&x56));

	if (t10 != 1502519215106198144LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = UINT32_MAX;
	static int8_t x63 = INT8_MIN;
	uint8_t x64 = 20U;
	volatile uint32_t t11 = 656U;

	t11 = ((x61-x62)*(x63&x64));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -8100;
	static volatile int8_t x67 = 57;
	int32_t t12 = -1;

	t12 = ((x65-x66)*(x67&x68));

	if (t12 != 378766767) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x73 = -1LL;
	uint8_t x74 = 28U;
	uint32_t x75 = 2329402U;
	int16_t x76 = INT16_MIN;

	t13 = ((x73-x74)*(x75&x76));

	if (t13 != -67469312LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = -216738;
	int64_t x78 = -1LL;
	uint8_t x79 = 124U;
	volatile uint8_t x80 = 21U;

	t14 = ((x77-x78)*(x79&x80));

	if (t14 != -4334740LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x81 = 535822092U;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 33652554987014LLU;
	static volatile uint8_t x84 = 121U;

	t15 = ((x81-x82)*(x83&x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 705U;
	volatile int32_t x86 = INT32_MAX;
	uint32_t x87 = 123U;
	static int32_t x88 = INT32_MIN;

	t16 = ((x85-x86)*(x87&x88));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = -3293;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	int32_t t17 = -28569757;

	t17 = ((x89-x90)*(x91&x92));

	if (t17 != 962064000) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x95 = 1U;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t18 = 12512;

	t18 = ((x93-x94)*(x95&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 12U;
	int32_t x98 = -1;
	uint64_t t19 = 2817504LLU;

	t19 = ((x97-x98)*(x99&x100));

	if (t19 != 975LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x102 = INT32_MIN;
	int64_t x103 = -77550120LL;
	int32_t x104 = INT32_MIN;
	volatile int64_t t20 = 0LL;

	t20 = ((x101-x102)*(x103&x104));

	if (t20 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 1U;
	volatile uint64_t x107 = 49436707LLU;
	uint64_t t21 = 63045771555168244LLU;

	t21 = ((x105-x106)*(x107&x108));

	if (t21 != 98873414LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = INT16_MAX;
	static int32_t x119 = INT32_MIN;
	static volatile uint32_t t22 = 879U;

	t22 = ((x117-x118)*(x119&x120));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x121 = INT64_MIN;
	static int64_t x122 = -1089768840819517LL;
	uint8_t x123 = 0U;
	volatile int64_t t23 = 42016LL;

	t23 = ((x121-x122)*(x123&x124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MAX;
	static uint32_t x131 = 59647U;
	volatile int64_t x132 = -334232051306370912LL;
	int64_t t24 = 4837LL;

	t24 = ((x129-x130)*(x131&x132));

	if (t24 != 57518200635264LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	int32_t t25 = 14055493;

	t25 = ((x133-x134)*(x135&x136));

	if (t25 != 17152) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x142 = 86U;
	int16_t x143 = -1;
	int16_t x144 = -1;

	t26 = ((x141-x142)*(x143&x144));

	if (t26 != 4294963777U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = 989U;
	int8_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t27 = 4094;

	t27 = ((x145-x146)*(x147&x148));

	if (t27 != 32440320) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	static uint64_t x150 = 476023913LLU;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 40552850512178LLU;
	uint64_t t28 = 0LLU;

	t28 = ((x149-x150)*(x151&x152));

	if (t28 != 8285625257291780734LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = -1;
	static int16_t x154 = -1;
	int16_t x155 = -1;
	static int16_t x156 = INT16_MIN;

	t29 = ((x153-x154)*(x155&x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x159 = INT64_MIN;
	volatile int64_t t30 = -425864448LL;

	t30 = ((x157-x158)*(x159&x160));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x162 = 1393;
	int8_t x163 = -1;
	int32_t x164 = -1;
	volatile int32_t t31 = 935913320;

	t31 = ((x161-x162)*(x163&x164));

	if (t31 != -41751) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x165 = 239U;
	volatile uint32_t x166 = 456624U;
	int16_t x167 = INT16_MIN;
	uint64_t x168 = 360725577962426165LLU;
	volatile uint64_t t32 = 1LLU;

	t32 = ((x165-x166)*(x167&x168));

	if (t32 != 16660353990422626304LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = -1;
	int16_t x171 = INT16_MIN;
	static int16_t x172 = INT16_MAX;
	volatile int64_t t33 = 61LL;

	t33 = ((x169-x170)*(x171&x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int8_t x180 = 0;
	volatile int64_t t34 = -1357572673LL;

	t34 = ((x177-x178)*(x179&x180));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x181 = INT8_MAX;
	int32_t x182 = -32;
	int64_t x183 = -987608045LL;
	static volatile int8_t x184 = INT8_MAX;
	int64_t t35 = -925367816559603796LL;

	t35 = ((x181-x182)*(x183&x184));

	if (t35 != 3021LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	static volatile int16_t x195 = 260;

	t36 = ((x193-x194)*(x195&x196));

	if (t36 != 18443599525818907136LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x197 = 1U;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 1U;

	t37 = ((x197-x198)*(x199&x200));

	if (t37 != -65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x204 = 1U;
	volatile int64_t t38 = -6947790068LL;

	t38 = ((x201-x202)*(x203&x204));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x206 = -1LL;
	volatile int32_t x208 = INT32_MIN;
	volatile int64_t t39 = 33778559478877LL;

	t39 = ((x205-x206)*(x207&x208));

	if (t39 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x218 = UINT8_MAX;
	static int8_t x220 = 29;
	static volatile uint64_t t40 = 1928230732264LLU;

	t40 = ((x217-x218)*(x219&x220));

	if (t40 != 18446744073709550386LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = -1;
	static volatile uint8_t x222 = UINT8_MAX;
	static uint16_t x223 = UINT16_MAX;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t41 = 157038454736775530LLU;

	t41 = ((x221-x222)*(x223&x224));

	if (t41 != 18446744073692774656LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x229 = 29915878146LLU;
	volatile int16_t x230 = INT16_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t42 = 7387730347057077LLU;

	t42 = ((x229-x230)*(x231&x232));

	if (t42 != 388906841882LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x233 = 754;
	uint64_t x234 = 4820LLU;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = 2LLU;
	uint64_t t43 = 6871532209664045LLU;

	t43 = ((x233-x234)*(x235&x236));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = 24528200507688954LL;
	int8_t x238 = INT8_MAX;
	uint8_t x239 = 7U;
	volatile int32_t x240 = 27902;
	int64_t t44 = -42743LL;

	t44 = ((x237-x238)*(x239&x240));

	if (t44 != 147169203046132962LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = 749603U;
	int8_t x244 = INT8_MAX;
	uint32_t t45 = 104U;

	t45 = ((x241-x242)*(x243&x244));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	static int64_t x247 = -139000799513880LL;
	int32_t x248 = INT32_MIN;
	static volatile int64_t t46 = 762121065660011691LL;

	t46 = ((x245-x246)*(x247&x248));

	if (t46 != -4572481367970938880LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = 1U;
	uint32_t x250 = 0U;
	int64_t x251 = INT64_MIN;
	volatile int64_t x252 = -1LL;
	int64_t t47 = INT64_MIN;

	t47 = ((x249-x250)*(x251&x252));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x254 = 200U;
	int64_t x255 = INT64_MAX;
	volatile int16_t x256 = INT16_MAX;
	volatile int64_t t48 = -16342045787LL;

	t48 = ((x253-x254)*(x255&x256));

	if (t48 != 661628216669LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 4U;
	int32_t x260 = -1960;
	volatile uint32_t t49 = 325U;

	t49 = ((x257-x258)*(x259&x260));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = -1740;
	uint32_t x262 = 502928382U;
	uint8_t x263 = UINT8_MAX;
	uint16_t x264 = UINT16_MAX;

	t50 = ((x261-x262)*(x263&x264));

	if (t50 != 601837770U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = 554;
	static uint32_t x266 = UINT32_MAX;
	static int64_t x267 = INT64_MIN;
	int32_t x268 = 0;
	volatile int64_t t51 = -579250LL;

	t51 = ((x265-x266)*(x267&x268));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x273 = 4;
	static int8_t x274 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t t52 = -597LL;

	t52 = ((x273-x274)*(x275&x276));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x278 = -1LL;
	uint64_t x279 = 3760262LLU;
	volatile uint32_t x280 = 76685507U;
	volatile uint64_t t53 = 53LLU;

	t53 = ((x277-x278)*(x279&x280));

	if (t53 != 18446744073575325570LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x289 = INT8_MIN;
	static volatile int64_t x290 = -126697156809774LL;
	int16_t x291 = -615;
	int64_t x292 = -1LL;
	volatile int64_t t54 = 1481032538072LL;

	t54 = ((x289-x290)*(x291&x292));

	if (t54 != -77918751437932290LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = INT8_MAX;
	volatile int32_t t55 = 9465;

	t55 = ((x293-x294)*(x295&x296));

	if (t55 != -4194304) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 0U;
	int32_t x303 = -1;
	static uint64_t x304 = 389877932730LLU;

	t56 = ((x301-x302)*(x303&x304));

	if (t56 != 7153001936789176320LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x314 = 14509U;
	int32_t x315 = INT32_MIN;
	int64_t x316 = 16109996222LL;

	t57 = ((x313-x314)*(x315&x316));

	if (t57 != 767042504359936LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = -1LL;
	int8_t x322 = INT8_MAX;
	int32_t x323 = -1;
	int8_t x324 = 2;
	int64_t t58 = 29153936717339949LL;

	t58 = ((x321-x322)*(x323&x324));

	if (t58 != -256LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t59 = 922025922842286LL;

	t59 = ((x329-x330)*(x331&x332));

	if (t59 != 141282949169025LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x337 = 310197;
	static int32_t x338 = INT32_MAX;
	uint64_t t60 = 6375LLU;

	t60 = ((x337-x338)*(x339&x340));

	if (t60 != 18446701018587532216LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x346 = 15U;
	uint32_t x347 = 49U;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t61 = 5766541LLU;

	t61 = ((x345-x346)*(x347&x348));

	if (t61 != 105226697968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = 1U;
	int8_t x350 = -1;
	volatile int32_t x352 = INT32_MIN;
	int32_t t62 = -412;

	t62 = ((x349-x350)*(x351&x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x357 = -5;
	volatile int8_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;

	t63 = ((x357-x358)*(x359&x360));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x361 = -1;
	volatile int8_t x362 = INT8_MAX;
	volatile uint64_t x363 = 31994LLU;
	int64_t x364 = INT64_MIN;
	uint64_t t64 = 2090836229457LLU;

	t64 = ((x361-x362)*(x363&x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MIN;
	uint64_t x376 = 7LLU;
	volatile uint64_t t65 = 24571186847LLU;

	t65 = ((x373-x374)*(x375&x376));

	if (t65 != 12884705280LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x377 = -1LL;
	int8_t x378 = INT8_MAX;
	int32_t x379 = -1;
	int8_t x380 = INT8_MIN;
	volatile int64_t t66 = -1300683LL;

	t66 = ((x377-x378)*(x379&x380));

	if (t66 != 16384LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x381 = UINT32_MAX;
	static volatile int64_t x382 = -6731682LL;
	int64_t x383 = INT64_MIN;
	static int8_t x384 = 54;

	t67 = ((x381-x382)*(x383&x384));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 5869989U;
	static volatile uint16_t x386 = UINT16_MAX;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t68 = 2855U;

	t68 = ((x385-x386)*(x387&x388));

	if (t68 != 1989067236U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x389 = INT8_MIN;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 1756668U;
	volatile int16_t x392 = -1;

	t69 = ((x389-x390)*(x391&x392));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x397 = UINT16_MAX;
	static int32_t x398 = -1;
	static int8_t x399 = INT8_MAX;
	static int8_t x400 = 10;
	static int32_t t70 = 122377369;

	t70 = ((x397-x398)*(x399&x400));

	if (t70 != 655360) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = -1LL;
	static volatile uint64_t x403 = 831742LLU;
	int16_t x404 = -3;
	static uint64_t t71 = 34113391928754987LLU;

	t71 = ((x401-x402)*(x403&x404));

	if (t71 != 27254456320LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x413 = INT32_MIN;
	int64_t x414 = -18560650399LL;
	volatile int8_t x415 = INT8_MAX;
	int64_t x416 = INT64_MAX;
	int64_t t72 = 452LL;

	t72 = ((x413-x414)*(x415&x416));

	if (t72 != 2084472177377LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x421 = INT8_MAX;
	volatile int64_t x422 = -586747595LL;
	static int32_t x423 = 0;
	int32_t x424 = INT32_MIN;
	int64_t t73 = -45930500246LL;

	t73 = ((x421-x422)*(x423&x424));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x425 = UINT32_MAX;
	int16_t x426 = -5;
	static int64_t x427 = INT64_MIN;
	static volatile int64_t t74 = 530467078823LL;

	t74 = ((x425-x426)*(x427&x428));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x429 = 4033U;
	int8_t x430 = 8;

	t75 = ((x429-x430)*(x431&x432));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x438 = UINT16_MAX;
	volatile int64_t x440 = 57162LL;
	int64_t t76 = -1171850LL;

	t76 = ((x437-x438)*(x439&x440));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x441 = INT16_MIN;
	static uint64_t x442 = UINT64_MAX;
	int64_t x443 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	uint64_t t77 = 7942LLU;

	t77 = ((x441-x442)*(x443&x444));

	if (t77 != 9223372037928484864LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x457 = UINT16_MAX;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = -1;
	volatile int32_t t78 = -261945;

	t78 = ((x457-x458)*(x459&x460));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x461 = -1;
	uint16_t x462 = 116U;
	static int64_t x464 = 696895538933828511LL;
	static int64_t t79 = -1758133LL;

	t79 = ((x461-x462)*(x463&x464));

	if (t79 != -936LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x469 = INT16_MIN;
	int32_t x470 = 117;
	int8_t x471 = -13;
	volatile int8_t x472 = 15;
	int32_t t80 = -894;

	t80 = ((x469-x470)*(x471&x472));

	if (t80 != -98655) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x473 = -1;
	volatile int32_t x474 = 1;
	int32_t x475 = INT32_MIN;

	t81 = ((x473-x474)*(x475&x476));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = 327;
	volatile int16_t x479 = 0;
	uint16_t x480 = 209U;
	int32_t t82 = -394;

	t82 = ((x477-x478)*(x479&x480));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x481 = -1;
	uint32_t x482 = UINT32_MAX;
	uint64_t x483 = 5685177372LLU;
	int64_t x484 = -53633616LL;
	uint64_t t83 = 92962LLU;

	t83 = ((x481-x482)*(x483&x484));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x493 = INT8_MIN;
	uint32_t x494 = 60980U;
	static uint32_t x495 = 99U;
	static int8_t x496 = INT8_MIN;
	volatile uint32_t t84 = 470727372U;

	t84 = ((x493-x494)*(x495&x496));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x499 = INT32_MIN;
	static int32_t x500 = -40303999;
	static volatile uint64_t t85 = 24344373LLU;

	t85 = ((x497-x498)*(x499&x500));

	if (t85 != 29274497089536LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x501 = INT16_MAX;
	uint8_t x502 = 3U;
	static uint16_t x503 = UINT16_MAX;
	int16_t x504 = -1;
	static int32_t t86 = -1;

	t86 = ((x501-x502)*(x503&x504));

	if (t86 != 2147188740) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x505 = 10;
	uint64_t x506 = 431161987LLU;
	static uint16_t x507 = UINT16_MAX;
	static int8_t x508 = 1;
	uint64_t t87 = 361LLU;

	t87 = ((x505-x506)*(x507&x508));

	if (t87 != 18446744073278389639LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MIN;
	volatile int64_t t88 = -2397LL;

	t88 = ((x509-x510)*(x511&x512));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x513 = UINT8_MAX;
	uint8_t x514 = 127U;
	uint32_t x515 = 257125751U;
	volatile int8_t x516 = INT8_MIN;
	volatile uint32_t t89 = 13U;

	t89 = ((x513-x514)*(x515&x516));

	if (t89 != 2847309824U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x517 = INT32_MIN;
	static int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 24U;
	int32_t t90 = -12783;

	t90 = ((x517-x518)*(x519&x520));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x525 = INT16_MIN;
	int8_t x527 = -1;

	t91 = ((x525-x526)*(x527&x528));

	if (t91 != 17255590610957914261LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x529 = 3U;
	int8_t x530 = -1;
	uint64_t x531 = UINT64_MAX;
	static int16_t x532 = INT16_MIN;
	uint64_t t92 = 43LLU;

	t92 = ((x529-x530)*(x531&x532));

	if (t92 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x533 = 0LL;
	uint32_t x534 = UINT32_MAX;
	int32_t x535 = INT32_MAX;
	uint64_t x536 = 410LLU;
	uint64_t t93 = 145LLU;

	t93 = ((x533-x534)*(x535&x536));

	if (t93 != 18446742312772960666LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x538 = -972187;

	t94 = ((x537-x538)*(x539&x540));

	if (t94 != 2992261916U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x541 = INT64_MIN;
	int16_t x542 = INT16_MIN;
	uint16_t x544 = 1587U;
	volatile int64_t t95 = -508377248LL;

	t95 = ((x541-x542)*(x543&x544));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x546 = 2975936313479LLU;
	volatile uint64_t x547 = UINT64_MAX;
	static int32_t x548 = -1;
	uint64_t t96 = 5LLU;

	t96 = ((x545-x546)*(x547&x548));

	if (t96 != 2975677992076LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x557 = INT8_MIN;
	volatile uint32_t x558 = 3491950U;
	volatile uint64_t x559 = 98118604068127061LLU;
	int64_t x560 = 1LL;

	t97 = ((x557-x558)*(x559&x560));

	if (t97 != 4291475218LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;

	t98 = ((x561-x562)*(x563&x564));

	if (t98 != 17336732391208648704LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x569 = INT64_MIN;
	uint16_t x571 = 680U;
	int32_t x572 = INT32_MIN;

	t99 = ((x569-x570)*(x571&x572));

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

