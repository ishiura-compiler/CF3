#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = INT16_MAX;
volatile uint16_t x24 = 96U;
int8_t x35 = -1;
int32_t x43 = INT32_MIN;
int64_t t6 = -14809605678564833LL;
int32_t x45 = -6;
static int32_t x46 = -12722;
int8_t x52 = INT8_MIN;
int16_t x56 = INT16_MIN;
volatile int64_t t10 = -3793545839340987764LL;
int16_t x79 = -42;
int8_t x86 = -14;
static uint32_t x92 = 257390186U;
int32_t t15 = -17314;
uint8_t x99 = UINT8_MAX;
int16_t x101 = INT16_MIN;
static volatile int16_t x104 = -1;
int16_t x105 = INT16_MIN;
int64_t x107 = 2252615103022484LL;
volatile uint64_t t21 = 63399558LLU;
static int64_t x124 = INT64_MIN;
int32_t x125 = -662927485;
volatile uint64_t t23 = 177066403LLU;
uint64_t t26 = 237508301024260LLU;
volatile int64_t x152 = INT64_MIN;
static uint64_t x165 = 4233094930856LLU;
int64_t x166 = INT64_MIN;
int16_t x167 = INT16_MAX;
volatile uint16_t x170 = 164U;
static int64_t t33 = -47193795910018192LL;
int16_t x176 = INT16_MIN;
uint16_t x186 = UINT16_MAX;
volatile uint32_t t36 = 40829U;
uint8_t x194 = 3U;
static int32_t x196 = 102150870;
static volatile uint64_t x199 = 4567196159648LLU;
int16_t x203 = 6;
int16_t x209 = -5;
volatile uint64_t x213 = 239534283487LLU;
static int16_t x218 = INT16_MAX;
int64_t x223 = 1LL;
static uint16_t x229 = 5847U;
static int8_t x232 = 51;
uint32_t x233 = 9U;
int32_t x234 = -437;
int16_t x236 = INT16_MAX;
int32_t x246 = INT32_MIN;
int8_t x248 = -1;
static uint64_t t49 = 18810LLU;
volatile uint64_t x251 = UINT64_MAX;
int16_t x256 = INT16_MIN;
static int32_t x260 = 367556204;
volatile int8_t x261 = -1;
static int8_t x265 = -2;
volatile uint64_t t54 = 148700220246545LLU;
volatile int64_t t55 = -141139049115LL;
volatile uint64_t x273 = UINT64_MAX;
volatile uint16_t x282 = 174U;
int64_t x289 = INT64_MIN;
int64_t x299 = INT64_MIN;
int32_t t63 = -215049;
int16_t x305 = INT16_MAX;
int8_t x308 = -1;
int32_t x327 = -1;
int32_t x329 = -1;
volatile int32_t t70 = 1521;
int64_t x337 = -1LL;
int16_t x344 = INT16_MAX;
static uint64_t t74 = 194413LLU;
int16_t x353 = INT16_MAX;
uint16_t x362 = UINT16_MAX;
static int16_t x372 = -1;
volatile uint32_t x375 = 87372996U;
int64_t x376 = INT64_MIN;
int8_t x379 = INT8_MIN;
static int32_t x381 = INT32_MAX;
uint32_t x387 = UINT32_MAX;
uint32_t x390 = 1550282867U;
uint64_t t84 = 11LLU;
uint8_t x395 = 8U;
int32_t t88 = 2993475;
int16_t x409 = 0;
static uint16_t x412 = 509U;
volatile int64_t t90 = -10046299401353LL;
int16_t x429 = -38;
static int16_t x432 = INT16_MAX;
static int64_t x440 = INT64_MIN;
int8_t x455 = -1;
int64_t x457 = INT64_MAX;
static int8_t x459 = 1;
volatile int8_t x461 = 10;
static uint64_t x465 = 218689756552101LLU;
static int64_t x478 = -1LL;
int64_t t99 = 60724573511153018LL;


