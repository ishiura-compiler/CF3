#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 3U;
uint32_t x8 = 245760125U;
int16_t x19 = INT16_MIN;
uint64_t x22 = UINT64_MAX;
static uint64_t t4 = UINT64_MAX;
int64_t x26 = INT64_MIN;
volatile uint64_t t5 = 125560379275LLU;
uint32_t x33 = 354U;
static volatile int16_t x34 = 721;
int8_t x37 = INT8_MIN;
int32_t x44 = INT32_MAX;
int32_t x50 = INT32_MAX;
int16_t x58 = -1;
static uint8_t x59 = UINT8_MAX;
int32_t x60 = INT32_MIN;
int16_t x63 = INT16_MIN;
volatile int32_t t12 = 131436555;
int8_t x67 = INT8_MIN;
int8_t x74 = INT8_MAX;
int32_t x76 = -1;
volatile uint64_t x82 = 3939LLU;
int64_t x83 = INT64_MIN;
volatile uint64_t t15 = 508LLU;
static volatile int32_t t16 = -7437909;
int32_t x97 = -900793;
volatile int64_t x100 = 426909584LL;
int16_t x102 = INT16_MIN;
int32_t x109 = INT32_MAX;
uint8_t x115 = 1U;
int64_t t21 = -15137951LL;
int8_t x125 = INT8_MIN;
int8_t x128 = -1;
volatile int64_t t23 = 1993LL;
int64_t x133 = -13LL;
volatile int16_t x140 = 19;
static volatile uint32_t t26 = 151U;
int16_t x145 = -330;
uint32_t x150 = 16218U;
volatile uint64_t x159 = UINT64_MAX;
int8_t x161 = INT8_MAX;
volatile int64_t t31 = -177LL;
int8_t x167 = -1;
static volatile int64_t x170 = 22LL;
int64_t x181 = -1908263233LL;
static uint32_t x183 = 313052U;
static int8_t x184 = 7;
uint32_t x189 = UINT32_MAX;
uint8_t x190 = 89U;
int64_t x192 = INT64_MIN;
uint32_t x198 = 2781588U;
volatile int64_t t38 = 403357555978578399LL;
int64_t t39 = -404552326719292216LL;
volatile int32_t x205 = 852322;
uint8_t x213 = 25U;
uint32_t x215 = 25U;
static int64_t x222 = 20001LL;
uint64_t x246 = UINT64_MAX;
volatile uint64_t t47 = 4146669783887229000LLU;
int8_t x253 = -40;
uint32_t x274 = UINT32_MAX;
uint8_t x281 = 4U;
volatile uint8_t x282 = UINT8_MAX;
int64_t x283 = -1LL;
int32_t x284 = INT32_MIN;
volatile int64_t x287 = -1LL;
volatile uint64_t x292 = UINT64_MAX;
volatile uint64_t t56 = 1786360058760296684LLU;
static uint32_t x328 = 3U;
volatile int8_t x340 = INT8_MIN;
static uint32_t x341 = 1368U;
int16_t x358 = 0;
static int16_t x366 = INT16_MIN;
static uint32_t x368 = 15U;
int8_t x369 = -1;
int8_t x375 = -1;
uint16_t x390 = 3854U;
uint8_t x392 = 0U;
int64_t x393 = -1LL;
uint8_t x395 = 17U;
static volatile int16_t x396 = INT16_MIN;
int64_t t71 = 25LL;
volatile uint32_t t72 = 98687U;
static int8_t x415 = 2;
uint64_t x419 = 480829LLU;
volatile uint64_t t76 = 148LLU;
static int32_t x424 = INT32_MIN;
uint8_t x450 = 0U;
int16_t x452 = INT16_MIN;
int8_t x461 = 0;
uint32_t t85 = 1597501169U;
volatile uint16_t x475 = 106U;
volatile int16_t x476 = INT16_MAX;
int8_t x485 = -57;
volatile uint64_t x486 = 280294261102959739LLU;
int64_t x491 = 59656447LL;
volatile int64_t t91 = 510961LL;
uint8_t x543 = UINT8_MAX;
int32_t x547 = INT32_MIN;
uint64_t t98 = 150043304075153358LLU;


