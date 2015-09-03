#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
volatile int16_t x6 = 15;
uint8_t x19 = 1U;
int64_t x22 = 1678961423LL;
volatile uint32_t x26 = UINT32_MAX;
volatile int64_t t5 = -104365902710755690LL;
static volatile uint64_t x39 = UINT64_MAX;
int32_t x47 = -460;
uint64_t t10 = 131522422LLU;
int16_t x55 = -1;
uint32_t t11 = 118374U;
static int64_t x62 = INT64_MAX;
int16_t x65 = -1;
static int16_t x67 = INT16_MIN;
volatile uint64_t x72 = 809267LLU;
volatile int64_t t15 = 180LL;
uint64_t x86 = 20791548498140LLU;
static uint16_t x89 = 0U;
int32_t x94 = INT32_MAX;
volatile int16_t x99 = INT16_MIN;
int16_t x110 = INT16_MIN;
volatile uint64_t t22 = 6081098532723LLU;
volatile int32_t x121 = INT32_MIN;
static volatile int8_t x122 = -57;
static int8_t x123 = INT8_MAX;
uint64_t x125 = UINT64_MAX;
volatile uint64_t t25 = 2LLU;
static int16_t x134 = 1;
volatile uint16_t x146 = 8U;
volatile int64_t x147 = -15430625658713LL;
int32_t x163 = 972;
volatile int8_t x164 = INT8_MAX;
static volatile uint64_t t31 = 10495015LLU;
uint16_t x165 = 3U;
static int16_t x166 = -1;
static int64_t x169 = 13636420108056700LL;
static uint64_t t34 = 1782LLU;
int8_t x178 = -1;
static uint32_t x183 = UINT32_MAX;
int32_t x184 = INT32_MIN;
static uint64_t x201 = UINT64_MAX;
static uint32_t x202 = 9U;
int16_t x220 = -1;
uint8_t x228 = 2U;
volatile int32_t t44 = 179018;
static int8_t x235 = INT8_MAX;
int64_t t47 = -8495848239710195LL;
static uint64_t t48 = 129236875322110LLU;
volatile uint32_t x255 = 29579616U;
uint64_t t49 = 292451970075965LLU;
static uint64_t x259 = 46909722252LLU;
uint64_t x261 = 102778566LLU;
static int64_t x263 = -1LL;
static int8_t x268 = INT8_MAX;
static int32_t x274 = 464;
int32_t t53 = INT32_MAX;
int8_t x277 = INT8_MAX;
int8_t x282 = INT8_MIN;
volatile int64_t x290 = INT64_MAX;
int8_t x308 = INT8_MIN;
volatile int16_t x309 = INT16_MIN;
int64_t x312 = 665673079LL;
volatile uint16_t x313 = UINT16_MAX;
volatile uint64_t t62 = 105146LLU;
static int64_t x323 = INT64_MIN;
volatile int64_t t64 = -19243742982213836LL;
uint32_t x329 = 976U;
int64_t x337 = -1LL;
int32_t x340 = -1;
volatile int64_t x349 = -1LL;
volatile int32_t x350 = INT32_MIN;
volatile uint16_t x352 = 0U;
volatile uint64_t x354 = 1343764LLU;
int64_t t72 = 1522407940LL;
int32_t t73 = 13801;
uint64_t x374 = 37131162842LLU;
int16_t x375 = -1;
uint64_t t74 = 132112987532045459LLU;
volatile int64_t x381 = 31431670780094233LL;
static int32_t x382 = INT32_MIN;
int32_t x387 = INT32_MAX;
int64_t x393 = INT64_MAX;
int8_t x394 = INT8_MIN;
int16_t x407 = INT16_MIN;
static uint64_t t81 = 76LLU;
int8_t x412 = INT8_MIN;
static int8_t x445 = -1;
int32_t x446 = -1;
int32_t t88 = -1;
static uint16_t x464 = UINT16_MAX;
uint64_t x476 = 253889649371LLU;
int16_t x478 = INT16_MIN;
uint16_t x479 = 948U;
int64_t x480 = -1533299961023LL;
static int8_t x485 = 14;
static uint8_t x486 = UINT8_MAX;
int16_t x487 = INT16_MAX;
uint8_t x492 = UINT8_MAX;
int8_t x504 = -1;


