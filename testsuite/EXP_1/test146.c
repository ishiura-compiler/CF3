#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 9727;
volatile int16_t x7 = 11326;
volatile int16_t x10 = -1;
volatile int16_t x12 = INT16_MIN;
int8_t x25 = INT8_MIN;
uint32_t x44 = 2021U;
static uint32_t x48 = 3U;
volatile int16_t x56 = 2043;
int64_t x72 = INT64_MAX;
int32_t x73 = INT32_MAX;
uint64_t x76 = UINT64_MAX;
static int8_t x85 = INT8_MAX;
static int64_t t15 = -10399416793429320LL;
int16_t x90 = INT16_MIN;
volatile uint8_t x98 = UINT8_MAX;
static int8_t x99 = INT8_MIN;
uint32_t x113 = UINT32_MAX;
volatile int8_t x117 = -1;
static uint16_t x123 = 339U;
int64_t x127 = INT64_MIN;
int8_t x129 = 1;
uint8_t x131 = 56U;
uint32_t t24 = 60722U;
volatile int8_t x139 = -1;
int32_t t29 = -57604;
uint8_t x163 = 125U;
volatile int32_t t30 = -926508277;
volatile int16_t x172 = -2844;
uint8_t x175 = UINT8_MAX;
volatile uint16_t x177 = 2U;
int16_t x183 = INT16_MIN;
uint16_t x184 = UINT16_MAX;
uint32_t x195 = 256U;
uint32_t x198 = 39814845U;
int8_t x199 = INT8_MIN;
volatile int8_t x203 = INT8_MIN;
int64_t x206 = -295LL;
volatile uint64_t t40 = 32449281128798635LLU;
int32_t x210 = INT32_MAX;
int8_t x215 = INT8_MIN;
static uint16_t x219 = UINT16_MAX;
volatile int16_t x220 = INT16_MIN;
int32_t x227 = -1;
int64_t x232 = -64432877817124LL;
static int8_t x242 = -23;
static volatile int64_t x247 = INT64_MAX;
static uint64_t x248 = UINT64_MAX;
volatile int8_t x257 = INT8_MIN;
static int32_t t49 = 5;
int16_t x261 = -474;
int8_t x262 = INT8_MIN;
volatile int16_t x263 = INT16_MIN;
int32_t t50 = 114;
int16_t x269 = INT16_MAX;
static uint64_t x271 = 12414830491703LLU;
static volatile uint64_t t52 = 6286514469986397398LLU;
int16_t x277 = -1;
uint32_t x289 = 1128U;
volatile uint16_t x291 = 44U;
int64_t x299 = 518LL;
int8_t x311 = -1;
volatile int64_t x321 = 473LL;
int64_t x322 = -1LL;
static volatile int32_t x323 = -1;
uint8_t x325 = 0U;
static int8_t x330 = INT8_MIN;
volatile int16_t x332 = -1;
static int32_t t63 = -12961445;
uint16_t x335 = 12664U;
static volatile uint32_t t64 = 2869U;
static int8_t x342 = 5;
int32_t x369 = INT32_MIN;
int8_t x377 = 1;
int8_t x378 = -1;
int32_t x393 = -1;
static int16_t x396 = 1;
static int32_t x403 = 4559513;
uint64_t t76 = 11712230057952525LLU;
int16_t x414 = INT16_MAX;
uint8_t x429 = UINT8_MAX;
uint64_t x430 = 538540090709442LLU;
static int16_t x433 = -1;
int64_t x437 = INT64_MAX;
uint32_t t83 = 30U;
volatile uint64_t t86 = 31762059933LLU;
volatile uint64_t t87 = 80821LLU;
uint64_t t88 = 64767863693707LLU;
static uint8_t x470 = UINT8_MAX;
static uint64_t x481 = 78908486469437858LLU;
int64_t x493 = -20719460938075633LL;
int8_t x496 = -1;
int8_t x505 = -1;
volatile int64_t x508 = 1566294749462079303LL;
int8_t x512 = INT8_MIN;
static volatile int64_t x531 = -1LL;