void f0(void) {
	uint8_t x1 = 4U;
	int64_t x2 = INT64_MIN;
	static volatile uint64_t x3 = 703LLU;
	uint32_t x4 = UINT32_MAX;
	static volatile uint64_t t0 = 8956394410505879LLU;

	t0 = ((x1+x2)-(x3&x4));

	if (t0 != 9223372036854775109LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = 256850900U;
	static uint16_t x15 = UINT16_MAX;
	volatile int16_t x16 = -1;
	static uint32_t t1 = 18U;

	t1 = ((x13+x14)-(x15&x16));

	if (t1 != 256818132U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 1647904168036LLU;
	uint16_t x18 = UINT16_MAX;
	int32_t x19 = INT32_MAX;
	uint32_t x20 = 16792011U;
	uint64_t t2 = 337LLU;

	t2 = ((x17+x18)-(x19&x20));

	if (t2 != 1647887441560LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 69U;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = -2753;
	uint64_t t3 = 111671370LLU;

	t3 = ((x21+x22)-(x23&x24));

	if (t3 != 36LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = UINT32_MAX;
	static int64_t x26 = -46942867434769637LL;
	int32_t x27 = INT32_MAX;
	int8_t x28 = -1;
	volatile int64_t t4 = -3491207906627354910LL;

	t4 = ((x25+x26)-(x27&x28));

	if (t4 != -46942865287285989LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = -1;
	int32_t x36 = INT32_MIN;
	volatile uint32_t t5 = 57058876U;

	t5 = ((x33+x34)-(x35&x36));

	if (t5 != 2147483646U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int64_t x42 = 265474804154LL;
	static volatile int16_t x44 = INT16_MIN;

	t6 = ((x41+x42)-(x43&x44));

	if (t6 != 267622353337LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x47 = INT32_MIN;
	int64_t x48 = 6LL;
	int64_t t7 = 46714LL;

	t7 = ((x45+x46)-(x47&x48));

	if (t7 != -12728LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = INT8_MIN;
	int32_t x50 = 22573;
	uint64_t x51 = 1726502579LLU;
	volatile uint64_t t8 = 4757LLU;

	t8 = ((x49+x50)-(x51&x52));

	if (t8 != 18446744071983071533LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MAX;
	volatile uint32_t x54 = UINT32_MAX;
	volatile int8_t x55 = 2;
	uint32_t t9 = 178523U;

	t9 = ((x53+x54)-(x55&x56));

	if (t9 != 2147483646U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 21U;
	int16_t x58 = 0;
	uint32_t x59 = UINT32_MAX;
	static int64_t x60 = -507521285LL;

	t10 = ((x57+x58)-(x59&x60));

	if (t10 != -3787445990LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = -1;
	static volatile int64_t x66 = 1LL;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -1;
	volatile int64_t t11 = -1310878773076979LL;

	t11 = ((x65+x66)-(x67&x68));

	if (t11 != 2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = UINT64_MAX;
	uint32_t x78 = UINT32_MAX;
	uint16_t x80 = 1691U;
	uint64_t t12 = 0LLU;

	t12 = ((x77+x78)-(x79&x80));

	if (t12 != 4294965612LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 249U;
	uint16_t x87 = 29320U;
	static int64_t x88 = INT64_MIN;
	volatile int64_t t13 = -409192LL;

	t13 = ((x85+x86)-(x87&x88));

	if (t13 != 235LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x89 = -9849;
	volatile uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 34U;
	static volatile uint32_t t14 = 2U;

	t14 = ((x89+x90)-(x91&x92));

	if (t14 != 4294957668U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	volatile int32_t x96 = INT32_MIN;

	t15 = ((x93+x94)-(x95&x96));

	if (t15 != 2147450879) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x100 = 58165367U;
	uint32_t t16 = 126947U;

	t16 = ((x97+x98)-(x99&x100));

	if (t16 != 65415U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x102 = 0;
	uint16_t x103 = 30U;
	volatile int32_t t17 = 3438;

	t17 = ((x101+x102)-(x103&x104));

	if (t17 != -32798) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x106 = 6166907LL;
	static int64_t x108 = INT64_MIN;
	static volatile int64_t t18 = -2290194944722LL;

	t18 = ((x105+x106)-(x107&x108));

	if (t18 != 6134139LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x109 = 17253U;
	static volatile int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	int16_t x112 = -1;
	int32_t t19 = 546409013;

	t19 = ((x109+x110)-(x111&x112));

	if (t19 != 50020) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = INT8_MAX;
	static int8_t x114 = INT8_MIN;
	volatile uint64_t x115 = 31517438777LLU;
	int64_t x116 = INT64_MIN;
	static uint64_t t20 = UINT64_MAX;

	t20 = ((x113+x114)-(x115&x116));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x117 = INT8_MIN;
	uint64_t x118 = 339383624441276144LLU;
	static int8_t x119 = INT8_MIN;
	volatile int64_t x120 = 9480744215LL;

	t21 = ((x117+x118)-(x119&x120));

	if (t21 != 339383614960531824LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = INT16_MAX;
	static int32_t x122 = -33530600;
	int8_t x123 = 1;
	volatile int64_t t22 = -16749495448LL;

	t22 = ((x121+x122)-(x123&x124));

	if (t22 != -33497833LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = -10536899;
	int8_t x128 = -3;

	t23 = ((x125+x126)-(x127&x128));

	if (t23 != 18446744073057161029LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x133 = 878LL;
	uint16_t x134 = 0U;
	static int32_t x135 = INT32_MIN;
	uint16_t x136 = 9217U;
	volatile int64_t t24 = -6LL;

	t24 = ((x133+x134)-(x135&x136));

	if (t24 != 878LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = -1;
	volatile int64_t x138 = 2234116324347480345LL;
	uint32_t x139 = 3766U;
	volatile int8_t x140 = INT8_MIN;
	int64_t t25 = -39919191276221LL;

	t25 = ((x137+x138)-(x139&x140));

	if (t25 != 2234116324347476632LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	volatile uint64_t x142 = UINT64_MAX;
	static int8_t x143 = INT8_MIN;
	int32_t x144 = -1;

	t26 = ((x141+x142)-(x143&x144));

	if (t26 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 123187418LLU;
	uint32_t x146 = 0U;
	int32_t x147 = -1112270;
	int8_t x148 = INT8_MAX;
	uint64_t t27 = 325284253488LLU;

	t27 = ((x145+x146)-(x147&x148));

	if (t27 != 123187368LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x149 = 276541100237LL;
	volatile uint64_t x150 = 6676806LLU;
	uint8_t x151 = 1U;
	static uint64_t t28 = 13LLU;

	t28 = ((x149+x150)-(x151&x152));

	if (t28 != 276547777043LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -1LL;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t29 = 88732080LLU;

	t29 = ((x153+x154)-(x155&x156));

	if (t29 != 32766LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x157 = -1LL;
	uint8_t x158 = 15U;
	uint8_t x159 = 2U;
	int32_t x160 = -7;
	int64_t t30 = -56027LL;

	t30 = ((x157+x158)-(x159&x160));

	if (t30 != 14LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = INT16_MIN;
	int64_t x162 = 0LL;
	uint16_t x163 = 3U;
	static int8_t x164 = INT8_MAX;
	volatile int64_t t31 = 2959634LL;

	t31 = ((x161+x162)-(x163&x164));

	if (t31 != -32771LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x168 = -28906192078619LL;
	volatile uint64_t t32 = 224481569323994LLU;

	t32 = ((x165+x166)-(x167&x168));

	if (t32 != 9223376269949675715LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = INT64_MAX;
	uint32_t x172 = UINT32_MAX;

	t33 = ((x169+x170)-(x171&x172));

	if (t33 != -4294999899LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = 159118LLU;
	volatile uint32_t x175 = 319U;
	uint64_t t34 = 2946730409569343306LLU;

	t34 = ((x173+x174)-(x175&x176));

	if (t34 != 9223372036854934926LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x177 = -1LL;
	volatile int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	uint32_t x180 = UINT32_MAX;
	int64_t t35 = -511943280532092534LL;

	t35 = ((x177+x178)-(x179&x180));

	if (t35 != -4294967297LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x185 = 341U;
	int32_t x187 = 14773;
	int16_t x188 = INT16_MAX;

	t36 = ((x185+x186)-(x187&x188));

	if (t36 != 51103U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = 226U;
	int32_t x191 = INT32_MIN;
	volatile int16_t x192 = -1;
	volatile uint32_t t37 = 220U;

	t37 = ((x189+x190)-(x191&x192));

	if (t37 != 2147484129U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x193 = 240LL;
	uint8_t x195 = 1U;
	int64_t t38 = -350060611947606486LL;

	t38 = ((x193+x194)-(x195&x196));

	if (t38 != 243LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = -1;
	static volatile int8_t x198 = -2;
	int32_t x200 = -1;
	static volatile uint64_t t39 = 7215211252393361LLU;

	t39 = ((x197+x198)-(x199&x200));

	if (t39 != 18446739506513391965LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x201 = 32U;
	static uint64_t x202 = 1795LLU;
	uint8_t x204 = 3U;
	uint64_t t40 = 340706720219LLU;

	t40 = ((x201+x202)-(x203&x204));

	if (t40 != 1825LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x210 = 31235393777398LL;
	static int16_t x211 = INT16_MIN;
	static int64_t x212 = -1LL;
	int64_t t41 = -4066607787LL;

	t41 = ((x209+x210)-(x211&x212));

	if (t41 != 31235393810161LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x214 = UINT64_MAX;
	volatile uint8_t x215 = UINT8_MAX;
	int32_t x216 = -1;
	volatile uint64_t t42 = 8977938156755LLU;

	t42 = ((x213+x214)-(x215&x216));

	if (t42 != 239534283231LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x217 = 14U;
	uint64_t x219 = 41365513978LLU;
	int16_t x220 = INT16_MIN;
	static volatile uint64_t t43 = 54LLU;

	t43 = ((x217+x218)-(x219&x220));

	if (t43 != 18446744032344080397LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = -1;
	static volatile int16_t x222 = -1;
	int16_t x224 = INT16_MAX;
	static volatile int64_t t44 = -2665418020452781LL;

	t44 = ((x221+x222)-(x223&x224));

	if (t44 != -3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = 79937;
	int64_t x226 = -2232938110905975150LL;
	int32_t x227 = INT32_MIN;
	volatile int8_t x228 = -1;
	int64_t t45 = 1571414104343448585LL;

	t45 = ((x225+x226)-(x227&x228));

	if (t45 != -2232938108758411565LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x230 = INT16_MIN;
	static volatile int64_t x231 = -42819098613542LL;
	int64_t t46 = 559560762108LL;

	t46 = ((x229+x230)-(x231&x232));

	if (t46 != -26939LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x235 = INT8_MAX;
	uint32_t t47 = 366598U;

	t47 = ((x233+x234)-(x235&x236));

	if (t47 != 4294966741U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = INT16_MIN;
	volatile int32_t x238 = 75183;
	volatile int64_t x239 = -153988446LL;
	static volatile int8_t x240 = INT8_MIN;
	int64_t t48 = 30080LL;

	t48 = ((x237+x238)-(x239&x240));

	if (t48 != 154030895LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;

	t49 = ((x245+x246)-(x247&x248));

	if (t49 != 18446744071562067712LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = -1;
	uint8_t x250 = 10U;
	int16_t x252 = -2132;
	volatile uint64_t t50 = 24839001400800938LLU;

	t50 = ((x249+x250)-(x251&x252));

	if (t50 != 2141LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int8_t x254 = -1;
	int8_t x255 = -2;
	int32_t t51 = 1;

	t51 = ((x253+x254)-(x255&x256));

	if (t51 != 33022) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x257 = -1;
	int8_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int64_t t52 = 6481986963919LL;

	t52 = ((x257+x258)-(x259&x260));

	if (t52 != -367556206LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x262 = -8654061;
	int8_t x263 = 26;
	int32_t x264 = 103138;
	int32_t t53 = -756777770;

	t53 = ((x261+x262)-(x263&x264));

	if (t53 != -8654064) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x266 = 37LLU;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;

	t54 = ((x265+x266)-(x267&x268));

	if (t54 != 18446744073709486243LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x269 = -77174827189LL;
	uint32_t x270 = UINT32_MAX;
	volatile uint16_t x271 = UINT16_MAX;
	int64_t x272 = 226726886147372607LL;

	t55 = ((x269+x270)-(x271&x272));

	if (t55 != -72879873781LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x274 = 16;
	static uint64_t x275 = 256522861702628LLU;
	volatile int8_t x276 = INT8_MIN;
	volatile uint64_t t56 = 1898LLU;

	t56 = ((x273+x274)-(x275&x276));

	if (t56 != 18446487550847849103LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 276LLU;
	int16_t x278 = -1343;
	int64_t x279 = INT64_MAX;
	uint32_t x280 = UINT32_MAX;
	uint64_t t57 = 409542468102LLU;

	t57 = ((x277+x278)-(x279&x280));

	if (t57 != 18446744069414583254LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	volatile int64_t x283 = -247487505607901LL;
	static int8_t x284 = INT8_MAX;
	static int64_t t58 = 3008111075897748575LL;

	t58 = ((x281+x282)-(x283&x284));

	if (t58 != -32629LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -1;
	volatile int64_t t59 = -5LL;

	t59 = ((x285+x286)-(x287&x288));

	if (t59 != -9223372030412324865LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x290 = INT8_MAX;
	int32_t x291 = 5716;
	volatile int32_t x292 = INT32_MIN;
	volatile int64_t t60 = -123LL;

	t60 = ((x289+x290)-(x291&x292));

	if (t60 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = -1;
	int64_t x294 = -647LL;
	volatile uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1;
	int64_t t61 = 131420342329011LL;

	t61 = ((x293+x294)-(x295&x296));

	if (t61 != -903LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = -1578;
	int8_t x298 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	uint64_t t62 = 26LLU;

	t62 = ((x297+x298)-(x299&x300));

	if (t62 != 9223372036854774102LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = -2;
	volatile int8_t x303 = INT8_MAX;
	static uint16_t x304 = UINT16_MAX;

	t63 = ((x301+x302)-(x303&x304));

	if (t63 != -32897) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x306 = -1LL;
	uint8_t x307 = 4U;
	int64_t t64 = -1252409334550938LL;

	t64 = ((x305+x306)-(x307&x308));

	if (t64 != 32762LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 0U;
	int8_t x311 = 25;
	int8_t x312 = 0;
	volatile uint32_t t65 = 54057U;

	t65 = ((x309+x310)-(x311&x312));

	if (t65 != 255U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x313 = -2538;
	static uint16_t x314 = UINT16_MAX;
	int16_t x315 = 3974;
	volatile int16_t x316 = -11;
	volatile int32_t t66 = 314392;

	t66 = ((x313+x314)-(x315&x316));

	if (t66 != 59025) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = -41;
	volatile int64_t t67 = 22674593931255251LL;

	t67 = ((x317+x318)-(x319&x320));

	if (t67 != -4295000024LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x321 = 5906U;
	static int32_t x322 = INT32_MAX;
	int16_t x323 = -342;
	uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t68 = 6U;

	t68 = ((x321+x322)-(x323&x324));

	if (t68 != 2147489895U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = UINT16_MAX;
	static volatile int64_t x326 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;
	int64_t t69 = INT64_MIN;

	t69 = ((x325+x326)-(x327&x328));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x330 = 4U;
	uint8_t x331 = 1U;
	int32_t x332 = INT32_MIN;

	t70 = ((x329+x330)-(x331&x332));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = 0U;
	uint8_t x334 = 88U;
	static volatile uint16_t x335 = UINT16_MAX;
	volatile uint16_t x336 = 83U;
	int32_t t71 = 41017;

	t71 = ((x333+x334)-(x335&x336));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x338 = -1LL;
	uint8_t x339 = 21U;
	volatile int64_t x340 = INT64_MIN;
	volatile int64_t t72 = 2804084625316LL;

	t72 = ((x337+x338)-(x339&x340));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x341 = INT8_MAX;
	volatile int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	int64_t t73 = -16714025LL;

	t73 = ((x341+x342)-(x343&x344));

	if (t73 != 32894LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	volatile uint64_t x352 = 1034560LLU;

	t74 = ((x349+x350)-(x351&x352));

	if (t74 != 18446744073708535679LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x354 = 37193343045081015LL;
	int64_t x355 = INT64_MIN;
	volatile int64_t x356 = INT64_MAX;
	static volatile int64_t t75 = -4400452652688151002LL;

	t75 = ((x353+x354)-(x355&x356));

	if (t75 != 37193343045113782LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = 16874U;
	volatile int16_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int64_t x360 = -1LL;
	uint64_t t76 = 11LLU;

	t76 = ((x357+x358)-(x359&x360));

	if (t76 != 16874LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x361 = -1LL;
	int64_t x363 = -1LL;
	int8_t x364 = -1;
	volatile int64_t t77 = -2029LL;

	t77 = ((x361+x362)-(x363&x364));

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x365 = 1;
	int16_t x366 = -287;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t78 = -1;

	t78 = ((x365+x366)-(x367&x368));

	if (t78 != -413) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = 5485627477LLU;
	static volatile uint16_t x371 = 21U;
	volatile uint64_t t79 = 1007401740386906LLU;

	t79 = ((x369+x370)-(x371&x372));

	if (t79 != 5485594688LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x373 = -5;
	int32_t x374 = 14;
	int64_t t80 = -8259555806027LL;

	t80 = ((x373+x374)-(x375&x376));

	if (t80 != 9LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = 20;
	int8_t x378 = INT8_MIN;
	static uint8_t x380 = 0U;
	static volatile int32_t t81 = -152826;

	t81 = ((x377+x378)-(x379&x380));

	if (t81 != -108) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;
	int32_t t82 = -3259;

	t82 = ((x381+x382)-(x383&x384));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MAX;
	static uint64_t x386 = UINT64_MAX;
	int16_t x388 = -1;
	static uint64_t t83 = 5620210976411LLU;

	t83 = ((x385+x386)-(x387&x388));

	if (t83 != 9223372032559808511LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MAX;

	t84 = ((x389+x390)-(x391&x392));

	if (t84 != 1550282866LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x393 = INT16_MAX;
	volatile int8_t x394 = -1;
	volatile int32_t x396 = -2430;
	int32_t t85 = 3;

	t85 = ((x393+x394)-(x395&x396));

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x397 = -2;
	int64_t x398 = 1LL;
	int16_t x399 = INT16_MIN;
	static uint16_t x400 = UINT16_MAX;
	int64_t t86 = 12954710170557LL;

	t86 = ((x397+x398)-(x399&x400));

	if (t86 != -32769LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x401 = 10U;
	static uint32_t x402 = 282U;
	volatile uint64_t x403 = UINT64_MAX;
	int32_t x404 = 0;
	uint64_t t87 = 3LLU;

	t87 = ((x401+x402)-(x403&x404));

	if (t87 != 292LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = 171U;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = -1;
	int32_t x408 = -10468;

	t88 = ((x405+x406)-(x407&x408));

	if (t88 != -22129) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x410 = -1;
	static int32_t x411 = -1;
	static int32_t t89 = -224773216;

	t89 = ((x409+x410)-(x411&x412));

	if (t89 != -510) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = INT64_MAX;
	volatile int16_t x422 = 0;
	int8_t x423 = INT8_MAX;
	uint32_t x424 = UINT32_MAX;

	t90 = ((x421+x422)-(x423&x424));

	if (t90 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = UINT16_MAX;
	int8_t x426 = 17;
	volatile uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t91 = 4LLU;

	t91 = ((x425+x426)-(x427&x428));

	if (t91 != 98320LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x430 = 12957989;
	int64_t x431 = INT64_MIN;
	volatile int64_t t92 = 7791LL;

	t92 = ((x429+x430)-(x431&x432));

	if (t92 != 12957951LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x433 = 3U;
	int16_t x434 = INT16_MIN;
	static int64_t x435 = INT64_MIN;
	static int32_t x436 = -1;
	int64_t t93 = -12986394134309LL;

	t93 = ((x433+x434)-(x435&x436));

	if (t93 != 9223372036854743043LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = 0;
	static int16_t x438 = INT16_MAX;
	uint64_t x439 = 1448265034260LLU;
	uint64_t t94 = 181397329259733565LLU;

	t94 = ((x437+x438)-(x439&x440));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	uint64_t x454 = UINT64_MAX;
	int64_t x456 = -1LL;
	volatile uint64_t t95 = 28607LLU;

	t95 = ((x453+x454)-(x455&x456));

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x458 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;
	uint64_t t96 = 1834171LLU;

	t96 = ((x457+x458)-(x459&x460));

	if (t96 != 9223372036854775678LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x462 = 53947;
	volatile int64_t x463 = INT64_MIN;
	uint16_t x464 = 190U;
	int64_t t97 = 4144067398120748465LL;

	t97 = ((x461+x462)-(x463&x464));

	if (t97 != 53957LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x466 = INT16_MAX;
	static int32_t x467 = -2220;
	uint64_t x468 = 687LLU;
	volatile uint64_t t98 = 232112553397LLU;

	t98 = ((x465+x466)-(x467&x468));

	if (t98 != 218689756584352LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x477 = INT64_MAX;
	static int64_t x479 = 1223884544560LL;
	static uint32_t x480 = UINT32_MAX;

	t99 = ((x477+x478)-(x479&x480));

	if (t99 != 9223372032740943310LL) { NG(); } else { ; }
	
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

