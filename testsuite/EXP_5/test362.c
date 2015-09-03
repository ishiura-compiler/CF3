#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x7 = UINT8_MAX;
static int8_t x11 = 32;
int64_t t1 = 1419540LL;
int32_t x30 = 3;
int8_t x31 = INT8_MIN;
volatile uint32_t t6 = 2249568U;
uint32_t x56 = 4067748U;
volatile uint32_t t8 = 1573166U;
static int16_t x65 = -12899;
int16_t x71 = INT16_MIN;
volatile int64_t x79 = INT64_MAX;
int8_t x82 = INT8_MAX;
int16_t x88 = -1;
volatile uint8_t x90 = UINT8_MAX;
static int16_t x91 = INT16_MIN;
int64_t x93 = INT64_MIN;
volatile uint64_t x98 = 121139LLU;
uint64_t t16 = 8768548031439015894LLU;
volatile int8_t x110 = INT8_MIN;
uint64_t x112 = 4574568LLU;
volatile uint64_t t19 = 39797798574341539LLU;
static uint16_t x146 = UINT16_MAX;
volatile int64_t t22 = -173180329781224118LL;
uint64_t t23 = 0LLU;
volatile int16_t x161 = INT16_MAX;
volatile int64_t x179 = -370487928995LL;
static int32_t x182 = INT32_MIN;
uint8_t x189 = 20U;
int32_t x190 = -1;
uint32_t x195 = 1965020U;
int64_t x200 = INT64_MIN;
volatile uint64_t x210 = 3571925635LLU;
static volatile uint64_t t32 = 2440896391151997052LLU;
static int8_t x215 = 4;
volatile int32_t t34 = -725230950;
uint32_t x221 = UINT32_MAX;
static int16_t x227 = 35;
static int16_t x228 = INT16_MAX;
static uint16_t x232 = UINT16_MAX;
static uint16_t x240 = 2496U;
volatile uint8_t x248 = UINT8_MAX;
int64_t t40 = -7539148LL;
int16_t x251 = INT16_MIN;
int16_t x268 = INT16_MIN;
static int32_t x278 = -1;
volatile int32_t x280 = INT32_MIN;
int32_t x285 = INT32_MIN;
static int8_t x286 = INT8_MIN;
static volatile int16_t x288 = INT16_MIN;
int64_t x291 = -1LL;
int8_t x292 = INT8_MIN;
int16_t x297 = INT16_MIN;
uint16_t x302 = 213U;
int32_t x305 = -1;
uint32_t t51 = 2740U;
uint8_t x318 = UINT8_MAX;
int8_t x327 = INT8_MIN;
uint8_t x328 = UINT8_MAX;
static uint16_t x344 = 25U;
uint32_t x346 = UINT32_MAX;
uint16_t x347 = 35U;
static uint64_t t56 = 443946LLU;
static int16_t x355 = INT16_MIN;
uint64_t x367 = 1376421529030441638LLU;
volatile uint64_t t58 = 2963037LLU;
int32_t x370 = INT32_MIN;
volatile int16_t x373 = -1;
int32_t x375 = 666507505;
volatile int32_t t60 = 13724;
uint32_t x377 = 433110598U;
int16_t x380 = INT16_MIN;
int32_t x384 = 447;
uint32_t x391 = 27127560U;
int8_t x394 = 15;
int16_t x395 = 11086;
static uint32_t x410 = 10524U;
uint64_t t68 = 3273876795734858LLU;
volatile int32_t t69 = INT32_MIN;
uint8_t x418 = 75U;
static int64_t x419 = -934756LL;
int8_t x424 = INT8_MIN;
uint32_t x429 = 6825U;
int8_t x432 = 5;
int8_t x434 = 2;
int64_t x435 = -1LL;
uint16_t x439 = UINT16_MAX;
int8_t x440 = INT8_MAX;
static volatile uint16_t x451 = 46U;
volatile int16_t x467 = INT16_MIN;
volatile uint64_t x469 = 3748720101760954195LLU;
uint32_t x477 = UINT32_MAX;
volatile uint16_t x480 = 1322U;
volatile int8_t x490 = 6;
int8_t x492 = INT8_MIN;
static uint32_t x496 = 2060513U;
int16_t x501 = -1;
volatile int64_t t86 = -5797LL;
int32_t x518 = 15774463;
static int64_t t88 = 6LL;
static volatile uint32_t x526 = 15850U;
static int64_t x530 = -1LL;
uint32_t x531 = 282U;
static uint16_t x533 = UINT16_MAX;
int16_t x539 = 0;
static int64_t x542 = -1LL;
volatile int64_t t94 = -4344527080983610LL;
volatile uint32_t x546 = UINT32_MAX;
uint32_t t95 = 733U;
static int32_t x568 = -1;
volatile int64_t t98 = 4147778037951530837LL;
uint32_t x588 = UINT32_MAX;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t0 = 1841U;

	t0 = (x5&((x6*x7)-x8));

	if (t0 != 4294934657U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MIN;
	uint32_t x10 = 13U;
	volatile uint32_t x12 = 48U;

	t1 = (x9&((x10*x11)-x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 62;
	uint16_t x19 = UINT16_MAX;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t2 = -26431145;

	t2 = (x17&((x18*x19)-x20));

	if (t2 != 4063232) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 14U;
	uint8_t x22 = 58U;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 7U;
	int32_t t3 = 8455;

	t3 = (x21&((x22*x23)-x24));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = INT64_MAX;
	int8_t x32 = 0;
	static volatile int64_t t4 = 11623935091095871LL;

	t4 = (x29&((x30*x31)-x32));

	if (t4 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MAX;
	uint64_t x38 = 7254LLU;
	uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = -5;
	uint64_t t5 = 4541061050830199LLU;

	t5 = (x37&((x38*x39)-x40));

	if (t5 != 9223372036854768559LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 31779514U;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = 7;
	uint16_t x48 = UINT16_MAX;

	t6 = (x45&((x46*x47)-x48));

	if (t6 != 31779514U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = -496381839493LL;
	static volatile int64_t x54 = INT64_MIN;
	volatile uint64_t x55 = 13082LLU;
	uint64_t t7 = 414515700031611LLU;

	t7 = (x53&((x54*x55)-x56));

	if (t7 != 18446743577326265944LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = 32;
	uint32_t x58 = UINT32_MAX;
	static int32_t x59 = INT32_MIN;
	volatile int32_t x60 = 746624233;

	t8 = (x57&((x58*x59)-x60));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x66 = 1U;
	int8_t x67 = 2;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t9 = 457481791U;

	t9 = (x65&((x66*x67)-x68));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MAX;
	static volatile uint16_t x70 = 4U;
	uint8_t x72 = 3U;
	volatile int32_t t10 = 789431882;

	t10 = (x69&((x70*x71)-x72));

	if (t10 != 2147352573) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = 402LLU;
	int64_t x80 = -1LL;
	uint64_t t11 = 809LLU;

	t11 = (x77&((x78*x79)-x80));

	if (t11 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 29940890LLU;
	volatile uint64_t t12 = 211LLU;

	t12 = (x81&((x82*x83)-x84));

	if (t12 != 18446744073687933568LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = -1;
	uint16_t x86 = 4015U;
	static int8_t x87 = INT8_MIN;
	int32_t t13 = 105;

	t13 = (x85&((x86*x87)-x88));

	if (t13 != -513919) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = INT32_MIN;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x89&((x90*x91)-x92));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x94 = INT8_MIN;
	int16_t x95 = 12552;
	static int8_t x96 = INT8_MAX;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x93&((x94*x95)-x96));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x97 = -5798;
	uint32_t x99 = 20U;
	static uint32_t x100 = 2U;

	t16 = (x97&((x98*x99)-x100));

	if (t16 != 2416986LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 5493743183944LLU;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = -30155422LL;
	int32_t x104 = INT32_MIN;
	uint64_t t17 = 849863066LLU;

	t17 = (x101&((x102*x103)-x104));

	if (t17 != 988111699968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = -1;
	volatile int8_t x111 = INT8_MIN;
	uint64_t t18 = 88349824968632LLU;

	t18 = (x109&((x110*x111)-x112));

	if (t18 != 18446744073704993432LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = -1;
	volatile uint64_t x122 = UINT64_MAX;
	uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 30093U;

	t19 = (x121&((x122*x123)-x124));

	if (t19 != 18446744073709521268LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MAX;
	static int64_t x130 = -1LL;
	int8_t x131 = 2;
	volatile int8_t x132 = INT8_MIN;
	volatile int64_t t20 = -43542860LL;

	t20 = (x129&((x130*x131)-x132));

	if (t20 != 126LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x145 = INT16_MAX;
	static volatile uint64_t x147 = 1LLU;
	static int32_t x148 = INT32_MAX;
	volatile uint64_t t21 = 17480LLU;

	t21 = (x145&((x146*x147)-x148));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x153 = -1167;
	volatile int64_t x154 = 2677536855LL;
	int32_t x155 = -525208;
	int32_t x156 = INT32_MIN;

	t22 = (x153&((x154*x155)-x156));

	if (t22 != -1406261629058224LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x157 = 1826892LLU;
	volatile uint64_t x158 = 28149489457430LLU;
	int16_t x159 = INT16_MAX;
	int64_t x160 = INT64_MAX;

	t23 = (x157&((x158*x159)-x160));

	if (t23 != 1646664LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x162 = -1;
	uint64_t x163 = 1171317256551246LLU;
	int16_t x164 = -26;
	static volatile uint64_t t24 = 4504991365932035281LLU;

	t24 = (x161&((x162*x163)-x164));

	if (t24 != 1228LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x169 = INT64_MAX;
	static uint32_t x170 = 1U;
	uint8_t x171 = 0U;
	uint32_t x172 = 4U;
	volatile int64_t t25 = 2624LL;

	t25 = (x169&((x170*x171)-x172));

	if (t25 != 4294967292LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	int16_t x180 = -8;
	static volatile int64_t t26 = 3438872LL;

	t26 = (x177&((x178*x179)-x180));

	if (t26 != 369367187456LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x181 = -9246837699LL;
	uint32_t x183 = 476895U;
	volatile int32_t x184 = -7207;
	int64_t t27 = 5217305463298LL;

	t27 = (x181&((x182*x183)-x184));

	if (t27 != 2147488805LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x191 = 47989;
	int8_t x192 = INT8_MIN;
	int32_t t28 = 639;

	t28 = (x189&((x190*x191)-x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x193 = 8495;
	uint16_t x194 = UINT16_MAX;
	static int64_t x196 = 28603800452214294LL;
	static volatile int64_t t29 = -150581510LL;

	t29 = (x193&((x194*x195)-x196));

	if (t29 != 14LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x197 = -1;
	int8_t x198 = -1;
	volatile uint64_t x199 = 21949388438257645LLU;
	uint64_t t30 = 44577278715662LLU;

	t30 = (x197&((x198*x199)-x200));

	if (t30 != 9201422648416518163LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x201 = INT64_MIN;
	int32_t x202 = -1;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t31 = -5052900620762LL;

	t31 = (x201&((x202*x203)-x204));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x209 = -1LL;
	int64_t x211 = INT64_MIN;
	int64_t x212 = -1LL;

	t32 = (x209&((x210*x211)-x212));

	if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	int64_t t33 = INT64_MIN;

	t33 = (x213&((x214*x215)-x216));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x217 = INT16_MIN;
	int16_t x218 = -887;
	volatile int16_t x219 = -1;
	int8_t x220 = 1;

	t34 = (x217&((x218*x219)-x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x222 = 16LLU;
	uint16_t x223 = UINT16_MAX;
	uint64_t x224 = 2599LLU;
	volatile uint64_t t35 = 455630504561849LLU;

	t35 = (x221&((x222*x223)-x224));

	if (t35 != 1045961LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x225 = 29367;
	int8_t x226 = INT8_MIN;
	static int32_t t36 = 1868;

	t36 = (x225&((x226*x227)-x228));

	if (t36 != 25217) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x229 = -11861414886175854LL;
	int16_t x230 = -12572;
	static int16_t x231 = 3147;
	int64_t t37 = -10827804974266332LL;

	t37 = (x229&((x230*x231)-x232));

	if (t37 != -11861414920517504LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x237 = INT16_MAX;
	int16_t x238 = -1845;
	volatile int64_t x239 = -1LL;
	volatile int64_t t38 = -2418989818039602LL;

	t38 = (x237&((x238*x239)-x240));

	if (t38 != 32117LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x241 = 1;
	static uint64_t x242 = 400291691157419LLU;
	int16_t x243 = -1;
	uint8_t x244 = 0U;
	volatile uint64_t t39 = 3674687135773579473LLU;

	t39 = (x241&((x242*x243)-x244));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x245 = -16;
	static int64_t x246 = -234LL;
	int16_t x247 = INT16_MIN;

	t40 = (x245&((x246*x247)-x248));

	if (t40 != 7667456LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x249 = 3;
	volatile int8_t x250 = -13;
	int64_t x252 = -13650831542792LL;
	int64_t t41 = -243176732LL;

	t41 = (x249&((x250*x251)-x252));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 12U;
	uint64_t t42 = 8660239619602481809LLU;

	t42 = (x265&((x266*x267)-x268));

	if (t42 != 32756LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x273 = 1U;
	int8_t x274 = INT8_MIN;
	volatile int16_t x275 = INT16_MIN;
	uint8_t x276 = 0U;
	static int32_t t43 = 1059;

	t43 = (x273&((x274*x275)-x276));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x277 = -1;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t t44 = -1;

	t44 = (x277&((x278*x279)-x280));

	if (t44 != 2147483393) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x281 = INT8_MIN;
	volatile uint32_t x282 = UINT32_MAX;
	static uint64_t x283 = UINT64_MAX;
	uint32_t x284 = UINT32_MAX;
	uint64_t t45 = 12589722902909LLU;

	t45 = (x281&((x282*x283)-x284));

	if (t45 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x287 = -1;
	volatile int32_t t46 = 26004;

	t46 = (x285&((x286*x287)-x288));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x289 = 2449;
	uint8_t x290 = 0U;
	volatile int64_t t47 = 340310076LL;

	t47 = (x289&((x290*x291)-x292));

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x293 = -1;
	int32_t x294 = 8934070;
	int8_t x295 = INT8_MAX;
	volatile uint8_t x296 = 3U;
	int32_t t48 = 3402234;

	t48 = (x293&((x294*x295)-x296));

	if (t48 != 1134626887) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x298 = -1LL;
	int64_t x299 = 1LL;
	int32_t x300 = 0;
	int64_t t49 = -14LL;

	t49 = (x297&((x298*x299)-x300));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x301 = 1595643U;
	uint32_t x303 = 307U;
	int16_t x304 = 3;
	uint32_t t50 = 12033006U;

	t50 = (x301&((x302*x303)-x304));

	if (t50 != 22632U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x306 = 4U;
	uint8_t x307 = UINT8_MAX;
	uint32_t x308 = 922775706U;

	t51 = (x305&((x306*x307)-x308));

	if (t51 != 3372192610U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile uint64_t x314 = 1778066397LLU;
	static int64_t x315 = INT64_MIN;
	volatile int64_t x316 = -416423878LL;
	volatile uint64_t t52 = 2LLU;

	t52 = (x313&((x314*x315)-x316));

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x317 = 59U;
	static uint64_t x319 = 1253631994173832LLU;
	int8_t x320 = -1;
	uint64_t t53 = 439056LLU;

	t53 = (x317&((x318*x319)-x320));

	if (t53 != 57LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x325 = 288217547219909712LL;
	int16_t x326 = INT16_MIN;
	int64_t t54 = 58466LL;

	t54 = (x325&((x326*x327)-x328));

	if (t54 != 1293312LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x341 = -976449133814312975LL;
	uint32_t x342 = 7104811U;
	volatile uint8_t x343 = UINT8_MAX;
	int64_t t55 = 54282LL;

	t55 = (x341&((x342*x343)-x344));

	if (t55 != 700481968LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x345 = 5872872844LLU;
	static uint64_t x348 = 2287680556276LLU;

	t56 = (x345&((x346*x347)-x348));

	if (t56 != 1510793352LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x353 = -765;
	static volatile int16_t x354 = -371;
	int8_t x356 = INT8_MIN;
	int32_t t57 = 31;

	t57 = (x353&((x354*x355)-x356));

	if (t57 != 12156928) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x365 = 1U;
	volatile int32_t x366 = -3677472;
	volatile int8_t x368 = INT8_MAX;

	t58 = (x365&((x366*x367)-x368));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x369 = -1;
	int64_t x371 = -3598722236LL;
	volatile int64_t x372 = -616782377343817169LL;
	volatile int64_t t59 = 30229495LL;

	t59 = (x369&((x370*x371)-x372));

	if (t59 != 8344979532847814097LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x374 = -1;
	uint16_t x376 = UINT16_MAX;

	t60 = (x373&((x374*x375)-x376));

	if (t60 != -666573040) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x378 = 1;
	uint16_t x379 = 7099U;
	uint32_t t61 = 71478768U;

	t61 = (x377&((x378*x379)-x380));

	if (t61 != 39426U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x381 = -5;
	int16_t x382 = -1;
	uint16_t x383 = 1U;
	volatile int32_t t62 = -218;

	t62 = (x381&((x382*x383)-x384));

	if (t62 != -448) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x385 = -280336911347473745LL;
	uint16_t x386 = 2257U;
	uint16_t x387 = UINT16_MAX;
	int64_t x388 = -1LL;
	volatile int64_t t63 = -743357230264LL;

	t63 = (x385&((x386*x387)-x388));

	if (t63 != 143663648LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x389 = 7;
	int16_t x390 = INT16_MIN;
	int32_t x392 = INT32_MAX;
	uint32_t t64 = 60385U;

	t64 = (x389&((x390*x391)-x392));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x396 = 800806U;
	volatile uint32_t t65 = 8U;

	t65 = (x393&((x394*x395)-x396));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x397 = UINT64_MAX;
	uint64_t x398 = UINT64_MAX;
	volatile uint8_t x399 = 2U;
	uint16_t x400 = 17U;
	volatile uint64_t t66 = 15828LLU;

	t66 = (x397&((x398*x399)-x400));

	if (t66 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x405 = 64U;
	static volatile uint32_t x406 = 11143741U;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = -1;
	uint32_t t67 = 171650309U;

	t67 = (x405&((x406*x407)-x408));

	if (t67 != 64U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x409 = UINT64_MAX;
	static int32_t x411 = 2062231;
	int64_t x412 = 1065137438LL;

	t68 = (x409&((x410*x411)-x412));

	if (t68 != 18446744072872496742LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = -1;
	uint8_t x415 = 52U;
	static int16_t x416 = -1;

	t69 = (x413&((x414*x415)-x416));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x417 = -10;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t70 = -312180LL;

	t70 = (x417&((x418*x419)-x420));

	if (t70 != 9223372036784669108LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x421 = 1235U;
	static volatile int8_t x422 = INT8_MIN;
	uint64_t x423 = UINT64_MAX;
	uint64_t t71 = 8725652342092LLU;

	t71 = (x421&((x422*x423)-x424));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x430 = 1;
	int64_t x431 = -8130LL;
	volatile int64_t t72 = 91538146LL;

	t72 = (x429&((x430*x431)-x432));

	if (t72 != 41LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x433 = -1;
	static int32_t x436 = INT32_MIN;
	volatile int64_t t73 = 373849621LL;

	t73 = (x433&((x434*x435)-x436));

	if (t73 != 2147483646LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = -20;
	static int16_t x438 = INT16_MAX;
	int32_t t74 = -8327331;

	t74 = (x437&((x438*x439)-x440));

	if (t74 != 2147385216) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x445 = -5;
	int32_t x446 = -1;
	static uint16_t x447 = 15682U;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t75 = 0;

	t75 = (x445&((x446*x447)-x448));

	if (t75 != -81221) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x449 = INT8_MAX;
	volatile uint8_t x450 = 10U;
	int8_t x452 = -1;
	volatile int32_t t76 = 29249;

	t76 = (x449&((x450*x451)-x452));

	if (t76 != 77) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x457 = INT64_MAX;
	volatile int8_t x458 = INT8_MIN;
	uint8_t x459 = 13U;
	uint32_t x460 = UINT32_MAX;
	volatile int64_t t77 = 874LL;

	t77 = (x457&((x458*x459)-x460));

	if (t77 != 4294965633LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x465 = -1;
	int16_t x466 = -1;
	int8_t x468 = INT8_MIN;
	volatile int32_t t78 = 7;

	t78 = (x465&((x466*x467)-x468));

	if (t78 != 32896) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x470 = -1;
	static uint64_t x471 = 52218970905LLU;
	volatile uint16_t x472 = 1U;
	volatile uint64_t t79 = 678465833LLU;

	t79 = (x469&((x470*x471)-x472));

	if (t79 != 3748720101084474434LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x478 = INT8_MIN;
	volatile int32_t x479 = -5424500;
	static volatile uint32_t t80 = 189682U;

	t80 = (x477&((x478*x479)-x480));

	if (t80 != 694334678U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x481 = 349745;
	volatile int16_t x482 = INT16_MIN;
	int64_t x483 = -1LL;
	static int16_t x484 = INT16_MIN;
	volatile int64_t t81 = 16441018680190942LL;

	t81 = (x481&((x482*x483)-x484));

	if (t81 != 65536LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x489 = -1;
	volatile int16_t x491 = 0;
	volatile int32_t t82 = -30;

	t82 = (x489&((x490*x491)-x492));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x493 = INT16_MIN;
	uint8_t x494 = UINT8_MAX;
	uint32_t x495 = 0U;
	uint32_t t83 = 67789U;

	t83 = (x493&((x494*x495)-x496));

	if (t83 != 4292902912U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x497 = -496LL;
	volatile uint16_t x498 = 1068U;
	int16_t x499 = INT16_MIN;
	int8_t x500 = -16;
	static int64_t t84 = 255484512LL;

	t84 = (x497&((x498*x499)-x500));

	if (t84 != -34996208LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x502 = 17025989540664LL;
	volatile int16_t x503 = INT16_MIN;
	volatile uint8_t x504 = 28U;
	static volatile int64_t t85 = 27703273326986LL;

	t85 = (x501&((x502*x503)-x504));

	if (t85 != -557907625268477980LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x509 = -4661LL;
	uint32_t x510 = UINT32_MAX;
	int16_t x511 = -1;
	int16_t x512 = -1;

	t86 = (x509&((x510*x511)-x512));

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x513 = 150085007158514861LL;
	static int16_t x514 = INT16_MIN;
	uint16_t x515 = UINT16_MAX;
	uint64_t x516 = 4511LLU;
	volatile uint64_t t87 = 18LLU;

	t87 = (x513&((x514*x515)-x516));

	if (t87 != 150085005786219553LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x517 = -1837294672281214112LL;
	int16_t x519 = -1;
	int64_t x520 = -1LL;

	t88 = (x517&((x518*x519)-x520));

	if (t88 != -1837294672296984320LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x521 = UINT64_MAX;
	int16_t x522 = -1;
	int64_t x523 = -84319LL;
	static int32_t x524 = -1;
	volatile uint64_t t89 = 902703410LLU;

	t89 = (x521&((x522*x523)-x524));

	if (t89 != 84320LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x525 = 9U;
	volatile uint64_t x527 = 125330976356769LLU;
	int16_t x528 = INT16_MIN;
	static volatile uint64_t t90 = 13080606574LLU;

	t90 = (x525&((x526*x527)-x528));

	if (t90 != 8LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x529 = -1;
	int32_t x532 = -1;
	int64_t t91 = 9270758810713745LL;

	t91 = (x529&((x530*x531)-x532));

	if (t91 != -281LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x534 = -1;
	uint64_t x535 = 209LLU;
	volatile int16_t x536 = -1;
	static volatile uint64_t t92 = 1LLU;

	t92 = (x533&((x534*x535)-x536));

	if (t92 != 65328LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x537 = 66U;
	static uint8_t x538 = 55U;
	uint32_t x540 = 7U;
	volatile uint32_t t93 = 590242U;

	t93 = (x537&((x538*x539)-x540));

	if (t93 != 64U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x541 = 7U;
	int8_t x543 = -1;
	int32_t x544 = INT32_MIN;

	t94 = (x541&((x542*x543)-x544));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x545 = -152;
	static int32_t x547 = 35982814;
	static volatile uint32_t x548 = 14U;

	t95 = (x545&((x546*x547)-x548));

	if (t95 != 4258984448U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x565 = 1483339548LLU;
	static uint16_t x566 = 0U;
	static uint8_t x567 = 2U;
	static uint64_t t96 = 1420452554541LLU;

	t96 = (x565&((x566*x567)-x568));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x569 = UINT32_MAX;
	uint64_t x570 = UINT64_MAX;
	static uint64_t x571 = 133782LLU;
	int64_t x572 = -1LL;
	uint64_t t97 = 89311044LLU;

	t97 = (x569&((x570*x571)-x572));

	if (t97 != 4294833515LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x577 = INT16_MAX;
	static int64_t x578 = -1LL;
	uint16_t x579 = UINT16_MAX;
	static uint16_t x580 = UINT16_MAX;

	t98 = (x577&((x578*x579)-x580));

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x585 = 467161LL;
	int16_t x586 = INT16_MAX;
	static int64_t x587 = -1LL;
	int64_t t99 = -39943797LL;

	t99 = (x585&((x586*x587)-x588));

	if (t99 != 458752LL) { NG(); } else { ; }
	
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