void f0(void) {
	volatile uint32_t x1 = 220465U;
	int16_t x3 = 186;
	int16_t x4 = INT16_MAX;
	volatile uint32_t t0 = 30U;

	t0 = (((x1+x2)|x3)*x4);

	if (t0 != 3252255814U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 4296U;
	uint64_t x6 = 39714769LLU;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 196321385275LLU;

	t1 = (((x5+x6)|x7)*x8);

	if (t1 != 18446744073669821249LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static int16_t x11 = -1;
	volatile int64_t t2 = -66974640302395828LL;

	t2 = (((x9+x10)|x11)*x12);

	if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3U;
	volatile uint64_t x14 = 3124892LLU;
	uint16_t x15 = 0U;
	static int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = 19371242915LLU;

	t3 = (((x13+x14)|x15)*x16);

	if (t3 != 18446744073309565056LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -1LL;
	uint64_t x19 = 1127177884443598903LLU;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t4 = 973622570LLU;

	t4 = (((x17+x18)|x19)*x20);

	if (t4 != 2147483648LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	static int64_t x23 = -12600977816995LL;
	int64_t x24 = -1LL;
	int64_t t5 = 16764799LL;

	t5 = (((x21+x22)|x23)*x24);

	if (t5 != 12600977784961LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 48857065284LLU;
	int8_t x27 = -1;
	int64_t x28 = INT64_MIN;
	static uint64_t t6 = 1095008644356824446LLU;

	t6 = (((x25+x26)|x27)*x28);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = 1;
	static volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = 9LLU;
	int16_t x40 = INT16_MAX;
	static volatile uint64_t t7 = 1299LLU;

	t7 = (((x37+x38)|x39)*x40);

	if (t7 != 18446744072636137463LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -12523;
	static int8_t x42 = INT8_MAX;
	volatile int16_t x43 = -194;
	uint32_t t8 = 2028199389U;

	t8 = (((x41+x42)|x43)*x44);

	if (t8 != 4294833910U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	static uint32_t x46 = 858273U;
	uint32_t x47 = UINT32_MAX;
	static uint32_t t9 = 61421U;

	t9 = (((x45+x46)|x47)*x48);

	if (t9 != 4294967293U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = 1623570LLU;
	int64_t x54 = INT64_MAX;
	static int32_t x55 = INT32_MAX;
	uint64_t t10 = 406737650923LLU;

	t10 = (((x53+x54)|x55)*x56);

	if (t10 != 9223376424163866629LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = UINT8_MAX;
	static int32_t x62 = -73;
	int32_t x63 = INT32_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t11 = 4458128098502560LLU;

	t11 = (((x61+x62)|x63)*x64);

	if (t11 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	uint64_t x66 = 14897LLU;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = UINT32_MAX;
	uint64_t t12 = 74306549597770104LLU;

	t12 = (((x65+x66)|x67)*x68);

	if (t12 != 18446667314054055376LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 1;
	int8_t x70 = 23;
	int32_t x71 = -1;
	int64_t t13 = 611214583969LL;

	t13 = (((x69+x70)|x71)*x72);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MIN;
	uint64_t t14 = 40395139LLU;

	t14 = (((x73+x74)|x75)*x76);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x86 = -1;
	int64_t x87 = INT64_MAX;
	static volatile int16_t x88 = -1;

	t15 = (((x85+x86)|x87)*x88);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int64_t x91 = INT64_MAX;
	static int16_t x92 = INT16_MIN;
	volatile int64_t t16 = -32405108LL;

	t16 = (((x89+x90)|x91)*x92);

	if (t16 != 32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x93 = 718U;
	uint8_t x94 = 3U;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = 28;
	volatile int32_t t17 = 3941765;

	t17 = (((x93+x94)|x95)*x96);

	if (t17 != 21476) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = -1LL;
	volatile int16_t x100 = -1;
	static volatile int64_t t18 = 340985LL;

	t18 = (((x97+x98)|x99)*x100);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	volatile uint8_t x102 = 0U;
	int64_t x103 = -322497LL;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t19 = -1481LL;

	t19 = (((x101+x102)|x103)*x104);

	if (t19 != 2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x114 = INT8_MIN;
	uint64_t x115 = 1163LLU;
	volatile int64_t x116 = INT64_MIN;
	static uint64_t t20 = 4170LLU;

	t20 = (((x113+x114)|x115)*x116);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x118 = -1LL;
	volatile int8_t x119 = INT8_MIN;
	volatile int32_t x120 = INT32_MAX;
	volatile int64_t t21 = 0LL;

	t21 = (((x117+x118)|x119)*x120);

	if (t21 != -4294967294LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 62U;
	static uint8_t x122 = 84U;
	uint16_t x124 = 4105U;
	volatile int32_t t22 = -7;

	t22 = (((x121+x122)|x123)*x124);

	if (t22 != 1917035) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x125 = UINT64_MAX;
	uint32_t x126 = 4854U;
	uint8_t x128 = UINT8_MAX;
	uint64_t t23 = 5178539315LLU;

	t23 = (((x125+x126)|x127)*x128);

	if (t23 != 9223372036856013323LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x130 = 0U;
	uint32_t x132 = 2174207U;

	t24 = (((x129+x130)|x131)*x132);

	if (t24 != 123929799U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x133 = UINT32_MAX;
	static volatile int64_t x134 = 12726248011LL;
	volatile int16_t x135 = -29;
	int64_t x136 = -1LL;
	int64_t t25 = -13771917299190LL;

	t25 = (((x133+x134)|x135)*x136);

	if (t25 != 21LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = 3LL;
	uint16_t x138 = 0U;
	uint32_t x140 = UINT32_MAX;
	static volatile int64_t t26 = -174586255LL;

	t26 = (((x137+x138)|x139)*x140);

	if (t26 != -4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x141 = INT8_MAX;
	uint8_t x142 = UINT8_MAX;
	static uint8_t x143 = 1U;
	volatile uint16_t x144 = 81U;
	int32_t t27 = -3412;

	t27 = (((x141+x142)|x143)*x144);

	if (t27 != 31023) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = -12292;
	int32_t x146 = -5906187;
	uint32_t x147 = 22U;
	uint64_t x148 = 503790323431055LLU;
	volatile uint64_t t28 = 1550668LLU;

	t28 = (((x145+x146)|x147)*x148);

	if (t28 != 3479932713731306489LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x149 = 2U;
	uint8_t x150 = 0U;
	uint8_t x151 = 12U;
	volatile int16_t x152 = INT16_MAX;

	t29 = (((x149+x150)|x151)*x152);

	if (t29 != 458738) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MIN;
	volatile int32_t x162 = 447;
	uint8_t x164 = UINT8_MAX;

	t30 = (((x161+x162)|x163)*x164);

	if (t30 != -8225535) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = 9013979108994LL;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 2859U;
	int64_t t31 = 6484273729LL;

	t31 = (((x165+x166)|x167)*x168);

	if (t31 != -30368298LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x169 = 14962U;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 3U;
	static volatile int32_t t32 = 420251;

	t32 = (((x169+x170)|x171)*x172);

	if (t32 != 50637420) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x173 = 20;
	int32_t x174 = 693468;
	int16_t x176 = 1;
	volatile int32_t t33 = -348043868;

	t33 = (((x173+x174)|x175)*x176);

	if (t33 != 693503) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x178 = 2470;
	int8_t x179 = -1;
	int16_t x180 = INT16_MAX;
	volatile int32_t t34 = 0;

	t34 = (((x177+x178)|x179)*x180);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	volatile int32_t t35 = 15027837;

	t35 = (((x181+x182)|x183)*x184);

	if (t35 != -65535) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = -1584005529232LL;
	static uint32_t x186 = 1710377U;
	int8_t x187 = -51;
	static int16_t x188 = -39;
	volatile int64_t t36 = -13320599000LL;

	t36 = (((x185+x186)|x187)*x188);

	if (t36 != 1365LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = UINT32_MAX;
	static volatile uint32_t x194 = 247768U;
	volatile int16_t x196 = 51;
	uint32_t t37 = 59721978U;

	t37 = (((x193+x194)|x195)*x196);

	if (t37 != 12636117U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x197 = -7;
	int16_t x200 = INT16_MIN;
	volatile uint32_t t38 = 6U;

	t38 = (((x197+x198)|x199)*x200);

	if (t38 != 2424832U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 131722059LLU;
	int32_t x202 = -106647;
	int64_t x204 = -191487673371LL;
	volatile uint64_t t39 = 114501060878416433LLU;

	t39 = (((x201+x202)|x203)*x204);

	if (t39 != 14553063176196LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x205 = INT32_MAX;
	uint64_t x207 = 1581LLU;
	static uint16_t x208 = UINT16_MAX;

	t40 = (((x205+x206)|x207)*x208);

	if (t40 != 140735323898115LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = INT32_MIN;
	static int8_t x211 = -25;
	volatile uint8_t x212 = 66U;
	int32_t t41 = 1;

	t41 = (((x209+x210)|x211)*x212);

	if (t41 != -66) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x213 = -1;
	int32_t x214 = -111440;
	static uint64_t x216 = 6951894413LLU;
	volatile uint64_t t42 = 7280334624472LLU;

	t42 = (((x213+x214)|x215)*x216);

	if (t42 != 18446743510606104163LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = 3U;
	uint64_t x218 = 132LLU;
	volatile uint64_t t43 = 970625859304678LLU;

	t43 = (((x217+x218)|x219)*x220);

	if (t43 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = 28U;
	volatile int32_t x222 = INT32_MAX;
	int64_t x223 = 365365740LL;
	int64_t x224 = -1LL;
	static volatile int64_t t44 = -17LL;

	t44 = (((x221+x222)|x223)*x224);

	if (t44 != -2512849407LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 1013LLU;
	uint32_t x226 = 101951U;
	uint16_t x228 = UINT16_MAX;
	volatile uint64_t t45 = 1146171189616LLU;

	t45 = (((x225+x226)|x227)*x228);

	if (t45 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 14U;
	static int64_t x230 = 246215950622LL;
	int32_t x231 = -2058704;
	int64_t t46 = -1147913724266550LL;

	t46 = (((x229+x230)|x231)*x232);

	if (t46 != 9117767674145582992LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = 200124647;
	static int16_t x243 = 6921;
	int16_t x244 = -6;
	volatile int32_t t47 = -18;

	t47 = (((x241+x242)|x243)*x244);

	if (t47 != -1200776982) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 25553085694LLU;
	volatile uint64_t t48 = 2265050044458630451LLU;

	t48 = (((x245+x246)|x247)*x248);

	if (t48 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x258 = INT8_MAX;
	volatile int32_t x259 = -975576736;
	int8_t x260 = INT8_MIN;

	t49 = (((x257+x258)|x259)*x260);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x264 = 0U;

	t50 = (((x261+x262)|x263)*x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t51 = 11318434172LLU;

	t51 = (((x269+x270)|x271)*x272);

	if (t51 != 5100313886141186177LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x273 = -621392338;
	int64_t x274 = -413LL;
	static uint64_t x275 = 19700LLU;
	int32_t x276 = 27;

	t52 = (((x273+x274)|x275)*x276);

	if (t52 != 18446744056931950039LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x278 = 1372392600136515LLU;
	int16_t x279 = 426;
	static int64_t x280 = -1LL;
	uint64_t t53 = 13011904793LLU;

	t53 = (((x277+x278)|x279)*x280);

	if (t53 != 18445371681109414934LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = 31228;
	int64_t x284 = INT64_MIN;
	uint64_t t54 = 81932224943LLU;

	t54 = (((x281+x282)|x283)*x284);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x290 = -1;
	int32_t x292 = INT32_MIN;
	uint32_t t55 = 43U;

	t55 = (((x289+x290)|x291)*x292);

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = -21;
	uint32_t x294 = 220656U;
	int32_t x295 = -168;
	int16_t x296 = INT16_MIN;
	static volatile uint32_t t56 = 4708U;

	t56 = (((x293+x294)|x295)*x296);

	if (t56 != 1212416U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = 1;
	volatile int8_t x298 = INT8_MIN;
	static uint8_t x300 = 78U;
	int64_t t57 = 1435LL;

	t57 = (((x297+x298)|x299)*x300);

	if (t57 != -9438LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x309 = INT32_MIN;
	static int32_t x310 = 25;
	int8_t x312 = -1;
	volatile int32_t t58 = 24383;

	t58 = (((x309+x310)|x311)*x312);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = 3634701630907473LL;
	int32_t x314 = -371584;
	int32_t x315 = 5;
	uint16_t x316 = 20U;
	int64_t t59 = -58342192LL;

	t59 = (((x313+x314)|x315)*x316);

	if (t59 != 72694032610717860LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -1;
	static uint16_t x319 = 36U;
	static int64_t x320 = -419060LL;
	int64_t t60 = -986LL;

	t60 = (((x317+x318)|x319)*x320);

	if (t60 != 838120LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x324 = 88U;
	int64_t t61 = 1LL;

	t61 = (((x321+x322)|x323)*x324);

	if (t61 != -88LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x326 = -1;
	uint64_t x327 = 1972897640002LLU;
	volatile int16_t x328 = INT16_MIN;
	volatile uint64_t t62 = 1750LLU;

	t62 = (((x325+x326)|x327)*x328);

	if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x329 = INT32_MAX;
	static volatile int8_t x331 = INT8_MIN;

	t63 = (((x329+x330)|x331)*x332);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x333 = -1;
	uint16_t x334 = 14777U;
	uint32_t x336 = 33U;

	t64 = (((x333+x334)|x335)*x336);

	if (t64 != 489720U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = 810558303470375187LL;
	uint16_t x339 = 1475U;
	int8_t x340 = INT8_MAX;
	static uint64_t t65 = 1169220212491604439LLU;

	t65 = (((x337+x338)|x339)*x340);

	if (t65 != 10707184172190045101LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 1587U;
	int64_t t66 = -13095328LL;

	t66 = (((x341+x342)|x343)*x344);

	if (t66 != -51994881LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -1;
	int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;
	int64_t t67 = 386986LL;

	t67 = (((x361+x362)|x363)*x364);

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x365 = 37U;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	volatile int8_t x368 = 1;
	volatile int32_t t68 = 457;

	t68 = (((x365+x366)|x367)*x368);

	if (t68 != -32731) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x370 = 3836945955811LLU;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 1443496U;
	volatile uint64_t t69 = 3261425791750LLU;

	t69 = (((x369+x370)|x371)*x372);

	if (t69 != 5535516255373401848LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x373 = 5599515LLU;
	uint16_t x374 = 126U;
	uint16_t x375 = UINT16_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t70 = 137502695LLU;

	t70 = (((x373+x374)|x375)*x376);

	if (t70 != 24206843696513025LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x379 = 56;
	static int64_t x380 = -1LL;
	volatile int64_t t71 = 1451183853LL;

	t71 = (((x377+x378)|x379)*x380);

	if (t71 != -56LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = 7109674LL;
	int64_t x382 = INT64_MIN;
	static int8_t x383 = -1;
	uint8_t x384 = 1U;
	static volatile int64_t t72 = -2399615225953803LL;

	t72 = (((x381+x382)|x383)*x384);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = 20U;
	static int16_t x392 = -1;
	int32_t t73 = 7475169;

	t73 = (((x389+x390)|x391)*x392);

	if (t73 != 129) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MIN;
	static volatile int64_t t74 = 11819545LL;

	t74 = (((x393+x394)|x395)*x396);

	if (t74 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x397 = 33U;
	static uint64_t x398 = 31913LLU;
	int32_t x399 = 95;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t75 = 822601LLU;

	t75 = (((x397+x398)|x399)*x400);

	if (t75 != 18446675425099776000LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x401 = UINT64_MAX;
	int8_t x402 = -1;
	static volatile int32_t x404 = -1;

	t76 = (((x401+x402)|x403)*x404);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x413 = 137;
	static uint32_t x415 = 3480U;
	int8_t x416 = INT8_MIN;
	volatile uint32_t t77 = 456894U;

	t77 = (((x413+x414)|x415)*x416);

	if (t77 != 4290327552U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x421 = INT16_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	uint64_t x423 = UINT64_MAX;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t78 = 6518186395162606LLU;

	t78 = (((x421+x422)|x423)*x424);

	if (t78 != 32768LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = 295330U;
	int8_t x427 = -1;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t79 = 1471LLU;

	t79 = (((x425+x426)|x427)*x428);

	if (t79 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x431 = 24780U;
	static int8_t x432 = INT8_MIN;
	uint64_t t80 = 7842204878671LLU;

	t80 = (((x429+x430)|x431)*x432);

	if (t80 != 18377810942097660288LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x434 = INT16_MAX;
	uint16_t x435 = 2974U;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t81 = 26674683LLU;

	t81 = (((x433+x434)|x435)*x436);

	if (t81 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x438 = INT32_MIN;
	uint16_t x439 = 21U;
	uint64_t x440 = 260572920077683500LLU;
	volatile uint64_t t82 = 7313LLU;

	t82 = (((x437+x438)|x439)*x440);

	if (t82 != 11725610608877302996LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x441 = 14;
	int32_t x442 = -1;
	int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = UINT32_MAX;

	t83 = (((x441+x442)|x443)*x444);

	if (t83 != 32755U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x445 = UINT8_MAX;
	uint64_t x446 = 57LLU;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 24472429U;
	uint64_t t84 = 848258LLU;

	t84 = (((x445+x446)|x447)*x448);

	if (t84 != 105108282184209555LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x449 = INT16_MIN;
	static uint32_t x450 = 9U;
	int16_t x451 = INT16_MIN;
	int64_t x452 = 1LL;
	int64_t t85 = 9162496170923061LL;

	t85 = (((x449+x450)|x451)*x452);

	if (t85 != 4294934537LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x457 = INT32_MAX;
	uint64_t x458 = 333058975771LLU;
	int64_t x459 = INT64_MIN;
	static uint64_t x460 = 156332734LLU;

	t86 = (((x457+x458)|x459)*x460);

	if (t86 != 15510254107856885580LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x461 = 23421LLU;
	int32_t x462 = 17901;
	static volatile uint16_t x463 = 481U;
	volatile int64_t x464 = INT64_MIN;

	t87 = (((x461+x462)|x463)*x464);

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x465 = UINT16_MAX;
	int16_t x466 = 1;
	uint64_t x467 = 13454698433137LLU;
	static volatile uint32_t x468 = UINT32_MAX;

	t88 = (((x465+x466)|x467)*x468);

	if (t88 != 12287295552843593103LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x469 = -1;
	static int8_t x471 = INT8_MIN;
	uint64_t x472 = 2053357400270LLU;
	volatile uint64_t t89 = 19188776284450LLU;

	t89 = (((x469+x470)|x471)*x472);

	if (t89 != 18446739966994751076LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x482 = INT64_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MAX;
	volatile uint64_t t90 = 202911LLU;

	t90 = (((x481+x482)|x483)*x484);

	if (t90 != 18446714182884669023LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x485 = 1;
	volatile int8_t x486 = 0;
	int8_t x487 = -1;
	static volatile uint64_t x488 = UINT64_MAX;
	static volatile uint64_t t91 = 8307009205124313271LLU;

	t91 = (((x485+x486)|x487)*x488);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x489 = 3;
	volatile int8_t x490 = -5;
	uint8_t x491 = 3U;
	static int32_t x492 = -13604552;
	int32_t t92 = -91255;

	t92 = (((x489+x490)|x491)*x492);

	if (t92 != 13604552) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x494 = -1347;
	int32_t x495 = INT32_MIN;
	int64_t t93 = 31627371735188486LL;

	t93 = (((x493+x494)|x495)*x496);

	if (t93 != 1831260980LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x506 = -2LL;
	uint32_t x507 = UINT32_MAX;
	static volatile int64_t t94 = 1501792259704LL;

	t94 = (((x505+x506)|x507)*x508);

	if (t94 != -1566294749462079303LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x509 = UINT8_MAX;
	static int64_t x510 = -1441LL;
	int8_t x511 = -1;
	volatile int64_t t95 = -4750LL;

	t95 = (((x509+x510)|x511)*x512);

	if (t95 != 128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x525 = 1;
	uint8_t x526 = 26U;
	int16_t x527 = -1;
	static int64_t x528 = -63924LL;
	int64_t t96 = 5127LL;

	t96 = (((x525+x526)|x527)*x528);

	if (t96 != 63924LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x529 = 48;
	uint16_t x530 = UINT16_MAX;
	static int64_t x532 = INT64_MAX;
	int64_t t97 = -59270LL;

	t97 = (((x529+x530)|x531)*x532);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x533 = -1LL;
	uint16_t x534 = 2U;
	uint64_t x535 = 250902LLU;
	static int8_t x536 = INT8_MIN;
	static uint64_t t98 = 7901384551461983LLU;

	t98 = (((x533+x534)|x535)*x536);

	if (t98 != 18446744073677436032LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x537 = INT16_MAX;
	int64_t x538 = -1LL;
	int16_t x539 = INT16_MAX;
	int16_t x540 = -1;
	static volatile int64_t t99 = -91299873358LL;

	t99 = (((x537+x538)|x539)*x540);

	if (t99 != -32767LL) { NG(); } else { ; }
	
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

