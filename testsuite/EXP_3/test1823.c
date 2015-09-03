#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile int32_t x3 = -49;
uint16_t x7 = 28284U;
int32_t x12 = 1746423;
uint32_t x15 = UINT32_MAX;
static uint8_t x22 = UINT8_MAX;
int64_t x42 = INT64_MAX;
uint32_t x52 = UINT32_MAX;
uint32_t t10 = 12750600U;
int8_t x55 = 8;
static int8_t x56 = INT8_MIN;
volatile int8_t x65 = INT8_MAX;
uint32_t x66 = UINT32_MAX;
uint64_t t13 = 2169704840049LLU;
int8_t x70 = INT8_MIN;
int16_t x76 = INT16_MAX;
int64_t x85 = -1LL;
int8_t x88 = INT8_MAX;
volatile int32_t x90 = -1;
uint8_t x92 = UINT8_MAX;
uint32_t t19 = 1092726530U;
int8_t x97 = -1;
uint32_t x98 = 50U;
int16_t x105 = INT16_MIN;
uint8_t x107 = 12U;
static volatile uint32_t x108 = UINT32_MAX;
volatile int64_t t22 = -443428827LL;
uint32_t x110 = 1148019U;
int64_t x118 = 3750379236LL;
int8_t x120 = -1;
int32_t x129 = INT32_MIN;
uint32_t x132 = UINT32_MAX;
int8_t x141 = 36;
uint8_t x146 = 1U;
static int64_t x147 = INT64_MIN;
uint32_t x152 = UINT32_MAX;
int32_t x156 = 904;
int32_t x158 = INT32_MIN;
volatile int32_t t33 = -3228;
volatile int32_t t34 = -11437579;
volatile int32_t t36 = -1522;
uint8_t x179 = 1U;
int32_t x180 = INT32_MAX;
uint32_t x184 = 453U;
uint32_t x187 = 3U;
uint64_t x195 = 1087009518459195LLU;
volatile int32_t x198 = INT32_MIN;
volatile uint64_t x200 = 294LLU;
int64_t x215 = INT64_MIN;
static uint16_t x218 = UINT16_MAX;
static int8_t x219 = -1;
int32_t x226 = INT32_MIN;
volatile int32_t t48 = -1;
int16_t x248 = INT16_MIN;
volatile uint16_t x251 = UINT16_MAX;
int16_t x252 = INT16_MIN;
volatile int32_t x253 = INT32_MIN;
static volatile int64_t t53 = 127239624348LL;
volatile int8_t x260 = INT8_MIN;
uint32_t x264 = UINT32_MAX;
int32_t x271 = 132521;
int16_t x274 = -12432;
int64_t x276 = -8797223LL;
uint8_t x281 = 16U;
int64_t x284 = 7667LL;
uint64_t x290 = 59393684357196109LLU;
uint32_t x291 = UINT32_MAX;
volatile int16_t x302 = INT16_MIN;
int8_t x305 = 0;
uint64_t x306 = UINT64_MAX;
volatile int32_t x320 = INT32_MIN;
int64_t x322 = INT64_MAX;
uint16_t x324 = 0U;
uint64_t x327 = UINT64_MAX;
int8_t x331 = INT8_MAX;
int64_t x339 = -1LL;
volatile int64_t x350 = INT64_MAX;
int32_t x353 = INT32_MIN;
volatile uint64_t x363 = 3315LLU;
uint32_t x373 = 11125U;
static uint16_t x375 = UINT16_MAX;
uint16_t x383 = 7705U;
static volatile int16_t x384 = INT16_MAX;
volatile int32_t x398 = 77866439;
volatile int16_t x399 = 0;
int8_t x406 = INT8_MIN;
uint32_t t88 = 73151299U;
uint64_t x422 = 18083LLU;
volatile uint16_t x424 = UINT16_MAX;
volatile uint64_t t94 = 117789320LLU;
uint16_t x439 = 222U;
volatile uint16_t x446 = 2U;
uint64_t t97 = 2654216173LLU;
int16_t x454 = 999;
uint16_t x457 = 1133U;
int8_t x458 = INT8_MAX;
static int64_t x460 = -637331610014LL;
int64_t t99 = 26746926909517LL;