void f0(void) {
	static int16_t x1 = 691;
	int64_t x2 = -1LL;
	static int32_t x3 = 22798;
	static volatile int64_t t0 = 2274806986200499LL;

	t0 = (((x1|x2)&x3)*x4);

	if (t0 != -2918144LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x7 = 99;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -320;

	t1 = (((x5|x6)&x7)*x8);

	if (t1 != 6487965) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	volatile int64_t x14 = INT64_MAX;
	uint8_t x15 = UINT8_MAX;
	uint64_t x16 = 829LLU;
	uint64_t t2 = 974016726LLU;

	t2 = (((x13|x14)&x15)*x16);

	if (t2 != 211395LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 801331U;
	int64_t x18 = INT64_MAX;
	int32_t x20 = -1;
	static volatile int64_t t3 = 8058716127990659LL;

	t3 = (((x17|x18)&x19)*x20);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 15U;
	static uint64_t x23 = UINT64_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile uint64_t t4 = 34833080869213523LLU;

	t4 = (((x21|x22)&x23)*x24);

	if (t4 != 110030736856305LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -87765229735116886LL;
	static uint32_t x27 = UINT32_MAX;
	volatile uint32_t x28 = 650856U;

	t5 = (((x25|x26)&x27)*x28);

	if (t5 != 2795405233754520LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint16_t x30 = 2U;
	static int64_t x31 = INT64_MAX;
	volatile int8_t x32 = 0;
	volatile int64_t t6 = 7LL;

	t6 = (((x29|x30)&x31)*x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 6U;
	int32_t x34 = 1;
	static volatile int8_t x35 = INT8_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t7 = 141402184586LL;

	t7 = (((x33|x34)&x35)*x36);

	if (t7 != -7LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 12;
	int32_t x38 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t8 = 42LLU;

	t8 = (((x37|x38)&x39)*x40);

	if (t8 != 4611685992657584128LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = INT32_MIN;
	volatile int64_t x46 = 760991017LL;
	int32_t x48 = -39784;
	static int64_t t9 = 3LL;

	t9 = (((x45|x46)&x47)*x48);

	if (t9 != 55160233374464LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = 16992LLU;
	int64_t x51 = -3087110916343LL;
	volatile int32_t x52 = INT32_MIN;

	t10 = (((x49|x50)&x51)*x52);

	if (t10 != 9223370937343148032LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 463U;
	uint32_t x54 = 258626948U;
	volatile uint16_t x56 = UINT16_MAX;

	t11 = (((x53|x54)&x55)*x56);

	if (t11 != 1181002289U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	int64_t t12 = -1178172557307LL;

	t12 = (((x61|x62)&x63)*x64);

	if (t12 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MIN;
	int64_t x68 = -1LL;
	int64_t t13 = 5600LL;

	t13 = (((x65|x66)&x67)*x68);

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static volatile int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile uint64_t t14 = 141701034LLU;

	t14 = (((x69|x70)&x71)*x72);

	if (t14 != 18446744073605965440LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = 1;
	int32_t x76 = -1;

	t15 = (((x73|x74)&x75)*x76);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x85 = 1585140U;
	int32_t x87 = -89900531;
	int16_t x88 = -1;
	volatile uint64_t t16 = 88287884101962960LLU;

	t16 = (((x85|x86)&x87)*x88);

	if (t16 != 18446723282166859252LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x90 = -1;
	volatile uint8_t x91 = 17U;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t17 = 3U;

	t17 = (((x89|x90)&x91)*x92);

	if (t17 != 4294967279U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = -1LL;
	int32_t x95 = -163;
	uint64_t x96 = 280375938LLU;
	static volatile uint64_t t18 = 9719627494LLU;

	t18 = (((x93|x94)&x95)*x96);

	if (t18 != 18446744028008273722LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 2834736202LLU;
	int64_t x100 = -56393LL;
	volatile uint64_t t19 = 756595682940LLU;

	t19 = (((x97|x98)&x99)*x100);

	if (t19 != 18446501869466714112LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x101 = INT8_MIN;
	int8_t x102 = 1;
	int16_t x103 = -1;
	int8_t x104 = -1;
	volatile int32_t t20 = 0;

	t20 = (((x101|x102)&x103)*x104);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 335U;
	volatile int8_t x111 = -40;
	int16_t x112 = -5020;
	static volatile int32_t t21 = 3830400;

	t21 = (((x109|x110)&x111)*x112);

	if (t21 != 162848800) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	uint64_t x115 = 2087887LLU;
	uint8_t x116 = 80U;

	t22 = (((x113|x114)&x115)*x116);

	if (t22 != 167030960LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x117 = 117U;
	int8_t x118 = INT8_MAX;
	volatile int16_t x119 = 6862;
	int8_t x120 = 4;
	volatile int32_t t23 = 265395285;

	t23 = (((x117|x118)&x119)*x120);

	if (t23 != 312) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x124 = 1779;
	static volatile int32_t t24 = -39102625;

	t24 = (((x121|x122)&x123)*x124);

	if (t24 != 126309) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x126 = 0U;
	static uint64_t x127 = 6792146LLU;
	volatile uint8_t x128 = 0U;

	t25 = (((x125|x126)&x127)*x128);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x133 = -87218LL;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = 6450;
	static volatile int64_t t26 = 24096932952993291LL;

	t26 = (((x133|x134)&x135)*x136);

	if (t26 != -634060800LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = -434225541977LL;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = 9857;
	int8_t x140 = INT8_MIN;
	int64_t t27 = -15903742402169LL;

	t27 = (((x137|x138)&x139)*x140);

	if (t27 != -1261696LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x141 = -1;
	int64_t x142 = -1LL;
	int8_t x143 = -1;
	volatile int8_t x144 = -52;
	static volatile int64_t t28 = -16266LL;

	t28 = (((x141|x142)&x143)*x144);

	if (t28 != 52LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x145 = 8212110967LL;
	int32_t x148 = -1;
	volatile int64_t t29 = -3066711LL;

	t29 = (((x145|x146)&x147)*x148);

	if (t29 != -5386065959LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = -1;
	uint8_t x154 = 1U;
	int32_t x155 = INT32_MAX;
	static uint64_t x156 = 303442812818LLU;
	uint64_t t30 = 44479306LLU;

	t30 = (((x153|x154)&x155)*x156);

	if (t30 != 6002435746502680686LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x161 = 57LLU;
	volatile int64_t x162 = INT64_MIN;

	t31 = (((x161|x162)&x163)*x164);

	if (t31 != 1016LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x167 = INT32_MIN;
	volatile uint64_t x168 = 358363506668024118LLU;
	volatile uint64_t t32 = 1221243LLU;

	t32 = (((x165|x166)&x167)*x168);

	if (t32 != 741800247121936384LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x170 = -1LL;
	int8_t x171 = 0;
	volatile uint64_t x172 = 213LLU;
	uint64_t t33 = 90232722732LLU;

	t33 = (((x169|x170)&x171)*x172);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = -1LL;
	uint16_t x175 = 14U;
	uint64_t x176 = 2223291081LLU;

	t34 = (((x173|x174)&x175)*x176);

	if (t34 != 31126075134LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x179 = 38U;
	int16_t x180 = INT16_MIN;
	static volatile uint32_t t35 = 251U;

	t35 = (((x177|x178)&x179)*x180);

	if (t35 != 4293722112U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = -1LL;
	int64_t t36 = 9177665LL;

	t36 = (((x181|x182)&x183)*x184);

	if (t36 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = 57;
	int64_t x190 = INT64_MIN;
	static volatile uint64_t x191 = 0LLU;
	int64_t x192 = INT64_MAX;
	static uint64_t t37 = 223LLU;

	t37 = (((x189|x190)&x191)*x192);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = 4776222;
	int16_t x198 = 299;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t38 = 1773425245U;

	t38 = (((x197|x198)&x199)*x200);

	if (t38 != 4290215936U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x203 = 0;
	uint8_t x204 = 3U;
	volatile uint64_t t39 = 3618329428LLU;

	t39 = (((x201|x202)&x203)*x204);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x205 = 227U;
	volatile int64_t x206 = INT64_MIN;
	static volatile uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	static uint64_t t40 = 1LLU;

	t40 = (((x205|x206)&x207)*x208);

	if (t40 != 18446744073709522560LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MAX;
	volatile uint16_t x215 = 190U;
	int16_t x216 = INT16_MIN;
	static int64_t t41 = 2663LL;

	t41 = (((x213|x214)&x215)*x216);

	if (t41 != -2031616LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = 15;
	uint64_t x218 = 125419099LLU;
	uint16_t x219 = 1U;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x217|x218)&x219)*x220);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x221 = -1LL;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MIN;
	int64_t x224 = 1377LL;
	int64_t t43 = -389081LL;

	t43 = (((x221|x222)&x223)*x224);

	if (t43 != -176256LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -2;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;

	t44 = (((x225|x226)&x227)*x228);

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = INT16_MIN;
	uint8_t x230 = 9U;
	uint32_t x231 = 1770799U;
	int32_t x232 = -55;
	volatile uint32_t t45 = 225983U;

	t45 = (((x229|x230)&x231)*x232);

	if (t45 != 4197645841U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x233 = UINT8_MAX;
	static int16_t x234 = -1154;
	volatile int16_t x236 = -1;
	static volatile int32_t t46 = -10800276;

	t46 = (((x233|x234)&x235)*x236);

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = INT32_MIN;
	volatile int64_t x242 = INT64_MIN;
	uint16_t x243 = 12929U;
	int64_t x244 = -10847928035662LL;

	t47 = (((x241|x242)&x243)*x244);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MAX;
	static uint8_t x250 = 100U;
	uint64_t x251 = 33142LLU;
	volatile int32_t x252 = INT32_MIN;

	t48 = (((x249|x250)&x251)*x252);

	if (t48 != 18446743270550667264LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x253 = 2LLU;
	uint64_t x254 = 659707725LLU;
	uint8_t x256 = 0U;

	t49 = (((x253|x254)&x255)*x256);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x257 = INT8_MIN;
	volatile int64_t x258 = INT64_MIN;
	uint64_t x260 = 228703562268972LLU;
	uint64_t t50 = 2417852871818139LLU;

	t50 = (((x257|x258)&x259)*x260);

	if (t50 != 15588995429985091072LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x262 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	uint64_t t51 = 1453236930773386162LLU;

	t51 = (((x261|x262)&x263)*x264);

	if (t51 != 58LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = INT16_MAX;
	volatile uint32_t x266 = 0U;
	volatile int16_t x267 = 7;
	static uint32_t t52 = 30894985U;

	t52 = (((x265|x266)&x267)*x268);

	if (t52 != 889U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = -1;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = 1U;

	t53 = (((x273|x274)&x275)*x276);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x278 = 6;
	int64_t x279 = -1861412793949142LL;
	int16_t x280 = INT16_MIN;
	volatile int64_t t54 = 51799970487822LL;

	t54 = (((x277|x278)&x279)*x280);

	if (t54 != -1376256LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = -1;
	uint32_t x283 = UINT32_MAX;
	volatile int64_t x284 = 15LL;
	int64_t t55 = 1LL;

	t55 = (((x281|x282)&x283)*x284);

	if (t55 != 64424509425LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = 6;
	uint16_t x286 = 14654U;
	int8_t x287 = INT8_MAX;
	static uint64_t x288 = 1822243963258LLU;
	volatile uint64_t t56 = 48LLU;

	t56 = (((x285|x286)&x287)*x288);

	if (t56 != 112979125721996LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x289 = 20U;
	static volatile uint16_t x291 = 0U;
	int32_t x292 = -1;
	static int64_t t57 = -4019772LL;

	t57 = (((x289|x290)&x291)*x292);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = 1616135611709172755LL;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MAX;
	uint8_t x300 = 9U;
	int64_t t58 = -3705047290099LL;

	t58 = (((x297|x298)&x299)*x300);

	if (t58 != 294903LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x301 = 764U;
	static int32_t x302 = 0;
	static volatile uint32_t x303 = 256955U;
	uint32_t x304 = 780802U;
	volatile uint32_t t59 = 196408094U;

	t59 = (((x301|x302)&x303)*x304);

	if (t59 != 543438192U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = -1;
	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MIN;
	volatile int32_t t60 = -1;

	t60 = (((x305|x306)&x307)*x308);

	if (t60 != 4194304) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x310 = INT32_MIN;
	static uint8_t x311 = 0U;
	static volatile int64_t t61 = -6425467539623199LL;

	t61 = (((x309|x310)&x311)*x312);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x314 = -1;
	static uint64_t x315 = 161630654825287LLU;
	volatile int32_t x316 = INT32_MIN;

	t62 = (((x313|x314)&x315)*x316);

	if (t62 != 13194982156503351296LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = INT32_MAX;
	static uint32_t x318 = 5465528U;
	int64_t x319 = -1LL;
	static volatile int8_t x320 = 2;
	volatile int64_t t63 = 2448541LL;

	t63 = (((x317|x318)&x319)*x320);

	if (t63 != 4294967294LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = INT8_MAX;
	uint8_t x322 = 3U;
	static uint32_t x324 = UINT32_MAX;

	t64 = (((x321|x322)&x323)*x324);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x330 = 5662812LLU;
	volatile int32_t x331 = 13473194;
	uint8_t x332 = 121U;
	volatile uint64_t t65 = 1855381957927250LLU;

	t65 = (((x329|x330)&x331)*x332);

	if (t65 != 539277640LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x333 = -1LL;
	volatile int32_t x334 = INT32_MIN;
	int32_t x335 = -744425307;
	uint64_t x336 = 2168979013009LLU;
	volatile uint64_t t66 = 139124LLU;

	t66 = (((x333|x334)&x335)*x336);

	if (t66 != 8670610850658723445LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MAX;
	volatile int64_t t67 = 26005603733909LL;

	t67 = (((x337|x338)&x339)*x340);

	if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = 4;
	static uint8_t x343 = 5U;
	int32_t x344 = -1;
	int32_t t68 = 752;

	t68 = (((x341|x342)&x343)*x344);

	if (t68 != -5) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x345 = INT32_MIN;
	static int32_t x346 = 5;
	volatile int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t69 = 0;

	t69 = (((x345|x346)&x347)*x348);

	if (t69 != -163840) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x351 = INT64_MAX;
	int64_t t70 = 1875206093201890025LL;

	t70 = (((x349|x350)&x351)*x352);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x353 = 92U;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = 700U;
	uint64_t t71 = 99147755129280126LLU;

	t71 = (((x353|x354)&x355)*x356);

	if (t71 != 940685200LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = 1;
	static volatile uint16_t x359 = 16726U;
	int64_t x360 = INT64_MIN;

	t72 = (((x357|x358)&x359)*x360);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x365 = 4U;
	int32_t x366 = INT32_MIN;
	volatile uint16_t x367 = 7315U;
	int32_t x368 = INT32_MAX;

	t73 = (((x365|x366)&x367)*x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = INT64_MIN;
	int8_t x376 = -50;

	t74 = (((x373|x374)&x375)*x376);

	if (t74 != 18446742217151409516LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x377 = UINT16_MAX;
	static int64_t x378 = INT64_MAX;
	static int8_t x379 = INT8_MAX;
	volatile int32_t x380 = INT32_MAX;
	int64_t t75 = 21593LL;

	t75 = (((x377|x378)&x379)*x380);

	if (t75 != 272730423169LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x383 = INT16_MIN;
	uint8_t x384 = UINT8_MAX;
	int64_t t76 = -3LL;

	t76 = (((x381|x382)&x383)*x384);

	if (t76 != -395548753920LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = -1;
	volatile uint32_t x386 = 61782U;
	uint8_t x388 = UINT8_MAX;
	uint32_t t77 = 170U;

	t77 = (((x385|x386)&x387)*x388);

	if (t77 != 2147483393U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	int64_t t78 = 6899412594LL;

	t78 = (((x393|x394)&x395)*x396);

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x397 = -20533;
	int32_t x398 = INT32_MAX;
	volatile uint16_t x399 = 234U;
	int16_t x400 = INT16_MAX;
	volatile int32_t t79 = -3;

	t79 = (((x397|x398)&x399)*x400);

	if (t79 != 7667478) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x401 = INT32_MAX;
	uint64_t x402 = 1966073LLU;
	static volatile int64_t x403 = -3063LL;
	int64_t x404 = 9766LL;
	volatile uint64_t t80 = 6716535LLU;

	t80 = (((x401|x402)&x403)*x404);

	if (t80 != 20972295393110LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x405 = UINT64_MAX;
	int8_t x406 = 0;
	int16_t x408 = INT16_MAX;

	t81 = (((x405|x406)&x407)*x408);

	if (t81 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = UINT8_MAX;
	uint32_t x411 = 3762U;
	uint32_t t82 = 684270165U;

	t82 = (((x409|x410)&x411)*x412);

	if (t82 != 4294944512U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x421 = 3960LLU;
	volatile int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MAX;
	volatile uint64_t t83 = 356629673LLU;

	t83 = (((x421|x422)&x423)*x424);

	if (t83 != 129757320LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x425 = -1;
	int64_t x426 = -1LL;
	static uint32_t x427 = UINT32_MAX;
	int8_t x428 = 10;
	volatile int64_t t84 = 12869925777361LL;

	t84 = (((x425|x426)&x427)*x428);

	if (t84 != 42949672950LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile int64_t x430 = INT64_MIN;
	int64_t x431 = 1LL;
	uint32_t x432 = 1792U;
	int64_t t85 = 18744LL;

	t85 = (((x429|x430)&x431)*x432);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x433 = INT8_MIN;
	uint16_t x434 = UINT16_MAX;
	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = 22U;
	uint32_t t86 = 2751358U;

	t86 = (((x433|x434)&x435)*x436);

	if (t86 != 4294967274U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x437 = 55590U;
	uint32_t x438 = UINT32_MAX;
	int64_t x439 = INT64_MIN;
	int64_t x440 = -2030LL;
	volatile int64_t t87 = 190475444485133421LL;

	t87 = (((x437|x438)&x439)*x440);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 869U;

	t88 = (((x445|x446)&x447)*x448);

	if (t88 != -28475392) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = 6;
	int64_t x458 = INT64_MIN;
	static int32_t x459 = 2781216;
	int8_t x460 = INT8_MAX;
	volatile int64_t t89 = 144922871LL;

	t89 = (((x457|x458)&x459)*x460);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x461 = 5168316167211418546LLU;
	int64_t x462 = INT64_MAX;
	int8_t x463 = -1;
	uint64_t t90 = 2918706LLU;

	t90 = (((x461|x462)&x463)*x464);

	if (t90 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x465 = 114112816796020LLU;
	uint32_t x466 = 351968U;
	int32_t x467 = INT32_MAX;
	int8_t x468 = INT8_MAX;
	static volatile uint64_t t91 = 3459481914877LLU;

	t91 = (((x465|x466)&x467)*x468);

	if (t91 != 251272501772LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x469 = UINT64_MAX;
	uint8_t x470 = UINT8_MAX;
	int8_t x471 = INT8_MIN;
	int16_t x472 = 7903;
	volatile uint64_t t92 = 888785579090LLU;

	t92 = (((x469|x470)&x471)*x472);

	if (t92 != 18446744073708540032LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x473 = -7651LL;
	int16_t x474 = INT16_MIN;
	static int8_t x475 = INT8_MIN;
	volatile uint64_t t93 = 3441201971219211LLU;

	t93 = (((x473|x474)&x475)*x476);

	if (t93 != 18444794201202382336LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x477 = 5149U;
	int64_t t94 = -20LL;

	t94 = (((x477|x478)&x479)*x480);

	if (t94 != -30665999220460LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x481 = INT16_MAX;
	static int16_t x482 = -188;
	int8_t x483 = -1;
	static uint32_t x484 = UINT32_MAX;
	volatile uint32_t t95 = 5159752U;

	t95 = (((x481|x482)&x483)*x484);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x488 = -1;
	volatile int32_t t96 = 14957251;

	t96 = (((x485|x486)&x487)*x488);

	if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x489 = -205;
	uint64_t x490 = UINT64_MAX;
	int16_t x491 = INT16_MIN;
	static volatile uint64_t t97 = 1LLU;

	t97 = (((x489|x490)&x491)*x492);

	if (t97 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x497 = INT16_MIN;
	uint64_t x498 = 237181700793LLU;
	volatile int16_t x499 = -453;
	int32_t x500 = INT32_MIN;
	volatile uint64_t t98 = 28544709LLU;

	t98 = (((x497|x498)&x499)*x500);

	if (t98 != 64748779470848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x501 = INT8_MAX;
	int64_t x502 = 1LL;
	uint16_t x503 = 6756U;
	volatile int64_t t99 = -6091421134LL;

	t99 = (((x501|x502)&x503)*x504);

	if (t99 != -100LL) { NG(); } else { ; }
	
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

