#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 27U;
volatile uint32_t x16 = 3425776U;
static uint64_t t1 = 51827670LLU;
volatile uint64_t x31 = 3995859970077673LLU;
int64_t x32 = INT64_MIN;
int16_t x37 = -1;
static volatile int16_t x40 = INT16_MAX;
uint32_t x44 = UINT32_MAX;
uint16_t x46 = UINT16_MAX;
static int32_t x47 = 32809030;
int32_t x48 = 122118267;
volatile uint8_t x59 = 21U;
int8_t x60 = INT8_MIN;
uint32_t x67 = 1709346389U;
uint64_t x68 = 53006150960517LLU;
static volatile uint64_t t11 = 31796LLU;
static int8_t x72 = INT8_MIN;
static int8_t x74 = INT8_MIN;
uint16_t x84 = 0U;
static int8_t x88 = INT8_MAX;
static uint32_t x95 = 3434U;
uint16_t x98 = 22358U;
volatile int64_t t18 = 2968663441326035LL;
uint8_t x105 = UINT8_MAX;
volatile int16_t x112 = INT16_MIN;
int64_t t21 = 1959089963182LL;
volatile int64_t x118 = INT64_MAX;
int32_t x122 = 12059;
int16_t x124 = -1;
static uint64_t x125 = 165187479754722600LLU;
int16_t x144 = INT16_MAX;
int32_t x147 = 4135;
int32_t x153 = INT32_MIN;
uint32_t x178 = 56893U;
volatile uint32_t t32 = 857U;
int32_t x188 = INT32_MAX;
int16_t x191 = -1;
int16_t x206 = -1;
uint16_t x213 = UINT16_MAX;
uint8_t x214 = UINT8_MAX;
static int32_t x216 = -1;
int64_t t38 = 2162480772LL;
uint16_t x231 = 16342U;
int64_t x250 = -676761330898310LL;
static volatile int64_t t41 = -1889LL;
uint64_t t42 = 296295LLU;
uint64_t x266 = 791984LLU;
int64_t x281 = INT64_MAX;
volatile int8_t x286 = -50;
static uint64_t t48 = 4347LLU;
volatile int64_t x290 = -1LL;
static int16_t x292 = -1;
uint16_t x312 = 3430U;
volatile int16_t x321 = INT16_MIN;
uint32_t x322 = 906U;
static uint32_t t54 = 13105961U;
volatile int8_t x331 = INT8_MAX;
volatile uint64_t x332 = 5013422025079LLU;
static uint16_t x358 = UINT16_MAX;
volatile int64_t x366 = INT64_MAX;
int16_t x369 = -4969;
volatile uint32_t t61 = 0U;
int64_t x378 = 3754104139071LL;
uint16_t x380 = UINT16_MAX;
static uint64_t t64 = 42174895LLU;
uint64_t t65 = 34395762095101606LLU;
volatile int8_t x402 = -7;
static volatile int16_t x407 = 2;
int16_t x427 = INT16_MAX;
int64_t t69 = 4820669822LL;
int16_t x429 = -334;
uint64_t x451 = 24011726409714276LLU;
uint64_t x453 = 0LLU;
int64_t x455 = 29509081416921617LL;
int8_t x461 = 43;
int64_t x473 = -126469LL;
uint8_t x476 = UINT8_MAX;
uint64_t x477 = 718766LLU;
int32_t x483 = INT32_MIN;
int16_t x484 = INT16_MIN;
volatile uint8_t x490 = UINT8_MAX;
int8_t x492 = INT8_MAX;
int64_t x493 = -1LL;
int8_t x495 = INT8_MIN;
int16_t x511 = -1;
uint64_t x515 = 22870LLU;
int32_t x521 = INT32_MIN;
uint16_t x535 = 1U;
static int32_t x538 = INT32_MAX;
int8_t x539 = INT8_MIN;
int16_t x544 = -1955;
uint64_t x548 = 2LLU;
uint16_t x554 = 22057U;
uint32_t x555 = 133647008U;
int32_t x562 = 2500034;
volatile uint8_t x570 = 0U;
int64_t x571 = 1240935860530758LL;
volatile uint8_t x573 = 7U;
int8_t x578 = INT8_MIN;
volatile int8_t x595 = -1;
int8_t x596 = 19;
uint32_t x601 = UINT32_MAX;
uint64_t x603 = 3510LLU;
int32_t x604 = INT32_MIN;
volatile uint64_t t94 = 1691LLU;
int32_t x610 = -802745926;
volatile uint32_t t98 = 74U;
volatile uint64_t x622 = 18180376784334LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	uint8_t x4 = 2U;
	int64_t t0 = -5128880941785LL;

	t0 = (((x1|x2)*x3)*x4);

	if (t0 != -54LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 9471986LLU;
	volatile int16_t x15 = INT16_MIN;

	t1 = (((x13|x14)*x15)*x16);

	if (t1 != 1571581591552LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 2U;
	int8_t x18 = -1;
	static uint64_t x19 = 121419LLU;
	uint32_t x20 = 3101862U;
	uint64_t t2 = 581417964455LLU;

	t2 = (((x17|x18)*x19)*x20);

	if (t2 != 12725246521736877918LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	static uint8_t x26 = 115U;
	volatile uint32_t x27 = 108778U;
	uint32_t x28 = 60230841U;
	uint32_t t3 = 6U;

	t3 = (((x25|x26)*x27)*x28);

	if (t3 != 2329671398U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x29 = 12U;
	int16_t x30 = INT16_MAX;
	uint64_t t4 = 514032222LLU;

	t4 = (((x29|x30)*x31)*x32);

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -1LL;
	int64_t x34 = 241614690636452014LL;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = 0U;
	int64_t t5 = 20844578990906LL;

	t5 = (((x33|x34)*x35)*x36);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = INT8_MAX;
	static uint16_t x39 = 133U;
	volatile int32_t t6 = 9315;

	t6 = (((x37|x38)*x39)*x40);

	if (t6 != -4358011) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -2160605;
	int32_t x42 = -2533146;
	uint64_t x43 = 6318278236LLU;
	static uint64_t t7 = 4235944746002306LLU;

	t7 = (((x41|x42)*x43)*x44);

	if (t7 != 8129602048319415036LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 41LLU;
	volatile uint64_t t8 = 5729572621628LLU;

	t8 = (((x45|x46)*x47)*x48);

	if (t8 != 4316926837651717726LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = -260621472339663285LL;
	volatile uint8_t x55 = 1U;
	int16_t x56 = -1;
	static int64_t t9 = -243386589824972LL;

	t9 = (((x53|x54)*x55)*x56);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 1726552U;
	int8_t x58 = -1;
	uint32_t t10 = 609U;

	t10 = (((x57|x58)*x59)*x60);

	if (t10 != 2688U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 9U;
	uint16_t x66 = UINT16_MAX;

	t11 = (((x65|x66)*x67)*x68);

	if (t11 != 16678452520653612247LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x69 = -1LL;
	int64_t x70 = -100LL;
	int32_t x71 = INT32_MAX;
	int64_t t12 = 936LL;

	t12 = (((x69|x70)*x71)*x72);

	if (t12 != 274877906816LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	int64_t t13 = 504778LL;

	t13 = (((x73|x74)*x75)*x76);

	if (t13 != -16384LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MAX;
	int32_t x80 = -435130;
	uint32_t t14 = 0U;

	t14 = (((x77|x78)*x79)*x80);

	if (t14 != 4294532166U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x81 = 62U;
	volatile int8_t x82 = INT8_MIN;
	static int16_t x83 = -7;
	static volatile int32_t t15 = 3430;

	t15 = (((x81|x82)*x83)*x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 16977U;
	static int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	int64_t t16 = 7002LL;

	t16 = (((x85|x86)*x87)*x88);

	if (t16 != -4161409LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = 50U;
	uint16_t x94 = 901U;
	int8_t x96 = 1;
	volatile uint32_t t17 = 333U;

	t17 = (((x93|x94)*x95)*x96);

	if (t17 != 3265734U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 1353LL;
	uint16_t x99 = 6U;
	int16_t x100 = -1;

	t18 = (((x97|x98)*x99)*x100);

	if (t18 != -134202LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -1;
	int16_t x102 = 0;
	uint16_t x103 = 6983U;
	int8_t x104 = INT8_MAX;
	int32_t t19 = 17;

	t19 = (((x101|x102)*x103)*x104);

	if (t19 != -886841) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x106 = 544817U;
	int32_t x107 = -1;
	uint8_t x108 = 4U;
	uint32_t t20 = 1329916U;

	t20 = (((x105|x106)*x107)*x108);

	if (t20 != 4292787204U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = -1;
	int64_t x110 = -1LL;
	static int64_t x111 = -1LL;

	t21 = (((x109|x110)*x111)*x112);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	static int8_t x115 = 24;
	int8_t x116 = -1;
	volatile int32_t t22 = 11397;

	t22 = (((x113|x114)*x115)*x116);

	if (t22 != 786432) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x117 = -1802;
	uint16_t x119 = 0U;
	volatile uint64_t x120 = UINT64_MAX;
	volatile uint64_t t23 = 14394LLU;

	t23 = (((x117|x118)*x119)*x120);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = INT8_MIN;
	int64_t x123 = 1LL;
	int64_t t24 = -11144608307LL;

	t24 = (((x121|x122)*x123)*x124);

	if (t24 != 101LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = -1;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t25 = 1160582316891LLU;

	t25 = (((x125|x126)*x127)*x128);

	if (t25 != 8388480LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x141 = -1;
	int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t t26 = -1;

	t26 = (((x141|x142)*x143)*x144);

	if (t26 != 4194176) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = 4543662LL;
	int16_t x146 = INT16_MAX;
	int16_t x148 = -37;
	int64_t t27 = -9058660024LL;

	t27 = (((x145|x146)*x147)*x148);

	if (t27 != -696854129245LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x154 = -1435710;
	uint32_t x155 = 1040925616U;
	int8_t x156 = -1;
	volatile uint32_t t28 = 4U;

	t28 = (((x153|x154)*x155)*x156);

	if (t28 != 3380733088U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x165 = -1;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 0U;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t29 = 188946244U;

	t29 = (((x165|x166)*x167)*x168);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x169 = 12U;
	int32_t x170 = -1;
	static int16_t x171 = INT16_MIN;
	static uint8_t x172 = 0U;
	int32_t t30 = 52;

	t30 = (((x169|x170)*x171)*x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x173 = 635443U;
	uint32_t x174 = 1U;
	int64_t x175 = -222940LL;
	static volatile int8_t x176 = INT8_MIN;
	int64_t t31 = -503710999293736010LL;

	t31 = (((x173|x174)*x175)*x176);

	if (t31 != 18133204789760LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x177 = -1;
	uint8_t x179 = 1U;
	int32_t x180 = 1986878;

	t32 = (((x177|x178)*x179)*x180);

	if (t32 != 4292980418U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x185 = 3;
	static uint64_t x186 = UINT64_MAX;
	int32_t x187 = -1;
	volatile uint64_t t33 = 1LLU;

	t33 = (((x185|x186)*x187)*x188);

	if (t33 != 2147483647LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = -1;
	static uint16_t x190 = 5738U;
	static int64_t x192 = 70077378725LL;
	int64_t t34 = 1593971735690037LL;

	t34 = (((x189|x190)*x191)*x192);

	if (t34 != 70077378725LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = -31189539LL;
	volatile int32_t x202 = -3;
	int64_t x203 = 15LL;
	uint16_t x204 = 8418U;
	volatile int64_t t35 = -75LL;

	t35 = (((x201|x202)*x203)*x204);

	if (t35 != -378810LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = INT8_MAX;
	volatile int64_t t36 = 0LL;

	t36 = (((x205|x206)*x207)*x208);

	if (t36 != -545460846465LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = INT64_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	int32_t x211 = 0;
	int64_t x212 = -1LL;
	int64_t t37 = 399LL;

	t37 = (((x209|x210)*x211)*x212);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x215 = -1LL;

	t38 = (((x213|x214)*x215)*x216);

	if (t38 != 65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x229 = 2;
	volatile int32_t x230 = -1;
	volatile uint32_t x232 = 456795981U;
	static volatile uint32_t t39 = 750456U;

	t39 = (((x229|x230)*x231)*x232);

	if (t39 != 3988206242U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x241 = 1U;
	int32_t x242 = INT32_MIN;
	volatile uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = 134455139224LLU;
	uint64_t t40 = 982518690410LLU;

	t40 = (((x241|x242)*x243)*x244);

	if (t40 != 12039051633004995688LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x249 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	static volatile int8_t x252 = 0;

	t41 = (((x249|x250)*x251)*x252);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x257 = 133690058U;
	int8_t x258 = -2;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 934327942202094371LLU;

	t42 = (((x257|x258)*x259)*x260);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x261 = 157836U;
	uint64_t x262 = 94687LLU;
	volatile uint16_t x263 = 14U;
	static int64_t x264 = INT64_MIN;
	volatile uint64_t t43 = 197LLU;

	t43 = (((x261|x262)*x263)*x264);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x265 = 3864934U;
	volatile int8_t x267 = -30;
	int64_t x268 = INT64_MAX;
	static volatile uint64_t t44 = 29248827213558LLU;

	t44 = (((x265|x266)*x267)*x268);

	if (t44 != 123847380LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x273 = INT8_MIN;
	static int16_t x274 = -5;
	int8_t x275 = INT8_MAX;
	static int8_t x276 = -62;
	volatile int32_t t45 = -145;

	t45 = (((x273|x274)*x275)*x276);

	if (t45 != 39370) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x277 = 5U;
	uint8_t x278 = 3U;
	uint64_t x279 = UINT64_MAX;
	uint64_t x280 = 218982710604143LLU;
	volatile uint64_t t46 = 818084103987LLU;

	t46 = (((x277|x278)*x279)*x280);

	if (t46 != 18445211194735322615LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x282 = -1;
	int16_t x283 = -1;
	uint64_t x284 = 1027723279LLU;
	volatile uint64_t t47 = 60557223LLU;

	t47 = (((x281|x282)*x283)*x284);

	if (t47 != 1027723279LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x285 = 6833LLU;
	uint64_t x287 = 30943682787176LLU;
	int32_t x288 = INT32_MIN;

	t48 = (((x285|x286)*x287)*x288);

	if (t48 != 5880640857719177216LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x289 = 58596444796740LLU;
	volatile int64_t x291 = INT64_MIN;
	volatile uint64_t t49 = 14831608377LLU;

	t49 = (((x289|x290)*x291)*x292);

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x293 = 3119931U;
	int16_t x294 = -1;
	static uint16_t x295 = UINT16_MAX;
	uint16_t x296 = UINT16_MAX;
	uint32_t t50 = 36981055U;

	t50 = (((x293|x294)*x295)*x296);

	if (t50 != 131071U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = -1LL;
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	int32_t x308 = INT32_MIN;
	static volatile int64_t t51 = -5779LL;

	t51 = (((x305|x306)*x307)*x308);

	if (t51 != 70366596694016LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = 22213253U;
	int16_t x311 = -197;
	uint32_t t52 = 10538881U;

	t52 = (((x309|x310)*x311)*x312);

	if (t52 != 3157282686U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = INT32_MAX;
	static int32_t x318 = INT32_MIN;
	int16_t x319 = 16102;
	int16_t x320 = -303;
	volatile int32_t t53 = 12419;

	t53 = (((x317|x318)*x319)*x320);

	if (t53 != 4878906) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x323 = INT16_MIN;
	volatile uint8_t x324 = 3U;

	t54 = (((x321|x322)*x323)*x324);

	if (t54 != 3132162048U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 114LLU;
	int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t55 = 30936924LLU;

	t55 = (((x325|x326)*x327)*x328);

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x329 = 5380U;
	int16_t x330 = -6553;
	volatile uint64_t t56 = 4780LLU;

	t56 = (((x329|x330)*x331)*x332);

	if (t56 != 3731917922945822879LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x345 = 1LLU;
	int32_t x346 = INT32_MAX;
	int8_t x347 = -1;
	uint64_t x348 = 11LLU;
	uint64_t t57 = 9771688LLU;

	t57 = (((x345|x346)*x347)*x348);

	if (t57 != 18446744050087231499LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x357 = -1LL;
	uint64_t x359 = 61LLU;
	uint64_t x360 = 49LLU;
	uint64_t t58 = 133770LLU;

	t58 = (((x357|x358)*x359)*x360);

	if (t58 != 18446744073709548627LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x365 = INT64_MIN;
	uint8_t x367 = 46U;
	int64_t x368 = -1LL;
	int64_t t59 = 125824LL;

	t59 = (((x365|x366)*x367)*x368);

	if (t59 != 46LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	static uint8_t x372 = 29U;
	int64_t t60 = -85202824LL;

	t60 = (((x369|x370)*x371)*x372);

	if (t60 != 3045LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint16_t x374 = 5U;
	int32_t x375 = -1;
	static int16_t x376 = INT16_MIN;

	t61 = (((x373|x374)*x375)*x376);

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x379 = 5556385585809165LLU;
	volatile uint64_t t62 = 2488639LLU;

	t62 = (((x377|x378)*x379)*x380);

	if (t62 != 16666981852828437069LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x381 = INT32_MIN;
	static volatile int64_t x382 = INT64_MAX;
	uint8_t x383 = 0U;
	int16_t x384 = INT16_MIN;
	volatile int64_t t63 = 3940LL;

	t63 = (((x381|x382)*x383)*x384);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	uint8_t x388 = UINT8_MAX;

	t64 = (((x385|x386)*x387)*x388);

	if (t64 != 18446744073709519231LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x389 = 9;
	static uint64_t x390 = 1827002LLU;
	int32_t x391 = -334450787;
	uint32_t x392 = UINT32_MAX;

	t65 = (((x389|x390)*x391)*x392);

	if (t65 != 10334304757653919825LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 4U;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = -1;
	uint64_t t66 = 5821LLU;

	t66 = (((x393|x394)*x395)*x396);

	if (t66 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x401 = -269501;
	int16_t x403 = -1;
	int16_t x404 = -1;
	volatile int32_t t67 = -97472;

	t67 = (((x401|x402)*x403)*x404);

	if (t67 != -5) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x405 = INT8_MIN;
	volatile int64_t x406 = 25878195252991LL;
	int32_t x408 = 872;
	int64_t t68 = -773303488626463LL;

	t68 = (((x405|x406)*x407)*x408);

	if (t68 != -1744LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x425 = UINT16_MAX;
	int64_t x426 = -505LL;
	volatile int64_t x428 = -1LL;

	t69 = (((x425|x426)*x427)*x428);

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x430 = INT8_MIN;
	int16_t x431 = 340;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t70 = -54;

	t70 = (((x429|x430)*x431)*x432);

	if (t70 != 869007360) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x437 = -3;
	static int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	uint16_t x440 = 0U;
	volatile int64_t t71 = -371550679330394LL;

	t71 = (((x437|x438)*x439)*x440);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x449 = 1884172244LL;
	uint32_t x450 = UINT32_MAX;
	uint8_t x452 = 41U;
	volatile uint64_t t72 = 17310953602079456LLU;

	t72 = (((x449|x450)*x451)*x452);

	if (t72 != 4988394050925893116LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x454 = 8673U;
	int16_t x456 = INT16_MIN;
	uint64_t t73 = 2561797966324179790LLU;

	t73 = (((x453|x454)*x455)*x456);

	if (t73 != 17966532625946869760LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x462 = -1;
	volatile int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MIN;
	int32_t t74 = -78287244;

	t74 = (((x461|x462)*x463)*x464);

	if (t74 != -16384) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x474 = -1LL;
	uint32_t x475 = 3U;
	int64_t t75 = -110861300312LL;

	t75 = (((x473|x474)*x475)*x476);

	if (t75 != -765LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x478 = -4;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;
	uint64_t t76 = 1957203239553231021LLU;

	t76 = (((x477|x478)*x479)*x480);

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x481 = UINT64_MAX;
	int8_t x482 = 0;
	uint64_t t77 = 27LLU;

	t77 = (((x481|x482)*x483)*x484);

	if (t77 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x489 = -1;
	uint64_t x491 = 102110LLU;
	uint64_t t78 = 7535148LLU;

	t78 = (((x489|x490)*x491)*x492);

	if (t78 != 18446744073696583646LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x494 = 30U;
	static int8_t x496 = INT8_MIN;
	volatile int64_t t79 = 5LL;

	t79 = (((x493|x494)*x495)*x496);

	if (t79 != -16384LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x509 = 28U;
	int8_t x510 = INT8_MIN;
	static volatile int64_t x512 = -1LL;
	int64_t t80 = -11838557386033LL;

	t80 = (((x509|x510)*x511)*x512);

	if (t80 != -100LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = INT32_MAX;
	int8_t x514 = INT8_MAX;
	volatile int32_t x516 = INT32_MIN;
	uint64_t t81 = 131570932200198LLU;

	t81 = (((x513|x514)*x515)*x516);

	if (t81 != 9223421149805805568LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x522 = -1LL;
	int32_t x523 = INT32_MAX;
	static int64_t x524 = -49196107LL;
	int64_t t82 = -7553206718578LL;

	t82 = (((x521|x522)*x523)*x524);

	if (t82 != 105647835278562229LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x533 = -15;
	int32_t x534 = -18678;
	int16_t x536 = INT16_MAX;
	int32_t t83 = 346792;

	t83 = (((x533|x534)*x535)*x536);

	if (t83 != -163835) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x537 = -1;
	uint8_t x540 = 13U;
	volatile int32_t t84 = -37396559;

	t84 = (((x537|x538)*x539)*x540);

	if (t84 != 1664) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	int16_t x543 = INT16_MAX;
	static int64_t t85 = 1LL;

	t85 = (((x541|x542)*x543)*x544);

	if (t85 != 137566696536801280LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x545 = INT32_MIN;
	int16_t x546 = -1;
	uint32_t x547 = UINT32_MAX;
	volatile uint64_t t86 = 1740062721502025111LLU;

	t86 = (((x545|x546)*x547)*x548);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x553 = -1;
	int32_t x556 = -1;
	volatile uint32_t t87 = 530912853U;

	t87 = (((x553|x554)*x555)*x556);

	if (t87 != 133647008U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x561 = -1;
	static uint64_t x563 = UINT64_MAX;
	int32_t x564 = -26890928;
	uint64_t t88 = 26043LLU;

	t88 = (((x561|x562)*x563)*x564);

	if (t88 != 18446744073682660688LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x569 = -1;
	volatile int16_t x572 = -1;
	volatile int64_t t89 = 32142984LL;

	t89 = (((x569|x570)*x571)*x572);

	if (t89 != 1240935860530758LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x574 = -1;
	uint8_t x575 = 20U;
	uint64_t x576 = 990LLU;
	uint64_t t90 = 238LLU;

	t90 = (((x573|x574)*x575)*x576);

	if (t90 != 18446744073709531816LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x577 = INT8_MAX;
	volatile int16_t x579 = -1;
	volatile int8_t x580 = -1;
	volatile int32_t t91 = -465;

	t91 = (((x577|x578)*x579)*x580);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x589 = UINT32_MAX;
	uint32_t x590 = UINT32_MAX;
	int16_t x591 = INT16_MIN;
	static int8_t x592 = INT8_MIN;
	uint32_t t92 = 5U;

	t92 = (((x589|x590)*x591)*x592);

	if (t92 != 4290772992U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x593 = 163;
	int16_t x594 = INT16_MAX;
	int32_t t93 = 107;

	t93 = (((x593|x594)*x595)*x596);

	if (t93 != -622573) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x602 = INT64_MIN;

	t94 = (((x601|x602)*x603)*x604);

	if (t94 != 7537667604480LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x605 = INT16_MAX;
	uint32_t x606 = 1U;
	uint64_t x607 = 31923353251LLU;
	uint16_t x608 = 1085U;
	uint64_t t95 = 224LLU;

	t95 = (((x605|x606)*x607)*x608);

	if (t95 != 1134945279833435945LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x609 = -18;
	int64_t x611 = -1LL;
	uint32_t x612 = 472U;
	static int64_t t96 = -73733LL;

	t96 = (((x609|x610)*x611)*x612);

	if (t96 != 944LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x613 = -11;
	int8_t x614 = INT8_MIN;
	static volatile uint32_t x615 = UINT32_MAX;
	int32_t x616 = 1962;
	volatile uint32_t t97 = 91417500U;

	t97 = (((x613|x614)*x615)*x616);

	if (t97 != 21582U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x617 = INT16_MIN;
	uint8_t x618 = UINT8_MAX;
	uint32_t x619 = UINT32_MAX;
	static int16_t x620 = -1;

	t98 = (((x617|x618)*x619)*x620);

	if (t98 != 4294934783U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x621 = INT32_MAX;
	static int32_t x623 = -979876187;
	int32_t x624 = 1090279;
	volatile uint64_t t99 = 1404LLU;

	t99 = (((x621|x622)*x623)*x624);

	if (t99 != 2842858923278718749LLU) { NG(); } else { ; }
	
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