void f0(void) {
	uint8_t x2 = 25U;
	int8_t x4 = -1;
	volatile int64_t t0 = -29972674231675LL;

	t0 = ((x1&x2)*(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	int16_t x8 = 2;
	int32_t t1 = 21;

	t1 = ((x5&x6)*(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	volatile int32_t t2 = -66656;

	t2 = ((x9&x10)*(x11&x12));

	if (t2 != -15232) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	uint32_t x14 = 1098150521U;
	static int64_t x16 = -1409357973765411LL;
	int64_t t3 = 33139870671523781LL;

	t3 = ((x13&x14)*(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int64_t x18 = 32250259140631LL;
	static int8_t x19 = 58;
	volatile uint16_t x20 = 31U;
	static volatile int64_t t4 = 1544LL;

	t4 = ((x17&x18)*(x19&x20));

	if (t4 != 838506737656406LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 4581126871537LLU;
	volatile int8_t x23 = -2;
	uint64_t x24 = 372794893LLU;
	volatile uint64_t t5 = 846020343LLU;

	t5 = ((x21&x22)*(x23&x24));

	if (t5 != 89843568972LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	uint64_t x31 = 656464261LLU;
	uint32_t x32 = 1820220279U;
	uint64_t t6 = 12815169744656410LLU;

	t6 = ((x29&x30)*(x31&x32));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MIN;
	int8_t x36 = 0;
	volatile int32_t t7 = -58776652;

	t7 = ((x33&x34)*(x35&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static uint16_t x38 = 0U;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = 49U;
	static int64_t t8 = 2877258LL;

	t8 = ((x37&x38)*(x39&x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	int64_t t9 = -44LL;

	t9 = ((x41&x42)*(x43&x44));

	if (t9 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = 0;
	int8_t x51 = INT8_MAX;

	t10 = ((x49&x50)*(x51&x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 21008205LLU;
	int8_t x54 = -1;
	volatile uint64_t t11 = 2698103108622062LLU;

	t11 = ((x53&x54)*(x55&x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MAX;
	static int8_t x60 = -1;
	uint32_t t12 = 19732U;

	t12 = ((x57&x58)*(x59&x60));

	if (t12 != 4294967169U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x67 = INT32_MIN;
	volatile uint64_t x68 = UINT64_MAX;

	t13 = ((x65&x66)*(x67&x68));

	if (t13 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x69 = -1LL;
	int64_t x71 = -1LL;
	int16_t x72 = -1;
	static volatile int64_t t14 = 10LL;

	t14 = ((x69&x70)*(x71&x72));

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = 12;
	int64_t x75 = -122197045434759492LL;
	volatile int64_t t15 = 14953486575267LL;

	t15 = ((x73&x74)*(x75&x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MIN;
	int8_t x83 = -1;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t16 = 24027852523LLU;

	t16 = ((x81&x82)*(x83&x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x86 = INT64_MIN;
	uint64_t x87 = 112985LLU;
	static volatile uint64_t t17 = 1033818886LLU;

	t17 = ((x85&x86)*(x87&x88));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = UINT64_MAX;
	uint32_t x91 = 9U;
	volatile uint64_t t18 = 18542LLU;

	t18 = ((x89&x90)*(x91&x92));

	if (t18 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x93 = 1036335U;
	int8_t x94 = 3;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 2460U;

	t19 = ((x93&x94)*(x95&x96));

	if (t19 != 7380U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x99 = 995131LLU;
	int8_t x100 = -1;
	uint64_t t20 = 662579LLU;

	t20 = ((x97&x98)*(x99&x100));

	if (t20 != 49756550LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = -1LL;
	volatile uint8_t x102 = UINT8_MAX;
	int64_t x103 = 97LL;
	volatile int16_t x104 = 2500;
	volatile int64_t t21 = -18071908740382139LL;

	t21 = ((x101&x102)*(x103&x104));

	if (t21 != 16320LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x106 = -1LL;

	t22 = ((x105&x106)*(x107&x108));

	if (t22 != -393216LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	static int64_t x112 = INT64_MAX;
	int64_t t23 = 26LL;

	t23 = ((x109&x110)*(x111&x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	int32_t x119 = -1;
	static int64_t t24 = 119434LL;

	t24 = ((x117&x118)*(x119&x120));

	if (t24 != -100LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	int16_t x122 = -1;
	int16_t x123 = -6337;
	int64_t x124 = INT64_MAX;
	int64_t t25 = 5064LL;

	t25 = ((x121&x122)*(x123&x124));

	if (t25 != -9223372036854769471LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = -1010;
	volatile int16_t x126 = INT16_MIN;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t26 = -36;

	t26 = ((x125&x126)*(x127&x128));

	if (t26 != 1073741824) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x130 = -1LL;
	int64_t x131 = INT64_MIN;
	static int64_t t27 = 2LL;

	t27 = ((x129&x130)*(x131&x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = 324162U;
	int64_t x134 = -1LL;
	static int64_t x135 = INT64_MIN;
	static int32_t x136 = INT32_MAX;
	int64_t t28 = -924293LL;

	t28 = ((x133&x134)*(x135&x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x142 = INT8_MIN;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;
	volatile int64_t t29 = -145184676847455LL;

	t29 = ((x141&x142)*(x143&x144));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 4U;
	uint16_t x148 = 7528U;
	volatile int64_t t30 = 957891LL;

	t30 = ((x145&x146)*(x147&x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = 2;
	volatile uint8_t x150 = 8U;
	int32_t x151 = -1699284;
	volatile uint32_t t31 = 132876195U;

	t31 = ((x149&x150)*(x151&x152));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = 347LL;
	static int16_t x154 = -1;
	int16_t x155 = INT16_MAX;
	volatile int64_t t32 = 1536899316728317634LL;

	t32 = ((x153&x154)*(x155&x156));

	if (t32 != 313688LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	volatile int8_t x159 = -1;
	volatile int8_t x160 = 0;

	t33 = ((x157&x158)*(x159&x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 2887;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x163 = 20U;
	static int16_t x164 = -1;

	t34 = ((x161&x162)*(x163&x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	uint8_t x166 = 107U;
	static uint8_t x167 = 109U;
	int16_t x168 = 528;
	static int32_t t35 = -1;

	t35 = ((x165&x166)*(x167&x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 0U;
	static int8_t x172 = INT8_MAX;

	t36 = ((x169&x170)*(x171&x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -108394903072571LL;
	static volatile uint32_t x178 = 866U;
	volatile int64_t t37 = 6053835500LL;

	t37 = ((x177&x178)*(x179&x180));

	if (t37 != 64LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = 1490814582119198LL;
	volatile int64_t x182 = -1LL;
	int16_t x183 = INT16_MAX;
	volatile int64_t t38 = -12000198918LL;

	t38 = ((x181&x182)*(x183&x184));

	if (t38 != 675339005699996694LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 2U;
	static int64_t x186 = -1LL;
	static uint32_t x188 = UINT32_MAX;
	volatile int64_t t39 = -326680LL;

	t39 = ((x185&x186)*(x187&x188));

	if (t39 != 6LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = 59U;
	int64_t x190 = 5557810038507LL;
	int16_t x191 = -15;
	static uint32_t x192 = UINT32_MAX;
	volatile int64_t t40 = 2035955770334059142LL;

	t40 = ((x189&x190)*(x191&x192));

	if (t40 != 184683593083LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -1649485;
	int64_t x194 = INT64_MIN;
	int8_t x196 = -10;
	static uint64_t t41 = 0LLU;

	t41 = ((x193&x194)*(x195&x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = 72U;
	int64_t x199 = INT64_MIN;
	volatile uint64_t t42 = 45261079862417836LLU;

	t42 = ((x197&x198)*(x199&x200));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x205 = 1626978532143291LLU;
	volatile int64_t x206 = INT64_MAX;
	static int32_t x207 = INT32_MAX;
	uint8_t x208 = 40U;
	uint64_t t43 = 270467468713818908LLU;

	t43 = ((x205&x206)*(x207&x208));

	if (t43 != 65079141285731640LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x209 = 25U;
	int64_t x210 = -77680LL;
	int32_t x211 = 0;
	static uint16_t x212 = 19156U;
	volatile int64_t t44 = -218313106514882155LL;

	t44 = ((x209&x210)*(x211&x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = 12117;
	static uint8_t x214 = 5U;
	uint16_t x216 = 6U;
	int64_t t45 = -27562046047462LL;

	t45 = ((x213&x214)*(x215&x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t46 = 72;

	t46 = ((x217&x218)*(x219&x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -1;
	volatile int16_t x222 = 1;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = 1520146LLU;
	uint64_t t47 = 22166804LLU;

	t47 = ((x221&x222)*(x223&x224));

	if (t47 != 18LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = 1;
	static int32_t x227 = -1;
	uint8_t x228 = 1U;

	t48 = ((x225&x226)*(x227&x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -5;
	int64_t x230 = 39126904LL;
	int16_t x231 = -7;
	volatile uint64_t x232 = 132714078394989LLU;
	static uint64_t t49 = 119455LLU;

	t49 = ((x229&x230)*(x231&x232));

	if (t49 != 9155920096668172344LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	static int64_t x234 = -1LL;
	volatile int64_t x235 = -3720LL;
	int16_t x236 = -1;
	volatile int64_t t50 = 1079473232653883LL;

	t50 = ((x233&x234)*(x235&x236));

	if (t50 != 7988639170560LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = INT64_MIN;
	static volatile int64_t t51 = 27458590357433587LL;

	t51 = ((x245&x246)*(x247&x248));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 230LLU;
	static uint64_t x250 = 1327716LLU;
	volatile uint64_t t52 = 1010942872LLU;

	t52 = ((x249&x250)*(x251&x252));

	if (t52 != 3276800LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x254 = 1U;
	int64_t x255 = -1LL;
	int32_t x256 = INT32_MIN;

	t53 = ((x253&x254)*(x255&x256));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x257 = -1;
	volatile int64_t x258 = 462080LL;
	volatile int64_t x259 = 43734572428LL;
	int64_t t54 = 48929230062LL;

	t54 = ((x257&x258)*(x259&x260));

	if (t54 != 20208871221985280LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x261 = 90LLU;
	volatile int64_t x262 = -1LL;
	volatile int16_t x263 = -14992;
	uint64_t t55 = 105908290372390497LLU;

	t55 = ((x261&x262)*(x263&x264));

	if (t55 != 386545707360LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 30U;
	int16_t x266 = 1;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 58;
	int32_t t56 = -1236;

	t56 = ((x265&x266)*(x267&x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x269 = INT64_MAX;
	int32_t x270 = 10384;
	int64_t x272 = INT64_MAX;
	static int64_t t57 = -1796797791651LL;

	t57 = ((x269&x270)*(x271&x272));

	if (t57 != 1376098064LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	volatile int64_t t58 = 129924830792280589LL;

	t58 = ((x273&x274)*(x275&x276));

	if (t58 != 110570242048LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x282 = 118U;
	static int16_t x283 = -1;
	volatile int64_t t59 = -108731933LL;

	t59 = ((x281&x282)*(x283&x284));

	if (t59 != 122672LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MAX;
	static volatile int16_t x286 = 232;
	volatile int16_t x287 = 6;
	int32_t x288 = INT32_MIN;
	volatile int32_t t60 = 56451;

	t60 = ((x285&x286)*(x287&x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = 0;
	static int32_t x292 = -19;
	uint64_t t61 = 1454512436573LLU;

	t61 = ((x289&x290)*(x291&x292));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = INT16_MIN;
	static uint16_t x294 = UINT16_MAX;
	int8_t x295 = -1;
	int32_t x296 = 0;
	volatile int32_t t62 = 6830;

	t62 = ((x293&x294)*(x295&x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x297 = 51;
	volatile int8_t x298 = INT8_MAX;
	int8_t x299 = -1;
	int64_t x300 = -1842641612LL;
	volatile int64_t t63 = -23LL;

	t63 = ((x297&x298)*(x299&x300));

	if (t63 != -93974722212LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x301 = UINT8_MAX;
	volatile int16_t x303 = -1;
	int16_t x304 = 475;
	volatile int32_t t64 = 32;

	t64 = ((x301&x302)*(x303&x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x307 = -18;
	int8_t x308 = -1;
	volatile uint64_t t65 = 155196767LLU;

	t65 = ((x305&x306)*(x307&x308));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	int64_t x311 = 33160170056013995LL;
	uint16_t x312 = 15U;
	int64_t t66 = 3083320LL;

	t66 = ((x309&x310)*(x311&x312));

	if (t66 != -23622320128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -904842871801683LL;
	volatile uint8_t x314 = 26U;
	uint16_t x315 = 328U;
	int16_t x316 = 2431;
	int64_t t67 = -130461LL;

	t67 = ((x313&x314)*(x315&x316));

	if (t67 != 2624LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = 1425;
	int64_t x318 = -29810633413250LL;
	volatile int8_t x319 = -10;
	static int64_t t68 = 2131745517201070LL;

	t68 = ((x317&x318)*(x319&x320));

	if (t68 != -2783138807808LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x321 = 25U;
	volatile int64_t x323 = 1077LL;
	volatile int64_t t69 = 2493343509LL;

	t69 = ((x321&x322)*(x323&x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = -890410LL;
	volatile int64_t x326 = -1LL;
	volatile int32_t x328 = -305968;
	volatile uint64_t t70 = 264LLU;

	t70 = ((x325&x326)*(x327&x328));

	if (t70 != 272436966880LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MIN;
	volatile int8_t x330 = INT8_MAX;
	uint16_t x332 = UINT16_MAX;
	static volatile int32_t t71 = 15908;

	t71 = ((x329&x330)*(x331&x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -1LL;
	int8_t x334 = INT8_MAX;
	int8_t x335 = -1;
	uint16_t x336 = 1745U;
	volatile int64_t t72 = 26971725907LL;

	t72 = ((x333&x334)*(x335&x336));

	if (t72 != 221615LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x337 = 7275602U;
	int16_t x338 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	volatile int64_t t73 = 6957LL;

	t73 = ((x337&x338)*(x339&x340));

	if (t73 != 15621861200166912LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = 98250007670034LLU;
	uint32_t x342 = 439267U;
	volatile int8_t x343 = -1;
	static volatile uint64_t x344 = 85121934LLU;
	volatile uint64_t t74 = 135LLU;

	t74 = ((x341&x342)*(x343&x344));

	if (t74 != 34190586742044LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = -1;
	int64_t x351 = -1LL;
	static volatile int8_t x352 = -1;
	int64_t t75 = 48472559457736499LL;

	t75 = ((x349&x350)*(x351&x352));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x354 = -1258;
	volatile int32_t x355 = 170123985;
	volatile int8_t x356 = 0;
	int32_t t76 = 0;

	t76 = ((x353&x354)*(x355&x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	static volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t77 = 420478;

	t77 = ((x357&x358)*(x359&x360));

	if (t77 != -16384) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -456250763LL;
	uint64_t x362 = 56171377LLU;
	int8_t x364 = INT8_MIN;
	volatile uint64_t t78 = 5445542LLU;

	t78 = ((x361&x362)*(x363&x364));

	if (t78 != 15108048000LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = 0;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 2561068209LLU;
	static int32_t x368 = INT32_MIN;
	uint64_t t79 = 1949643641LLU;

	t79 = ((x365&x366)*(x367&x368));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	volatile uint32_t x370 = 7588246U;
	int32_t x371 = INT32_MAX;
	static int8_t x372 = 7;
	uint32_t t80 = 1117837U;

	t80 = ((x369&x370)*(x371&x372));

	if (t80 != 154U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x374 = 45U;
	int8_t x376 = INT8_MAX;
	uint32_t t81 = 2865U;

	t81 = ((x373&x374)*(x375&x376));

	if (t81 != 4699U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MIN;
	static uint8_t x378 = 5U;
	int8_t x379 = -6;
	int16_t x380 = -1;
	volatile int32_t t82 = -51;

	t82 = ((x377&x378)*(x379&x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MIN;
	int32_t t83 = 585;

	t83 = ((x381&x382)*(x383&x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	uint16_t x386 = UINT16_MAX;
	uint64_t x387 = 970595108612LLU;
	volatile int8_t x388 = INT8_MIN;
	uint64_t t84 = 18778236577006LLU;

	t84 = ((x385&x386)*(x387&x388));

	if (t84 != 63484684863832064LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 4476782927497349LLU;
	uint32_t x390 = 156295415U;
	volatile int8_t x391 = -3;
	static volatile uint8_t x392 = 3U;
	uint64_t t85 = 8497906592847457041LLU;

	t85 = ((x389&x390)*(x391&x392));

	if (t85 != 16517LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = 31;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = 1U;
	static volatile int64_t t86 = 47940LL;

	t86 = ((x393&x394)*(x395&x396));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x397 = 755;
	int64_t x400 = -1172451014258661LL;
	volatile int64_t t87 = -90522LL;

	t87 = ((x397&x398)*(x399&x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x405 = INT32_MIN;
	static volatile int16_t x407 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;

	t88 = ((x405&x406)*(x407&x408));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x413 = 1U;
	int16_t x414 = -13;
	static uint8_t x415 = 97U;
	uint64_t x416 = 26852359222LLU;
	volatile uint64_t t89 = 125447LLU;

	t89 = ((x413&x414)*(x415&x416));

	if (t89 != 32LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x417 = 10168902996582LLU;
	uint32_t x418 = 48651U;
	static uint32_t x419 = 2U;
	volatile int64_t x420 = 64236LL;
	volatile uint64_t t90 = 460369230811169509LLU;

	t90 = ((x417&x418)*(x419&x420));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x421 = 3449U;
	static int64_t x423 = INT64_MAX;
	uint64_t t91 = 137LLU;

	t91 = ((x421&x422)*(x423&x424));

	if (t91 != 69270495LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = 169LL;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = 3U;
	uint64_t x428 = UINT64_MAX;
	uint64_t t92 = 13871179996LLU;

	t92 = ((x425&x426)*(x427&x428));

	if (t92 != 384LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x429 = 2U;
	static int64_t x430 = INT64_MIN;
	volatile int64_t x431 = INT64_MIN;
	volatile int8_t x432 = 0;
	volatile int64_t t93 = 44LL;

	t93 = ((x429&x430)*(x431&x432));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 3U;
	int32_t x434 = 116430449;
	volatile uint64_t x435 = 211LLU;
	static int32_t x436 = -1;

	t94 = ((x433&x434)*(x435&x436));

	if (t94 != 211LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	uint64_t t95 = 80176156661LLU;

	t95 = ((x437&x438)*(x439&x440));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x445 = INT32_MAX;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t96 = -5761;

	t96 = ((x445&x446)*(x447&x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x449 = 1U;
	int16_t x450 = 340;
	static uint64_t x451 = UINT64_MAX;
	int8_t x452 = -1;

	t97 = ((x449&x450)*(x451&x452));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x453 = UINT64_MAX;
	volatile int64_t x455 = INT64_MAX;
	static volatile int16_t x456 = -1;
	uint64_t t98 = 53936LLU;

	t98 = ((x453&x454)*(x455&x456));

	if (t98 != 9223372036854774809LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x459 = 213U;

	t99 = ((x457&x458)*(x459&x460));

	if (t99 != 6976LL) { NG(); } else { ; }
	
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