void f0(void) {
	volatile int16_t x1 = 15488;
	int8_t x2 = -1;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -1;
	int64_t t0 = -380169671848925650LL;

	t0 = (((x1*x2)%x3)*x4);

	if (t0 != 15488LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x6 = 0;
	volatile uint32_t t1 = 909U;

	t1 = (((x5*x6)%x7)*x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x13 = -1LL;
	int64_t x14 = INT64_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	static int64_t t2 = 82380597LL;

	t2 = (((x13*x14)%x15)*x16);

	if (t2 != 272730423296LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	static volatile uint8_t x20 = UINT8_MAX;
	static uint64_t t3 = 97675543528LLU;

	t3 = (((x17*x18)%x19)*x20);

	if (t3 != 547608330240LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = -1;

	t4 = (((x21*x22)%x23)*x24);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 33621579806956LLU;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = -1;

	t5 = (((x25*x26)%x27)*x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t6 = 769528U;

	t6 = (((x33*x34)%x35)*x36);

	if (t6 != 4262297344U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x38 = 1U;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t7 = -35616;

	t7 = (((x37*x38)%x39)*x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 98U;
	uint16_t x42 = 0U;
	uint32_t x43 = 16U;
	volatile uint32_t t8 = 51U;

	t8 = (((x41*x42)%x43)*x44);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 14948625464LLU;
	volatile int64_t x51 = -1LL;
	volatile int8_t x52 = INT8_MIN;
	volatile uint64_t t9 = 7LLU;

	t9 = (((x49*x50)%x51)*x52);

	if (t9 != 4577051116553247744LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = INT16_MIN;
	uint16_t x54 = 27U;
	static int64_t x55 = 932597096316185413LL;
	volatile int8_t x56 = -5;
	static volatile int64_t t10 = -14836070016LL;

	t10 = (((x53*x54)%x55)*x56);

	if (t10 != 4423680LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 60396U;
	uint32_t t11 = 3592359U;

	t11 = (((x57*x58)%x59)*x60);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x61 = -1;
	int16_t x62 = INT16_MIN;
	static int16_t x64 = 39;

	t12 = (((x61*x62)%x63)*x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 0U;
	volatile int64_t x68 = -1042334LL;
	int64_t t13 = -1LL;

	t13 = (((x65*x66)%x67)*x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x73 = 119U;
	int16_t x75 = INT16_MAX;
	volatile int32_t t14 = -769;

	t14 = (((x73*x74)%x75)*x76);

	if (t14 != -15113) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -8;
	static int8_t x84 = 27;

	t15 = (((x81*x82)%x83)*x84);

	if (t15 != 9223372036853924984LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	volatile uint8_t x87 = 4U;
	uint8_t x88 = UINT8_MAX;

	t16 = (((x85*x86)%x87)*x88);

	if (t16 != -765) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x98 = UINT8_MAX;
	static int32_t x99 = INT32_MIN;
	static volatile int64_t t17 = -3026LL;

	t17 = (((x97*x98)%x99)*x100);

	if (t17 != -98062077049528560LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	static volatile int8_t x103 = 4;
	int8_t x104 = INT8_MAX;
	volatile int32_t t18 = 1;

	t18 = (((x101*x102)%x103)*x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x105 = INT16_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	volatile uint64_t x107 = 7LLU;
	static int16_t x108 = 2;
	uint64_t t19 = 622LLU;

	t19 = (((x105*x106)%x107)*x108);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x110 = -1;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -27160544LL;
	static volatile int64_t t20 = 2207866797623LL;

	t20 = (((x109*x110)%x111)*x112);

	if (t20 != 58326824083623968LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x113 = 165;
	int8_t x114 = -1;
	int64_t x116 = -1LL;

	t21 = (((x113*x114)%x115)*x116);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = -1;
	int16_t x118 = INT16_MAX;
	static volatile int32_t x119 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	int32_t t22 = -470;

	t22 = (((x117*x118)%x119)*x120);

	if (t22 != -8355585) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x126 = 53U;
	volatile int64_t x127 = 493042LL;

	t23 = (((x125*x126)%x127)*x128);

	if (t23 != 6784LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x134 = INT16_MAX;
	volatile int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -1;
	int64_t t24 = 7654675519332LL;

	t24 = (((x133*x134)%x135)*x136);

	if (t24 != 32755LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -688000671;
	int64_t x138 = -1578LL;
	int8_t x139 = -1;
	volatile int64_t t25 = -56873046328052163LL;

	t25 = (((x137*x138)%x139)*x140);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x141 = UINT16_MAX;
	volatile uint32_t x142 = 744479882U;
	int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = 253724U;

	t26 = (((x141*x142)%x143)*x144);

	if (t26 != 1675733736U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x146 = 3938450U;
	int32_t x147 = 25236785;
	volatile int64_t x148 = -34911262055LL;
	volatile int64_t t27 = -1LL;

	t27 = (((x145*x146)%x147)*x148);

	if (t27 != -605297256779091130LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 19U;
	volatile int64_t x151 = INT64_MIN;
	static uint32_t x152 = 5U;
	int64_t t28 = -73131LL;

	t28 = (((x149*x150)%x151)*x152);

	if (t28 != 1540710LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	static int64_t x155 = 3LL;
	int32_t x156 = INT32_MAX;
	int64_t t29 = 26162747LL;

	t29 = (((x153*x154)%x155)*x156);

	if (t29 != 4294967294LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 5732756444950970356LLU;
	int32_t x158 = INT32_MAX;
	volatile int64_t x160 = INT64_MIN;
	volatile uint64_t t30 = 1945545603596833LLU;

	t30 = (((x157*x158)%x159)*x160);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = -5LL;
	int16_t x163 = 2;
	int64_t x164 = -1LL;

	t31 = (((x161*x162)%x163)*x164);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -1;
	volatile uint8_t x166 = 3U;
	volatile uint64_t x168 = UINT64_MAX;
	volatile uint64_t t32 = 182LLU;

	t32 = (((x165*x166)%x167)*x168);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = 0U;
	int64_t x171 = INT64_MAX;
	static uint8_t x172 = UINT8_MAX;
	static volatile int64_t t33 = 34658088014706LL;

	t33 = (((x169*x170)%x171)*x172);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x173 = UINT16_MAX;
	static volatile uint64_t x174 = 53216589696076255LLU;
	int64_t x175 = 365827532768663LL;
	uint16_t x176 = 99U;
	static uint64_t t34 = 3LLU;

	t34 = (((x173*x174)%x175)*x176);

	if (t34 != 26248507438081797LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x182 = INT8_MAX;
	volatile int64_t t35 = 0LL;

	t35 = (((x181*x182)%x183)*x184);

	if (t35 != -1573537LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x185 = 13290U;
	int8_t x186 = 13;
	volatile int8_t x187 = INT8_MAX;
	volatile int32_t x188 = -11;
	volatile int32_t t36 = -838043;

	t36 = (((x185*x186)%x187)*x188);

	if (t36 != -550) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x191 = 1;
	volatile int64_t t37 = 2498555817919170764LL;

	t37 = (((x189*x190)%x191)*x192);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = -30528712LL;
	uint32_t x199 = 147U;
	static uint16_t x200 = 8U;

	t38 = (((x197*x198)%x199)*x200);

	if (t38 != -1056LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x201 = -1;
	static int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = INT16_MAX;

	t39 = (((x201*x202)%x203)*x204);

	if (t39 != 1073709056LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x206 = UINT64_MAX;
	static int16_t x207 = -1;
	uint64_t x208 = 10148675LLU;
	uint64_t t40 = 40324112LLU;

	t40 = (((x205*x206)%x207)*x208);

	if (t40 != 18446735423770578266LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x214 = 1U;
	uint8_t x216 = UINT8_MAX;
	static uint32_t t41 = 459137631U;

	t41 = (((x213*x214)%x215)*x216);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x217 = 20314U;
	int8_t x218 = -1;
	int32_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t42 = 0;

	t42 = (((x217*x218)%x219)*x220);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MIN;
	static int8_t x223 = 25;
	static int32_t x224 = INT32_MIN;
	volatile int64_t t43 = 24641745148428LL;

	t43 = (((x221*x222)%x223)*x224);

	if (t43 != 38654705664LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint8_t x230 = 0U;
	int16_t x231 = INT16_MAX;
	static int16_t x232 = INT16_MAX;
	uint64_t t44 = 9922511343LLU;

	t44 = (((x229*x230)%x231)*x232);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = 17;
	static int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MAX;
	static volatile uint32_t x240 = UINT32_MAX;
	int64_t t45 = 2LL;

	t45 = (((x237*x238)%x239)*x240);

	if (t45 != -9345848833920LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x245 = INT16_MAX;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 2U;
	uint64_t t46 = 7LLU;

	t46 = (((x245*x246)%x247)*x248);

	if (t46 != 65538LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 254085790580090321LLU;
	int64_t x252 = INT64_MIN;

	t47 = (((x249*x250)%x251)*x252);

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x254 = -1;
	static uint64_t x255 = 75261783482LLU;
	int8_t x256 = INT8_MIN;
	uint64_t t48 = 36840148445187LLU;

	t48 = (((x253*x254)%x255)*x256);

	if (t48 != 18446744073709546496LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x261 = -500331LL;
	volatile int8_t x262 = INT8_MIN;
	int64_t x263 = -1393045659696LL;
	int8_t x264 = 0;
	static int64_t t49 = 1893037993327LL;

	t49 = (((x261*x262)%x263)*x264);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MAX;
	static int8_t x267 = -62;
	int16_t x268 = -1737;
	volatile int32_t t50 = -1194896;

	t50 = (((x265*x266)%x267)*x268);

	if (t50 != 53847) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = 3770;
	volatile int16_t x271 = 472;
	uint8_t x272 = 90U;
	uint64_t t51 = 2095003346LLU;

	t51 = (((x269*x270)%x271)*x272);

	if (t51 != 6300LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x273 = 0U;
	uint8_t x275 = 37U;
	uint16_t x276 = 2U;
	uint32_t t52 = 1231U;

	t52 = (((x273*x274)%x275)*x276);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t t53 = 340931012307LL;

	t53 = (((x281*x282)%x283)*x284);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x285 = 772U;
	int32_t x286 = 28;
	int16_t x288 = INT16_MAX;
	static int64_t t54 = 6563613459208990LL;

	t54 = (((x285*x286)%x287)*x288);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -1;
	int32_t x291 = INT32_MIN;
	volatile uint64_t t55 = 78175979LLU;

	t55 = (((x289*x290)%x291)*x292);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x293 = UINT64_MAX;
	int64_t x294 = 323LL;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 33U;

	t56 = (((x293*x294)%x295)*x296);

	if (t56 != 18446744073709540957LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x297 = -12;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	static uint64_t x300 = 940319093LLU;
	volatile uint64_t t57 = 111554067LLU;

	t57 = (((x297*x298)%x299)*x300);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x301 = UINT64_MAX;
	static volatile int64_t x302 = INT64_MAX;
	int32_t x303 = -1;
	int16_t x304 = INT16_MIN;
	uint64_t t58 = 89041656420LLU;

	t58 = (((x301*x302)%x303)*x304);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x317 = 56U;
	uint16_t x318 = 6U;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = UINT32_MAX;
	uint32_t t59 = 302011U;

	t59 = (((x317*x318)%x319)*x320);

	if (t59 != 4294966960U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x321 = 0U;
	uint16_t x322 = 1967U;
	volatile int32_t x323 = INT32_MAX;
	int32_t x324 = -438;
	uint32_t t60 = 7U;

	t60 = (((x321*x322)%x323)*x324);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x325 = 14U;
	static uint32_t x326 = 1458527U;
	int32_t x327 = -37;
	uint32_t t61 = 124992454U;

	t61 = (((x325*x326)%x327)*x328);

	if (t61 != 61258134U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x337 = 11;
	volatile uint32_t x338 = UINT32_MAX;
	static int8_t x339 = INT8_MIN;
	volatile uint32_t t62 = 934185U;

	t62 = (((x337*x338)%x339)*x340);

	if (t62 != 4294952320U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -1;
	uint32_t t63 = 1913U;

	t63 = (((x341*x342)%x343)*x344);

	if (t63 != 4294903128U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = INT8_MAX;
	uint8_t x350 = 2U;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 14U;
	int64_t t64 = 65580217783LL;

	t64 = (((x349*x350)%x351)*x352);

	if (t64 != 3556LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x353 = 11286487U;
	int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MAX;
	volatile uint64_t x356 = 12LLU;
	uint64_t t65 = 116413497LLU;

	t65 = (((x353*x354)%x355)*x356);

	if (t65 != 25634365932LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x357 = -1;
	uint16_t x359 = 14079U;
	volatile uint8_t x360 = 1U;
	int32_t t66 = -164;

	t66 = (((x357*x358)%x359)*x360);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x367 = -1;
	static volatile uint32_t t67 = 826594U;

	t67 = (((x365*x366)%x367)*x368);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x370 = 4U;
	uint8_t x371 = 37U;
	int8_t x372 = 0;
	static int32_t t68 = 5994;

	t68 = (((x369*x370)%x371)*x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x373 = -19;
	int8_t x374 = 14;
	int16_t x376 = INT16_MIN;
	int32_t t69 = -76;

	t69 = (((x373*x374)%x375)*x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x389 = 18;
	int16_t x391 = -2853;
	int32_t t70 = -27;

	t70 = (((x389*x390)%x391)*x392);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x394 = -269415292;

	t71 = (((x393*x394)%x395)*x396);

	if (t71 != -196608LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x397 = INT8_MAX;
	static int16_t x398 = INT16_MIN;
	uint32_t x399 = 85819U;
	int32_t x400 = 11;

	t72 = (((x397*x398)%x399)*x400);

	if (t72 != 301378U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x401 = INT8_MIN;
	static uint64_t x402 = 510242LLU;
	volatile int64_t x403 = 541620820553LL;
	static uint64_t x404 = 1153620204029260LLU;
	uint64_t t73 = 33LLU;

	t73 = (((x401*x402)%x403)*x404);

	if (t73 != 3480853314573942216LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = -1;
	static int64_t x411 = 624777536LL;
	int32_t x412 = INT32_MIN;
	volatile int64_t t74 = -2160597856701359492LL;

	t74 = (((x409*x410)%x411)*x412);

	if (t74 != 10305720339660800LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	static int16_t x416 = 1;
	volatile int32_t t75 = -1255;

	t75 = (((x413*x414)%x415)*x416);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x417 = -3;
	uint16_t x418 = 25U;
	int16_t x420 = INT16_MIN;

	t76 = (((x417*x418)%x419)*x420);

	if (t76 != 18446744058554941440LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x421 = UINT16_MAX;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = -6;
	volatile uint32_t t77 = 4809240U;

	t77 = (((x421*x422)%x423)*x424);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = 6970530;
	uint8_t x426 = 8U;
	static int64_t x427 = 7113492859544LL;
	int16_t x428 = INT16_MIN;
	volatile int64_t t78 = 84374LL;

	t78 = (((x425*x426)%x427)*x428);

	if (t78 != -1827282616320LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x433 = 0U;
	int16_t x434 = -1;
	uint64_t x435 = 88869201985864423LLU;
	int16_t x436 = INT16_MAX;
	static uint64_t t79 = 833408LLU;

	t79 = (((x433*x434)%x435)*x436);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x445 = 1381703;
	int64_t x446 = 3654506LL;
	volatile int32_t x447 = -1;
	volatile uint32_t x448 = UINT32_MAX;
	static int64_t t80 = -103905011097LL;

	t80 = (((x445*x446)%x447)*x448);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x449 = UINT32_MAX;
	uint8_t x451 = 90U;
	uint32_t t81 = 88280222U;

	t81 = (((x449*x450)%x451)*x452);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x453 = 30U;
	uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 169021U;
	int16_t x456 = -39;
	uint32_t t82 = 178482584U;

	t82 = (((x453*x454)%x455)*x456);

	if (t82 != 4294668946U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x462 = 37LLU;
	uint64_t x463 = 237LLU;
	int64_t x464 = INT64_MAX;
	uint64_t t83 = 1956144120LLU;

	t83 = (((x461*x462)%x463)*x464);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x465 = 0;
	volatile int32_t x466 = 144055611;
	volatile uint32_t x467 = 1629121U;
	int32_t x468 = INT32_MIN;
	static uint32_t t84 = 1U;

	t84 = (((x465*x466)%x467)*x468);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x469 = 1871617403U;
	int32_t x470 = -1;
	int8_t x471 = 4;
	static int8_t x472 = INT8_MAX;

	t85 = (((x469*x470)%x471)*x472);

	if (t85 != 127U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = INT8_MAX;
	static uint64_t x474 = 197316566LLU;
	uint64_t t86 = 225461LLU;

	t86 = (((x473*x474)%x475)*x476);

	if (t86 != 2752428LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x477 = 25537U;
	uint64_t x478 = 107610LLU;
	static int32_t x479 = INT32_MIN;
	int64_t x480 = -1LL;
	uint64_t t87 = 1164LLU;

	t87 = (((x477*x478)%x479)*x480);

	if (t87 != 18446744070961515046LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x487 = 2815U;
	int64_t x488 = INT64_MAX;
	uint64_t t88 = 845193716919LLU;

	t88 = (((x485*x486)%x487)*x488);

	if (t88 != 9223372036854773885LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = UINT32_MAX;
	static uint64_t x490 = 66942908791497840LLU;
	int8_t x492 = INT8_MIN;
	static volatile uint64_t t89 = 463LLU;

	t89 = (((x489*x490)%x491)*x492);

	if (t89 != 18446744068794662016LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x493 = 197440U;
	volatile int64_t x494 = -80422265541LL;
	static int32_t x495 = 114351;
	uint64_t x496 = 113012655693808056LLU;
	uint64_t t90 = 4167639531084LLU;

	t90 = (((x493*x494)%x495)*x496);

	if (t90 != 5562146701796530072LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = UINT8_MAX;
	int32_t x498 = -1;
	int64_t x499 = INT64_MAX;
	int8_t x500 = INT8_MIN;

	t91 = (((x497*x498)%x499)*x500);

	if (t91 != 32640LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x509 = UINT8_MAX;
	uint64_t x510 = 1722LLU;
	static int16_t x511 = 1264;
	static int8_t x512 = -15;
	uint64_t t92 = 6215990894979762600LLU;

	t92 = (((x509*x510)%x511)*x512);

	if (t92 != 18446744073709544086LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x513 = 34107LLU;
	uint16_t x514 = UINT16_MAX;
	int16_t x515 = INT16_MIN;
	int64_t x516 = -1LL;
	static volatile uint64_t t93 = 3018LLU;

	t93 = (((x513*x514)%x515)*x516);

	if (t93 != 18446744071474349371LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x521 = UINT16_MAX;
	int64_t x522 = -1LL;
	int32_t x523 = INT32_MIN;
	volatile int32_t x524 = INT32_MIN;
	volatile int64_t t94 = 30005877LL;

	t94 = (((x521*x522)%x523)*x524);

	if (t94 != 140735340871680LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = -1;
	static volatile int32_t x526 = -1;
	volatile int64_t x527 = -1LL;
	volatile int64_t x528 = -7666611LL;
	volatile int64_t t95 = 0LL;

	t95 = (((x525*x526)%x527)*x528);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x537 = INT16_MAX;
	volatile int8_t x538 = -1;
	int64_t x539 = 1483433571LL;
	uint64_t x540 = 24977810LLU;
	volatile uint64_t t96 = 10026748372356LLU;

	t96 = (((x537*x538)%x539)*x540);

	if (t96 != 18446743255261651346LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x541 = UINT8_MAX;
	static int16_t x542 = INT16_MIN;
	int32_t x544 = -1;
	int32_t t97 = 0;

	t97 = (((x541*x542)%x543)*x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x545 = INT16_MAX;
	uint64_t x546 = 44411LLU;
	uint16_t x548 = 2183U;

	t98 = (((x545*x546)%x547)*x548);

	if (t98 != 3176734862371LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x549 = UINT64_MAX;
	static int64_t x550 = INT64_MIN;
	volatile uint32_t x551 = UINT32_MAX;
	static volatile uint32_t x552 = UINT32_MAX;
	uint64_t t99 = 7690386019439061307LLU;

	t99 = (((x549*x550)%x551)*x552);

	if (t99 != 9223372034707292160LLU) { NG(); } else { ; }
	
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

