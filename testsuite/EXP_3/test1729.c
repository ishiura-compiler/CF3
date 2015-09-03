#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = 11;
int8_t x9 = -1;
int16_t x12 = INT16_MIN;
static volatile uint64_t t2 = 67335330368328556LLU;
int64_t x16 = -17724217661724696LL;
volatile uint64_t x20 = UINT64_MAX;
int32_t x35 = INT32_MIN;
volatile uint64_t x38 = 588517202399828717LLU;
uint32_t x39 = 114994U;
static uint8_t x44 = UINT8_MAX;
uint64_t t10 = 104742LLU;
uint32_t x46 = 1849U;
static volatile int16_t x48 = INT16_MAX;
static int64_t x54 = -1LL;
uint16_t x56 = UINT16_MAX;
volatile int64_t t15 = 16170476319826883LL;
static uint64_t x69 = 884424609LLU;
static uint16_t x72 = UINT16_MAX;
volatile uint64_t t17 = 1LLU;
int32_t x76 = -1;
uint8_t x98 = UINT8_MAX;
volatile uint32_t x100 = UINT32_MAX;
uint32_t t25 = 2U;
volatile uint8_t x110 = 126U;
static int32_t x117 = -1;
uint16_t x119 = 1U;
int64_t x147 = INT64_MAX;
int8_t x155 = -1;
int8_t x157 = INT8_MIN;
static int16_t x161 = 0;
volatile int8_t x170 = INT8_MIN;
static volatile uint32_t t41 = 10235U;
static volatile int16_t x217 = INT16_MAX;
int8_t x220 = -1;
int64_t x225 = 47476LL;
uint64_t x228 = 967173937419258233LLU;
volatile uint64_t t45 = 21042483LLU;
static uint32_t x243 = 1104814211U;
uint32_t x247 = 2U;
static uint64_t x248 = UINT64_MAX;
static int32_t x259 = INT32_MAX;
uint32_t x261 = 1642500U;
int64_t x264 = INT64_MAX;
int16_t x270 = -1;
uint32_t x275 = UINT32_MAX;
static int8_t x288 = -1;
volatile int64_t t57 = 961984LL;
uint32_t x291 = UINT32_MAX;
int64_t t58 = 55730317138LL;
volatile int64_t t59 = -3024800LL;
int16_t x300 = INT16_MIN;
volatile int64_t x306 = -1LL;
static int8_t x307 = INT8_MIN;
int32_t x320 = -1;
static int16_t x333 = INT16_MIN;
uint32_t x334 = 185U;
volatile uint32_t x335 = 56693150U;
int64_t t67 = -426067010127235LL;
uint8_t x337 = 99U;
int32_t x343 = INT32_MAX;
uint64_t t69 = 196872624705010963LLU;
volatile int64_t x354 = -1LL;
int16_t x357 = 0;
int8_t x369 = -1;
int8_t x370 = INT8_MIN;
uint64_t x373 = 23560716LLU;
int8_t x374 = -1;
int16_t x378 = INT16_MAX;
static int8_t x379 = INT8_MIN;
int16_t x393 = -1;
int64_t x399 = INT64_MIN;
uint32_t x401 = 2700145U;
uint16_t x402 = 1457U;
static uint32_t x404 = 10323U;
int16_t x408 = INT16_MAX;
int64_t t80 = 64879774058LL;
static uint8_t x417 = 10U;
static uint32_t x419 = UINT32_MAX;
static uint8_t x423 = 31U;
int32_t x424 = 134525;
volatile uint32_t t82 = 144U;
int8_t x425 = INT8_MIN;
volatile int32_t t83 = -31;
int16_t x434 = INT16_MAX;
static int64_t x438 = 431LL;
static int64_t x440 = INT64_MIN;
uint8_t x449 = 14U;
int8_t x452 = 0;
uint16_t x472 = 108U;
static volatile int8_t x491 = INT8_MIN;
volatile uint16_t x495 = 686U;
volatile int64_t t92 = 926169731060036080LL;
volatile int64_t x508 = INT64_MIN;
volatile int8_t x510 = -22;
volatile int32_t x512 = INT32_MIN;
volatile int32_t t94 = 23970;
static volatile uint64_t x525 = 29094242LLU;
static volatile int32_t x535 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 28372LL;

	t0 = ((x1*x2)^(x3&x4));

	if (t0 != -9223372036854759680LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -8;

	t1 = ((x5*x6)^(x7&x8));

	if (t1 != 32757) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile uint64_t x11 = 51649LLU;

	t2 = ((x9*x10)^(x11&x12));

	if (t2 != 32769LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2940U;
	int16_t x14 = 5738;
	static uint16_t x15 = 6068U;
	int64_t t3 = -33LL;

	t3 = ((x13*x14)^(x15&x16));

	if (t3 != 16871160LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 9U;
	volatile uint8_t x18 = 40U;
	int32_t x19 = INT32_MIN;
	volatile uint64_t t4 = 1LLU;

	t4 = ((x17*x18)^(x19&x20));

	if (t4 != 18446744071562068328LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = 104924974415936LLU;
	volatile int16_t x23 = -1;
	volatile uint32_t x24 = UINT32_MAX;
	static volatile uint64_t t5 = 4393715360568LLU;

	t5 = ((x21*x22)^(x23&x24));

	if (t5 != 4294967295LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	static uint16_t x26 = 6U;
	uint32_t x27 = 1U;
	int32_t x28 = 28770855;
	static uint32_t t6 = 12181726U;

	t6 = ((x25*x26)^(x27&x28));

	if (t6 != 393211U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	static int8_t x31 = -26;
	int64_t x32 = -94LL;
	uint64_t t7 = 7447018037558232088LLU;

	t7 = ((x29*x30)^(x31&x32));

	if (t7 != 9223372036854775714LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x34 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 699;

	t8 = ((x33*x34)^(x35&x36));

	if (t8 != 2139095168) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 92U;
	int8_t x40 = -1;
	volatile uint64_t t9 = 1253999301444658LLU;

	t9 = ((x37*x38)^(x39&x40));

	if (t9 != 17250094473365056542LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 217947LLU;
	int16_t x42 = 6611;
	uint64_t x43 = 11LLU;

	t10 = ((x41*x42)^(x43&x44));

	if (t10 != 1440847626LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	volatile uint64_t x47 = UINT64_MAX;
	volatile uint64_t t11 = 8002493630LLU;

	t11 = ((x45*x46)^(x47&x48));

	if (t11 != 121145144LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	static int64_t x50 = -1686062538LL;
	int8_t x51 = INT8_MIN;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int64_t t12 = 6191311487316LL;

	t12 = ((x49*x50)^(x51&x52));

	if (t12 != 4294967168LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile int8_t x55 = 1;
	static int64_t t13 = INT64_MIN;

	t13 = ((x53*x54)^(x55&x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 13;
	int16_t x58 = INT16_MAX;
	int32_t x59 = 948166;
	int64_t x60 = 397167050LL;
	volatile int64_t t14 = 64833LL;

	t14 = ((x57*x58)^(x59&x60));

	if (t14 != 671281LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = -131201LL;
	int64_t x63 = 29406816465LL;
	static int32_t x64 = INT32_MAX;

	t15 = ((x61*x62)^(x63&x64));

	if (t15 != -1496770736LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 475547861311777992LLU;
	int64_t x66 = -68687LL;
	uint64_t x67 = UINT64_MAX;
	static uint32_t x68 = 6938U;
	static volatile uint64_t t16 = 2875253LLU;

	t16 = ((x65*x66)^(x67&x68));

	if (t16 != 5227804617520977234LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 6;
	int8_t x71 = -45;

	t17 = ((x69*x70)^(x71&x72));

	if (t17 != 5306548757LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 175260U;
	uint64_t x74 = UINT64_MAX;
	uint32_t x75 = UINT32_MAX;
	uint64_t t18 = 3856LLU;

	t18 = ((x73*x74)^(x75&x76));

	if (t18 != 18446744069414759579LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -351469355246368702LL;
	static volatile int64_t t19 = 402LL;

	t19 = ((x77*x78)^(x79&x80));

	if (t19 != -351469355246368768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	static volatile int64_t x82 = -1LL;
	uint32_t x83 = 976252U;
	uint16_t x84 = UINT16_MAX;
	int64_t t20 = 3627714569179LL;

	t20 = ((x81*x82)^(x83&x84));

	if (t20 != -39555LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = INT32_MIN;
	volatile uint32_t x86 = 12380U;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	int64_t t21 = -40463LL;

	t21 = ((x85*x86)^(x87&x88));

	if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static uint32_t x90 = 1U;
	volatile int64_t x91 = INT64_MIN;
	uint16_t x92 = 7U;
	volatile int64_t t22 = 1324499LL;

	t22 = ((x89*x90)^(x91&x92));

	if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 1422609945LLU;
	uint64_t x99 = 11389937492873LLU;
	static volatile uint64_t t23 = 2531091102331268LLU;

	t23 = ((x97*x98)^(x99&x100));

	if (t23 != 363389217134LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 3U;
	volatile uint64_t x102 = 10015LLU;
	int8_t x103 = -1;
	int64_t x104 = -1LL;
	volatile uint64_t t24 = 7353664854LLU;

	t24 = ((x101*x102)^(x103&x104));

	if (t24 != 18446744073709521570LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = -1;
	int16_t x106 = -1;
	static uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;

	t25 = ((x105*x106)^(x107&x108));

	if (t25 != 65534U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x109 = 1809U;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 124LLU;

	t26 = ((x109*x110)^(x111&x112));

	if (t26 != 18446744071562295902LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 4;
	volatile int64_t x120 = -1LL;
	volatile int64_t t27 = 112478826826503993LL;

	t27 = ((x117*x118)^(x119&x120));

	if (t27 != -3LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = 1259058496U;
	static int32_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	static uint32_t t28 = 0U;

	t28 = ((x121*x122)^(x123&x124));

	if (t28 != 2245697408U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -1LL;
	volatile int16_t x126 = -1;
	uint8_t x127 = 42U;
	int64_t x128 = -1LL;
	volatile int64_t t29 = -1017653569141802LL;

	t29 = ((x125*x126)^(x127&x128));

	if (t29 != 43LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 48840711741LLU;
	volatile int64_t x134 = 42LL;
	uint16_t x135 = 0U;
	int32_t x136 = INT32_MIN;
	uint64_t t30 = 2581036LLU;

	t30 = ((x133*x134)^(x135&x136));

	if (t30 != 2051309893122LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 22128U;
	volatile uint64_t x146 = 187554522548646918LLU;
	uint64_t x148 = UINT64_MAX;
	uint64_t t31 = 128685353LLU;

	t31 = ((x145*x146)^(x147&x148));

	if (t31 != 9534313665044887903LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 2543114LLU;
	int16_t x154 = INT16_MAX;
	static int8_t x156 = -13;
	uint64_t t32 = 124LLU;

	t32 = ((x153*x154)^(x155&x156));

	if (t32 != 18446743990379335173LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x158 = -709;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 3U;
	static volatile int32_t t33 = -16;

	t33 = ((x157*x158)^(x159&x160));

	if (t33 != 90752) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x162 = INT32_MIN;
	static uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 4U;
	static volatile int32_t t34 = -80689;

	t34 = ((x161*x162)^(x163&x164));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x169 = INT16_MIN;
	static uint16_t x171 = UINT16_MAX;
	static int64_t x172 = INT64_MIN;
	int64_t t35 = -24632735LL;

	t35 = ((x169*x170)^(x171&x172));

	if (t35 != 4194304LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = -5;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 1938U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t36 = 117U;

	t36 = ((x173*x174)^(x175&x176));

	if (t36 != 4294805399U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = 0;
	int64_t t37 = -2LL;

	t37 = ((x177*x178)^(x179&x180));

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 181U;
	uint64_t x182 = 13275291142LLU;
	uint8_t x183 = 44U;
	uint32_t x184 = 1519U;
	uint64_t t38 = 7092716635545999058LLU;

	t38 = ((x181*x182)^(x183&x184));

	if (t38 != 2402827696658LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x189 = INT16_MAX;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 57U;
	int32_t t39 = -2382;

	t39 = ((x189*x190)^(x191&x192));

	if (t39 != 8355640) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MIN;
	volatile uint16_t x198 = 597U;
	int8_t x199 = INT8_MAX;
	volatile int64_t x200 = -1LL;
	volatile int64_t t40 = -2087180LL;

	t40 = ((x197*x198)^(x199&x200));

	if (t40 != -76289LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	volatile int32_t x203 = 244;
	uint32_t x204 = UINT32_MAX;

	t41 = ((x201*x202)^(x203&x204));

	if (t41 != 4294951028U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = -1LL;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	int64_t t42 = -1796550090LL;

	t42 = ((x209*x210)^(x211&x212));

	if (t42 != -4294967170LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x213 = 13U;
	uint8_t x214 = 17U;
	int8_t x215 = 1;
	uint64_t x216 = 14610683497486LLU;
	uint64_t t43 = 54895713LLU;

	t43 = ((x213*x214)^(x215&x216));

	if (t43 != 221LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x218 = UINT32_MAX;
	volatile int16_t x219 = -113;
	static volatile uint32_t t44 = 1656887U;

	t44 = ((x217*x218)^(x219&x220));

	if (t44 != 32654U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = -208315;

	t45 = ((x225*x226)^(x227&x228));

	if (t45 != 17479513402989871169LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MIN;
	uint64_t t46 = 311165LLU;

	t46 = ((x233*x234)^(x235&x236));

	if (t46 != 9223372039002259329LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = -1290;
	uint32_t x242 = 23U;
	int8_t x244 = 0;
	static volatile uint32_t t47 = 54676603U;

	t47 = ((x241*x242)^(x243&x244));

	if (t47 != 4294937626U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x245 = 21LL;
	static volatile int16_t x246 = -1;
	volatile uint64_t t48 = 115512358998178LLU;

	t48 = ((x245*x246)^(x247&x248));

	if (t48 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = -1LL;
	int8_t x250 = -1;
	static int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	int64_t t49 = -13901000635772382LL;

	t49 = ((x249*x250)^(x251&x252));

	if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x257 = 761;
	uint8_t x258 = UINT8_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t50 = -2756428627524692LL;

	t50 = ((x257*x258)^(x259&x260));

	if (t50 != 2147289592LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int64_t t51 = 6574254936273634LL;

	t51 = ((x261*x262)^(x263&x264));

	if (t51 != 4293324796LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x265 = 30U;
	uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	volatile int32_t t52 = -45;

	t52 = ((x265*x266)^(x267&x268));

	if (t52 != -2145517598) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MIN;
	static volatile int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t53 = -4010;

	t53 = ((x269*x270)^(x271&x272));

	if (t53 != -2147450880) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 57466479LLU;
	static int8_t x274 = -1;
	int64_t x276 = -184918425739LL;
	uint64_t t54 = 494LLU;

	t54 = ((x273*x274)^(x275&x276));

	if (t54 != 18446744069659139812LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x277 = 48677LL;
	uint32_t x278 = 248637U;
	uint16_t x279 = 20U;
	volatile int64_t x280 = INT64_MIN;
	volatile int64_t t55 = -3570861170777142624LL;

	t55 = ((x277*x278)^(x279&x280));

	if (t55 != 12102903249LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -626485705190105LL;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	static int64_t t56 = -15632943LL;

	t56 = ((x281*x282)^(x283&x284));

	if (t56 != 80190168116849792LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x285 = -1LL;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 18783U;

	t57 = ((x285*x286)^(x287&x288));

	if (t57 != 51551LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x289 = UINT8_MAX;
	static volatile int64_t x290 = 3LL;
	static int8_t x292 = INT8_MIN;

	t58 = ((x289*x290)^(x291&x292));

	if (t58 != 4294966653LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = 3;
	volatile uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MIN;
	volatile int32_t x296 = INT32_MAX;

	t59 = ((x293*x294)^(x295&x296));

	if (t59 != 4294967293LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -4;
	int16_t x298 = 200;
	volatile uint32_t x299 = 567335001U;
	volatile uint32_t t60 = 948597U;

	t60 = ((x297*x298)^(x299&x300));

	if (t60 != 3727654112U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x305 = INT64_MAX;
	int8_t x308 = -1;
	volatile int64_t t61 = -327067509817825257LL;

	t61 = ((x305*x306)^(x307&x308));

	if (t61 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x309 = 5244243LLU;
	int16_t x310 = -9;
	int16_t x311 = -1;
	int32_t x312 = -1;
	volatile uint64_t t62 = 103652116LLU;

	t62 = ((x309*x310)^(x311&x312));

	if (t62 != 47198186LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x313 = 803U;
	volatile int8_t x314 = INT8_MIN;
	static int8_t x315 = INT8_MIN;
	static volatile uint16_t x316 = UINT16_MAX;
	static volatile uint32_t t63 = 25U;

	t63 = ((x313*x314)^(x315&x316));

	if (t63 != 4294873344U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = UINT8_MAX;
	uint32_t t64 = 2043388U;

	t64 = ((x317*x318)^(x319&x320));

	if (t64 != 2147483902U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = 880;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = -202512;
	int32_t x324 = -5761;
	uint64_t t65 = 105986659038983532LLU;

	t65 = ((x321*x322)^(x323&x324));

	if (t65 != 201952LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x325 = 751254061U;
	volatile int16_t x326 = -1;
	static uint16_t x327 = UINT16_MAX;
	static int64_t x328 = INT64_MIN;
	int64_t t66 = 1399LL;

	t66 = ((x325*x326)^(x327&x328));

	if (t66 != 3543713235LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x336 = 62755860LL;

	t67 = ((x333*x334)^(x335&x336));

	if (t67 != 4236414996LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x338 = UINT16_MAX;
	static int8_t x339 = 0;
	int32_t x340 = INT32_MIN;
	volatile int32_t t68 = 12116;

	t68 = ((x337*x338)^(x339&x340));

	if (t68 != 6487965) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = 45;
	static int16_t x342 = -8;
	uint64_t x344 = 184717276056512697LLU;

	t69 = ((x341*x342)^(x343&x344));

	if (t69 != 18446744072514573857LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x353 = 5495U;
	uint32_t x355 = 233U;
	uint8_t x356 = 1U;
	volatile int64_t t70 = -36733255LL;

	t70 = ((x353*x354)^(x355&x356));

	if (t70 != -5496LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x358 = 2;
	int8_t x359 = INT8_MIN;
	static volatile uint32_t x360 = 1237U;
	static volatile uint32_t t71 = 177U;

	t71 = ((x357*x358)^(x359&x360));

	if (t71 != 1152U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t72 = 3421;

	t72 = ((x369*x370)^(x371&x372));

	if (t72 != -2147483520) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 21615U;
	volatile uint64_t t73 = 7980175939979426558LLU;

	t73 = ((x373*x374)^(x375&x376));

	if (t73 != 18446744073685969396LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x377 = 16U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t74 = -7;

	t74 = ((x377*x378)^(x379&x380));

	if (t74 != -491536) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x381 = INT16_MIN;
	static int32_t x382 = -133;
	int8_t x383 = INT8_MIN;
	static int16_t x384 = 1;
	volatile int32_t t75 = -8431459;

	t75 = ((x381*x382)^(x383&x384));

	if (t75 != 4358144) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x394 = 9U;
	volatile int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t76 = 34064831909LLU;

	t76 = ((x393*x394)^(x395&x396));

	if (t76 != 119LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = 237U;
	uint64_t x398 = 6065624LLU;
	volatile uint32_t x400 = 14U;
	static volatile uint64_t t77 = 341157040637244184LLU;

	t77 = ((x397*x398)^(x399&x400));

	if (t77 != 1437552888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x403 = 5U;
	uint32_t t78 = 115U;

	t78 = ((x401*x402)^(x403&x404));

	if (t78 != 3934111264U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = 885;
	uint32_t x406 = 239427137U;
	uint8_t x407 = 49U;
	uint32_t t79 = 12858U;

	t79 = ((x405*x406)^(x407&x408));

	if (t79 != 1439618692U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x409 = UINT16_MAX;
	int32_t x410 = 3;
	int16_t x411 = INT16_MAX;
	volatile int64_t x412 = 0LL;

	t80 = ((x409*x410)^(x411&x412));

	if (t80 != 196605LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x418 = 4985U;
	static int64_t x420 = -16143444LL;
	int64_t t81 = 1057170962032371429LL;

	t81 = ((x417*x418)^(x419&x420));

	if (t81 != 4278806806LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x421 = 2983U;
	int8_t x422 = -1;

	t82 = ((x421*x422)^(x423&x424));

	if (t82 != 4294964292U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x426 = UINT8_MAX;
	int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;

	t83 = ((x425*x426)^(x427&x428));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x433 = 14U;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 40U;
	uint32_t t84 = 5828808U;

	t84 = ((x433*x434)^(x435&x436));

	if (t84 != 458738U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x437 = UINT32_MAX;
	static int64_t x439 = INT64_MAX;
	volatile int64_t t85 = 363567239LL;

	t85 = ((x437*x438)^(x439&x440));

	if (t85 != 1851130904145LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x445 = INT8_MAX;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	uint16_t x448 = 0U;
	static int32_t t86 = 124356;

	t86 = ((x445*x446)^(x447&x448));

	if (t86 != -16256) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x450 = 0;
	int16_t x451 = -3595;
	int32_t t87 = -15760661;

	t87 = ((x449*x450)^(x451&x452));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x457 = -1;
	uint64_t x458 = 10314693846LLU;
	int64_t x459 = -1LL;
	static uint8_t x460 = UINT8_MAX;
	uint64_t t88 = 2002939069259LLU;

	t88 = ((x457*x458)^(x459&x460));

	if (t88 != 18446744063394857941LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x469 = -1LL;
	int64_t x470 = -5826545228846398LL;
	int16_t x471 = -10993;
	volatile int64_t t89 = -521861LL;

	t89 = ((x469*x470)^(x471&x472));

	if (t89 != 5826545228846386LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x485 = 30221U;
	int8_t x486 = 1;
	uint64_t x487 = 7093249LLU;
	volatile int64_t x488 = -446452LL;
	static volatile uint64_t t90 = 11151123886264LLU;

	t90 = ((x485*x486)^(x487&x488));

	if (t90 != 6833677LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x489 = -1LL;
	int16_t x490 = INT16_MAX;
	uint8_t x492 = UINT8_MAX;
	static int64_t t91 = -423LL;

	t91 = ((x489*x490)^(x491&x492));

	if (t91 != -32639LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x493 = 23799LL;
	int8_t x494 = INT8_MAX;
	volatile uint8_t x496 = 100U;

	t92 = ((x493*x494)^(x495&x496));

	if (t92 != 3022509LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = INT16_MIN;
	static int8_t x506 = INT8_MIN;
	volatile int8_t x507 = INT8_MAX;
	volatile int64_t t93 = -14726LL;

	t93 = ((x505*x506)^(x507&x508));

	if (t93 != 4194304LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x509 = UINT16_MAX;
	uint16_t x511 = 1904U;

	t94 = ((x509*x510)^(x511&x512));

	if (t94 != -1441770) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x517 = -92;
	int64_t x518 = -1LL;
	static uint16_t x519 = UINT16_MAX;
	int8_t x520 = INT8_MIN;
	static volatile int64_t t95 = 1799LL;

	t95 = ((x517*x518)^(x519&x520));

	if (t95 != 65500LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	uint8_t x523 = UINT8_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile uint32_t t96 = 2U;

	t96 = ((x521*x522)^(x523&x524));

	if (t96 != 33023U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x526 = -536240886115012496LL;
	int64_t x527 = 72779732147160LL;
	static uint32_t x528 = 122902751U;
	uint64_t t97 = 10230LLU;

	t97 = ((x525*x526)^(x527&x528));

	if (t97 != 14603600050660123192LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x529 = -1;
	volatile int32_t x530 = -1;
	int8_t x531 = INT8_MIN;
	int8_t x532 = INT8_MAX;
	int32_t t98 = 25728;

	t98 = ((x529*x530)^(x531&x532));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = 115;
	volatile uint32_t x534 = 649866394U;
	uint16_t x536 = 13U;
	volatile uint32_t t99 = 32723475U;

	t99 = ((x533*x534)^(x535&x536));

	if (t99 != 1720191267U) { NG(); } else { ; }
	
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

