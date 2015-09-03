#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x4 = UINT64_MAX;
uint32_t t0 = 9U;
int64_t x6 = INT64_MAX;
int32_t x11 = -3196291;
uint32_t x25 = UINT32_MAX;
static uint64_t x29 = 3671808171LLU;
int8_t x30 = 3;
volatile uint16_t x32 = 39U;
static uint64_t t5 = 1779489710599LLU;
uint64_t x38 = 481634247LLU;
int8_t x63 = -1;
uint32_t x79 = 14137U;
uint64_t x82 = UINT64_MAX;
int8_t x91 = INT8_MIN;
int64_t x94 = -1LL;
int16_t x103 = 6015;
uint32_t t18 = 40714U;
volatile uint32_t t19 = 108U;
uint32_t t20 = 1988018107U;
uint32_t x117 = UINT32_MAX;
volatile uint32_t t22 = 94110U;
uint64_t x131 = 4711323LLU;
uint32_t t25 = 13947637U;
uint64_t x141 = 2468766993428009892LLU;
static volatile int32_t x146 = -1;
int32_t x147 = INT32_MIN;
static int32_t x148 = -3230960;
volatile int32_t t27 = 657782289;
uint8_t x168 = UINT8_MAX;
uint64_t x169 = UINT64_MAX;
uint32_t x172 = 454U;
int64_t x173 = INT64_MAX;
static uint16_t x175 = UINT16_MAX;
static int64_t x183 = INT64_MIN;
uint8_t x184 = UINT8_MAX;
int64_t x188 = INT64_MIN;
volatile uint16_t x194 = 5677U;
uint8_t x201 = 0U;
volatile int8_t x203 = -1;
uint64_t t38 = 16959729244855328LLU;
uint16_t x205 = 2U;
static uint8_t x209 = UINT8_MAX;
volatile int32_t x210 = -1015;
static int32_t x211 = -414;
uint16_t x216 = 112U;
static volatile int64_t x217 = 96114LL;
static volatile uint32_t x229 = UINT32_MAX;
uint16_t x230 = UINT16_MAX;
uint8_t x231 = 2U;
int64_t x247 = INT64_MIN;
int8_t x249 = 1;
volatile uint32_t t48 = 31U;
int32_t t49 = 9;
int32_t t50 = 129904436;
volatile int64_t x273 = 0LL;
volatile int32_t x275 = -1;
uint64_t x302 = UINT64_MAX;
int64_t x309 = INT64_MIN;
volatile int64_t t58 = 29035697785506LL;
uint8_t x313 = 1U;
int8_t x314 = INT8_MIN;
uint32_t t60 = 155811U;
int32_t x324 = INT32_MAX;
static int64_t x325 = -15705154685104LL;
volatile int64_t t62 = 2LL;
volatile int64_t x335 = INT64_MIN;
int32_t t64 = 8;
volatile uint64_t x342 = UINT64_MAX;
uint16_t x343 = 6U;
int8_t x351 = -1;
uint16_t x353 = 98U;
int32_t x354 = -1;
volatile int32_t t68 = -12016;
int64_t x369 = 1927LL;
int64_t t71 = -1276051851758505140LL;
uint64_t x374 = UINT64_MAX;
volatile uint64_t x376 = UINT64_MAX;
int64_t x389 = 115029573707755LL;
static int8_t x402 = INT8_MAX;
int32_t x419 = INT32_MIN;
uint32_t t79 = 157872U;
volatile int32_t x428 = INT32_MIN;
int32_t x434 = -1;
int32_t t81 = 633497423;
volatile int32_t x448 = INT32_MIN;
volatile uint16_t x455 = UINT16_MAX;
uint64_t x456 = 18297642812622068LLU;
uint8_t x460 = 26U;
static uint64_t t86 = 952LLU;
volatile int8_t x468 = INT8_MIN;
static int64_t x482 = INT64_MAX;
volatile uint16_t x485 = 228U;
static int64_t x487 = 76505118LL;
int16_t x491 = 0;
int32_t x492 = -1046;
static volatile int64_t t91 = 12457LL;
int64_t t92 = 22157882652LL;
volatile uint8_t x498 = 2U;
int64_t x500 = INT64_MAX;
volatile int32_t t93 = 54338220;
static uint32_t x516 = 1801U;
uint8_t x530 = 28U;
int64_t x531 = INT64_MIN;
static volatile uint32_t x537 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = 3U;
	volatile uint16_t x2 = UINT16_MAX;
	static int32_t x3 = INT32_MAX;

	t0 = ((x1%x2)<<(x3<x4));

	if (t0 != 6U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 56987819828826918LLU;
	volatile uint32_t x7 = 7781072U;
	uint8_t x8 = 83U;
	uint64_t t1 = 53LLU;

	t1 = ((x5%x6)<<(x7<x8));

	if (t1 != 56987819828826918LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1214945063LLU;
	int32_t x10 = INT32_MIN;
	int32_t x12 = -11218;
	volatile uint64_t t2 = 46705373886492LLU;

	t2 = ((x9%x10)<<(x11<x12));

	if (t2 != 2429890126LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t3 = -1800434;

	t3 = ((x21%x22)<<(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = -1;
	int32_t x27 = -6150917;
	int8_t x28 = INT8_MAX;
	uint32_t t4 = 148951U;

	t4 = ((x25%x26)<<(x27<x28));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = -1;

	t5 = ((x29%x30)<<(x31<x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 9455;
	uint32_t x34 = 6758211U;
	uint16_t x35 = UINT16_MAX;
	volatile int64_t x36 = -1LL;
	static volatile uint32_t t6 = 84703511U;

	t6 = ((x33%x34)<<(x35<x36));

	if (t6 != 9455U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = UINT64_MAX;
	int8_t x39 = -9;
	uint32_t x40 = 41522204U;
	volatile uint64_t t7 = 6792081682364752140LLU;

	t7 = ((x37%x38)<<(x39<x40));

	if (t7 != 452088465LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MAX;
	static uint16_t x46 = 328U;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint64_t x48 = 20981631133LLU;
	int64_t t8 = 95834838216547968LL;

	t8 = ((x45%x46)<<(x47<x48));

	if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x49 = INT64_MAX;
	uint64_t x50 = 57165720844LLU;
	volatile int8_t x51 = -30;
	static int32_t x52 = INT32_MIN;
	uint64_t t9 = 4126410287867965LLU;

	t9 = ((x49%x50)<<(x51<x52));

	if (t9 != 19763176631LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	static volatile int32_t t10 = -16217;

	t10 = ((x57%x58)<<(x59<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t11 = 24832;

	t11 = ((x61%x62)<<(x63<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 5U;
	volatile int64_t x66 = -1LL;
	uint32_t x67 = 6158U;
	int16_t x68 = INT16_MIN;
	volatile int64_t t12 = -1LL;

	t12 = ((x65%x66)<<(x67<x68));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = 12LLU;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t13 = 8904897026674320LLU;

	t13 = ((x73%x74)<<(x75<x76));

	if (t13 != 24LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MIN;
	static volatile int8_t x78 = INT8_MIN;
	volatile int64_t x80 = -5676251LL;
	static volatile int32_t t14 = -26;

	t14 = ((x77%x78)<<(x79<x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x81 = 214213LL;
	int64_t x83 = 652148LL;
	int8_t x84 = -1;
	volatile uint64_t t15 = 909462LLU;

	t15 = ((x81%x82)<<(x83<x84));

	if (t15 != 214213LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x89 = 19;
	int8_t x90 = -2;
	static volatile int32_t x92 = -1552;
	static volatile int32_t t16 = -12554200;

	t16 = ((x89%x90)<<(x91<x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x93 = -1LL;
	int32_t x95 = 923188;
	uint16_t x96 = 12U;
	int64_t t17 = 476038876LL;

	t17 = ((x93%x94)<<(x95<x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 112390U;
	static uint16_t x102 = 89U;
	static int8_t x104 = INT8_MIN;

	t18 = ((x101%x102)<<(x103<x104));

	if (t18 != 72U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = 2971860U;
	static uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;

	t19 = ((x109%x110)<<(x111<x112));

	if (t19 != 180U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = UINT32_MAX;
	int8_t x115 = -1;
	volatile int8_t x116 = -1;

	t20 = ((x113%x114)<<(x115<x116));

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x118 = -1;
	static int16_t x119 = INT16_MAX;
	static int16_t x120 = -1;
	volatile uint32_t t21 = 656066U;

	t21 = ((x117%x118)<<(x119<x120));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int32_t x122 = -32894693;
	static int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MAX;

	t22 = ((x121%x122)<<(x123<x124));

	if (t22 != 65789384U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x125 = 7U;
	int32_t x126 = -181276477;
	uint8_t x127 = UINT8_MAX;
	static uint64_t x128 = UINT64_MAX;
	int32_t t23 = -23447;

	t23 = ((x125%x126)<<(x127<x128));

	if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x129 = 125U;
	int32_t x130 = INT32_MIN;
	int16_t x132 = 2201;
	int32_t t24 = -114552;

	t24 = ((x129%x130)<<(x131<x132));

	if (t24 != 125) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x133 = 22U;
	int8_t x134 = -1;
	int16_t x135 = -1;
	volatile int16_t x136 = -424;

	t25 = ((x133%x134)<<(x135<x136));

	if (t25 != 22U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x142 = INT64_MAX;
	int8_t x143 = -1;
	int8_t x144 = -1;
	volatile uint64_t t26 = 414LLU;

	t26 = ((x141%x142)<<(x143<x144));

	if (t26 != 2468766993428009892LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x145 = 729U;

	t27 = ((x145%x146)<<(x147<x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	static volatile int32_t x152 = INT32_MAX;
	uint64_t t28 = 23881961977200LLU;

	t28 = ((x149%x150)<<(x151<x152));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = 1;
	uint16_t x166 = 2906U;
	int16_t x167 = -103;
	int32_t t29 = -1494947;

	t29 = ((x165%x166)<<(x167<x168));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x170 = 24U;
	int32_t x171 = -27556;
	volatile uint64_t t30 = 26769LLU;

	t30 = ((x169%x170)<<(x171<x172));

	if (t30 != 15LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x174 = 30LLU;
	static uint16_t x176 = 812U;
	uint64_t t31 = 10218166733373994LLU;

	t31 = ((x173%x174)<<(x175<x176));

	if (t31 != 7LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = INT64_MIN;
	static int16_t x178 = INT16_MIN;
	static int32_t x179 = 178784168;
	volatile int32_t x180 = -117243274;
	volatile int64_t t32 = -80256703886648457LL;

	t32 = ((x177%x178)<<(x179<x180));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x181 = UINT64_MAX;
	volatile int32_t x182 = INT32_MIN;
	volatile uint64_t t33 = 552241741068LLU;

	t33 = ((x181%x182)<<(x183<x184));

	if (t33 != 4294967294LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int16_t x186 = 15;
	uint8_t x187 = 82U;
	volatile int32_t t34 = -413415023;

	t34 = ((x185%x186)<<(x187<x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static volatile int8_t x190 = -1;
	int8_t x191 = 1;
	int32_t x192 = 9391;
	volatile uint64_t t35 = 169903103577022LLU;

	t35 = ((x189%x190)<<(x191<x192));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = 27;
	volatile int64_t t36 = -169500LL;

	t36 = ((x193%x194)<<(x195<x196));

	if (t36 != 3934LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x197 = UINT16_MAX;
	static uint8_t x198 = UINT8_MAX;
	int16_t x199 = -4377;
	int32_t x200 = INT32_MIN;
	int32_t t37 = -54997;

	t37 = ((x197%x198)<<(x199<x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x202 = UINT64_MAX;
	static int16_t x204 = INT16_MIN;

	t38 = ((x201%x202)<<(x203<x204));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x206 = 1364;
	volatile int32_t x207 = 711818922;
	uint32_t x208 = 517U;
	volatile int32_t t39 = -56365;

	t39 = ((x205%x206)<<(x207<x208));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x212 = INT32_MAX;
	volatile int32_t t40 = -1109;

	t40 = ((x209%x210)<<(x211<x212));

	if (t40 != 510) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x213 = 1708057825665260LLU;
	uint8_t x214 = 8U;
	int8_t x215 = -1;
	uint64_t t41 = 6103418LLU;

	t41 = ((x213%x214)<<(x215<x216));

	if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x218 = -1;
	static uint16_t x219 = 23011U;
	int8_t x220 = INT8_MIN;
	volatile int64_t t42 = 7085179LL;

	t42 = ((x217%x218)<<(x219<x220));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 260426643U;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 4422U;
	uint32_t t43 = 53U;

	t43 = ((x221%x222)<<(x223<x224));

	if (t43 != 65535U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x232 = INT32_MIN;
	volatile uint32_t t44 = 3778838U;

	t44 = ((x229%x230)<<(x231<x232));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile uint32_t x238 = 104002U;
	int16_t x239 = -7780;
	volatile int32_t x240 = -1;
	volatile uint32_t t45 = 1449U;

	t45 = ((x237%x238)<<(x239<x240));

	if (t45 != 135872U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = 13994098LLU;
	int64_t x246 = INT64_MIN;
	static uint16_t x248 = 456U;
	volatile uint64_t t46 = 1902367588739LLU;

	t46 = ((x245%x246)<<(x247<x248));

	if (t46 != 27988196LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MIN;
	int16_t x252 = -1;
	volatile int64_t t47 = 13596823872077LL;

	t47 = ((x249%x250)<<(x251<x252));

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 365487364U;
	volatile uint32_t x258 = 2675U;
	int8_t x259 = -1;
	uint16_t x260 = 30U;

	t48 = ((x257%x258)<<(x259<x260));

	if (t48 != 4228U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x261 = UINT16_MAX;
	static int16_t x262 = INT16_MAX;
	volatile int8_t x263 = -1;
	static uint64_t x264 = 3560427474427536LLU;

	t49 = ((x261%x262)<<(x263<x264));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = -1;
	uint8_t x268 = 12U;

	t50 = ((x265%x266)<<(x267<x268));

	if (t50 != 254) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x274 = 10;
	int16_t x276 = INT16_MIN;
	static volatile int64_t t51 = -3LL;

	t51 = ((x273%x274)<<(x275<x276));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x281 = UINT64_MAX;
	int8_t x282 = 14;
	volatile int16_t x283 = INT16_MAX;
	static volatile uint64_t x284 = 136926534235LLU;
	uint64_t t52 = 1947197838449LLU;

	t52 = ((x281%x282)<<(x283<x284));

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = 474LL;
	volatile int32_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	int64_t t53 = -76LL;

	t53 = ((x285%x286)<<(x287<x288));

	if (t53 != 510LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 13U;
	static volatile uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 18225LLU;
	int32_t t54 = -6078;

	t54 = ((x289%x290)<<(x291<x292));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = -1;
	volatile uint64_t x294 = 1LLU;
	int32_t x295 = INT32_MIN;
	int16_t x296 = 6786;
	uint64_t t55 = 1561414154LLU;

	t55 = ((x293%x294)<<(x295<x296));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 55LL;
	int64_t x298 = 9LL;
	uint64_t x299 = 9427199LLU;
	volatile uint64_t x300 = 2237732LLU;
	int64_t t56 = 260917497455525013LL;

	t56 = ((x297%x298)<<(x299<x300));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x301 = UINT64_MAX;
	static int32_t x303 = INT32_MAX;
	int16_t x304 = INT16_MIN;
	uint64_t t57 = 3175LLU;

	t57 = ((x301%x302)<<(x303<x304));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x310 = INT64_MIN;
	volatile int8_t x311 = -26;
	int8_t x312 = INT8_MAX;

	t58 = ((x309%x310)<<(x311<x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x315 = 6033725LLU;
	int32_t x316 = 453648;
	int32_t t59 = 439788;

	t59 = ((x313%x314)<<(x315<x316));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x317 = INT32_MIN;
	uint32_t x318 = 5334547U;
	int16_t x319 = INT16_MIN;
	static volatile int64_t x320 = INT64_MAX;

	t60 = ((x317%x318)<<(x319<x320));

	if (t60 != 5991508U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	volatile int64_t t61 = 3773029924853720LL;

	t61 = ((x321%x322)<<(x323<x324));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 1U;

	t62 = ((x325%x326)<<(x327<x328));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = UINT8_MAX;
	static uint16_t x330 = UINT16_MAX;
	int32_t x331 = -4592;
	static volatile int32_t x332 = 806;
	volatile int32_t t63 = 1563730;

	t63 = ((x329%x330)<<(x331<x332));

	if (t63 != 510) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	static volatile uint8_t x336 = 6U;

	t64 = ((x333%x334)<<(x335<x336));

	if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x341 = INT16_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t65 = 25078042401745LLU;

	t65 = ((x341%x342)<<(x343<x344));

	if (t65 != 65534LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x345 = 15019051LLU;
	static uint16_t x346 = 29U;
	static volatile int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MIN;
	uint64_t t66 = 375743LLU;

	t66 = ((x345%x346)<<(x347<x348));

	if (t66 != 9LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x349 = -1LL;
	uint64_t x350 = 203736201LLU;
	uint8_t x352 = 14U;
	uint64_t t67 = 20108708234LLU;

	t67 = ((x349%x350)<<(x351<x352));

	if (t67 != 13087182LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = INT16_MIN;

	t68 = ((x353%x354)<<(x355<x356));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x357 = 173;
	int64_t x358 = INT64_MAX;
	static uint16_t x359 = 1598U;
	int16_t x360 = 2;
	volatile int64_t t69 = 2026721919196LL;

	t69 = ((x357%x358)<<(x359<x360));

	if (t69 != 173LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x361 = 7269U;
	int8_t x362 = -10;
	volatile uint8_t x363 = UINT8_MAX;
	int32_t x364 = -1;
	static volatile int32_t t70 = 3264187;

	t70 = ((x361%x362)<<(x363<x364));

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x370 = -1;
	volatile int32_t x371 = INT32_MAX;
	volatile int16_t x372 = -888;

	t71 = ((x369%x370)<<(x371<x372));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int16_t x375 = INT16_MAX;
	volatile uint64_t t72 = 4LLU;

	t72 = ((x373%x374)<<(x375<x376));

	if (t72 != 8589934590LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x377 = INT32_MAX;
	uint16_t x378 = 25237U;
	volatile int8_t x379 = INT8_MIN;
	int64_t x380 = 140LL;
	int32_t t73 = 60;

	t73 = ((x377%x378)<<(x379<x380));

	if (t73 != 33686) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x381 = INT64_MAX;
	volatile int32_t x382 = -497507824;
	volatile int64_t x383 = -1LL;
	static int32_t x384 = INT32_MIN;
	int64_t t74 = -148474LL;

	t74 = ((x381%x382)<<(x383<x384));

	if (t74 != 349858703LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x390 = 4375331;
	static volatile int8_t x391 = -4;
	int16_t x392 = INT16_MIN;
	volatile int64_t t75 = 646083023223209040LL;

	t75 = ((x389%x390)<<(x391<x392));

	if (t75 != 4057551LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = 1499;
	static int64_t x398 = -15219LL;
	static volatile uint32_t x399 = 85449427U;
	volatile uint64_t x400 = 15869561031727913LLU;
	static volatile int64_t t76 = -4LL;

	t76 = ((x397%x398)<<(x399<x400));

	if (t76 != 2998LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x401 = INT32_MAX;
	int16_t x403 = 12;
	int8_t x404 = 0;
	int32_t t77 = -430;

	t77 = ((x401%x402)<<(x403<x404));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x417 = UINT8_MAX;
	int8_t x418 = -13;
	volatile int16_t x420 = INT16_MIN;
	static volatile int32_t t78 = 30;

	t78 = ((x417%x418)<<(x419<x420));

	if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = -1;
	uint32_t x422 = 204143U;
	int8_t x423 = 0;
	int16_t x424 = -1;

	t79 = ((x421%x422)<<(x423<x424));

	if (t79 != 2718U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = INT64_MIN;
	volatile int32_t t80 = 215805265;

	t80 = ((x425%x426)<<(x427<x428));

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x433 = -15639;
	int32_t x435 = 1883248;
	int16_t x436 = INT16_MAX;

	t81 = ((x433%x434)<<(x435<x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x437 = INT32_MAX;
	static volatile uint64_t x438 = 5807484191LLU;
	int32_t x439 = INT32_MIN;
	static uint32_t x440 = 41999762U;
	volatile uint64_t t82 = 1736236771174932LLU;

	t82 = ((x437%x438)<<(x439<x440));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x445 = 32U;
	int32_t x446 = -1;
	static uint8_t x447 = 1U;
	static volatile int32_t t83 = 1;

	t83 = ((x445%x446)<<(x447<x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = UINT16_MAX;
	static int16_t x450 = -1;
	static int64_t x451 = INT64_MIN;
	uint64_t x452 = 1481228402LLU;
	static volatile int32_t t84 = 7421;

	t84 = ((x449%x450)<<(x451<x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = 104;
	uint32_t t85 = 24353544U;

	t85 = ((x453%x454)<<(x455<x456));

	if (t85 != 94U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x458 = 3228455403842217702LLU;
	static int32_t x459 = INT32_MAX;

	t86 = ((x457%x458)<<(x459<x460));

	if (t86 != 2304467052350979458LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = INT16_MAX;
	int32_t x466 = INT32_MIN;
	volatile int8_t x467 = -2;
	volatile int32_t t87 = 250494;

	t87 = ((x465%x466)<<(x467<x468));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x469 = UINT8_MAX;
	uint32_t x470 = 347U;
	int64_t x471 = -55194664518LL;
	volatile int64_t x472 = INT64_MAX;
	uint32_t t88 = 254691U;

	t88 = ((x469%x470)<<(x471<x472));

	if (t88 != 510U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x481 = 53U;
	uint16_t x483 = UINT16_MAX;
	volatile int32_t x484 = -1;
	volatile int64_t t89 = 115LL;

	t89 = ((x481%x482)<<(x483<x484));

	if (t89 != 53LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x486 = -1;
	volatile int64_t x488 = -109853861833LL;
	volatile int32_t t90 = 365463;

	t90 = ((x485%x486)<<(x487<x488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x489 = -38719394LL;
	int16_t x490 = -1;

	t91 = ((x489%x490)<<(x491<x492));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = INT8_MAX;
	int64_t x494 = -5495797349581900LL;
	static volatile uint16_t x495 = UINT16_MAX;
	static int32_t x496 = -6;

	t92 = ((x493%x494)<<(x495<x496));

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x497 = 39;
	uint16_t x499 = UINT16_MAX;

	t93 = ((x497%x498)<<(x499<x500));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x501 = UINT64_MAX;
	int32_t x502 = INT32_MIN;
	int32_t x503 = INT32_MIN;
	uint64_t x504 = 30755LLU;
	static volatile uint64_t t94 = 832LLU;

	t94 = ((x501%x502)<<(x503<x504));

	if (t94 != 2147483647LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x509 = 277;
	int32_t x510 = -172678;
	volatile uint16_t x511 = 19224U;
	static uint64_t x512 = 199402361922829LLU;
	int32_t t95 = 217668;

	t95 = ((x509%x510)<<(x511<x512));

	if (t95 != 554) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x513 = 18;
	uint16_t x514 = 940U;
	uint8_t x515 = UINT8_MAX;
	static int32_t t96 = 278714;

	t96 = ((x513%x514)<<(x515<x516));

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x529 = UINT16_MAX;
	int8_t x532 = -1;
	volatile int32_t t97 = 974199;

	t97 = ((x529%x530)<<(x531<x532));

	if (t97 != 30) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x533 = UINT8_MAX;
	volatile uint16_t x534 = 3U;
	int16_t x535 = 1;
	int16_t x536 = -49;
	volatile int32_t t98 = -14011;

	t98 = ((x533%x534)<<(x535<x536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x538 = 126939;
	static int8_t x539 = INT8_MIN;
	static int64_t x540 = 0LL;
	volatile uint32_t t99 = 1664116010U;

	t99 = ((x537%x538)<<(x539<x540));

	if (t99 != 226338U) { NG(); } else { ; }
	
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

