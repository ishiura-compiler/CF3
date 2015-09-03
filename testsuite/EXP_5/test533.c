#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 50242746823LLU;
volatile uint16_t x3 = 18U;
volatile uint64_t t0 = 3601464927804LLU;
static volatile int16_t x7 = -1;
int16_t x14 = INT16_MAX;
volatile int32_t x17 = INT32_MIN;
uint32_t x19 = UINT32_MAX;
volatile uint16_t x26 = 131U;
int16_t x33 = INT16_MIN;
static volatile uint32_t t6 = 13U;
int32_t x37 = -273;
volatile int64_t t9 = -2426LL;
int64_t x49 = INT64_MIN;
int16_t x51 = INT16_MAX;
int8_t x54 = INT8_MIN;
int32_t x59 = 4;
int32_t x64 = INT32_MIN;
int64_t t13 = -1032678LL;
int8_t x68 = -1;
int64_t t14 = -2295644LL;
volatile int64_t x71 = INT64_MAX;
volatile uint64_t x74 = 228288106LLU;
int64_t x75 = -121065393LL;
int32_t x78 = INT32_MAX;
volatile int8_t x83 = -1;
int32_t x84 = -999311;
uint8_t x89 = 5U;
int32_t x90 = INT32_MAX;
volatile uint32_t t20 = 7U;
int8_t x94 = 1;
uint32_t x103 = 1199929540U;
static int64_t x111 = -1LL;
volatile uint32_t t27 = 1U;
volatile uint64_t t29 = 296930782944LLU;
volatile int32_t x130 = -227329;
uint32_t x135 = 198U;
uint32_t x138 = UINT32_MAX;
int8_t x142 = -15;
int32_t x146 = INT32_MIN;
volatile int8_t x150 = -23;
uint16_t x153 = UINT16_MAX;
uint8_t x158 = 3U;
int16_t x159 = INT16_MIN;
int64_t x162 = INT64_MIN;
int32_t x164 = INT32_MIN;
volatile uint16_t x166 = 2099U;
uint32_t x169 = UINT32_MAX;
volatile uint64_t t40 = 236615897325912LLU;
volatile int64_t x182 = INT64_MAX;
static volatile uint64_t x187 = 250262017LLU;
static int32_t x189 = INT32_MIN;
static volatile int64_t t45 = -560315547LL;
volatile int16_t x196 = INT16_MIN;
uint64_t x197 = 61393977LLU;
int16_t x198 = 127;
static int64_t x204 = -505878LL;
static uint32_t x211 = 891666U;
int64_t x213 = 13541LL;
int8_t x214 = 59;
static volatile uint8_t x216 = UINT8_MAX;
volatile int64_t t51 = -355253LL;
int64_t x219 = -1LL;
uint32_t x226 = 0U;
uint32_t x227 = 5U;
int16_t x228 = INT16_MIN;
int64_t x232 = 3LL;
int64_t x235 = 850LL;
int16_t x248 = 29;
volatile int64_t t60 = 1027528LL;
int64_t x262 = -1LL;
volatile uint32_t x265 = 58747319U;
static int8_t x266 = -1;
static uint32_t t64 = 4092U;
int8_t x275 = INT8_MIN;
int16_t x276 = INT16_MAX;
uint64_t t67 = 67LLU;
volatile int8_t x282 = INT8_MAX;
int16_t x290 = INT16_MAX;
static uint32_t t70 = 26U;
int64_t x294 = 15245033733338LL;
int64_t x298 = INT64_MAX;
volatile int64_t t72 = 1LL;
int8_t x301 = -1;
int16_t x302 = 2411;
static uint16_t x303 = 14053U;
volatile int32_t t73 = 61170;
volatile int8_t x305 = INT8_MAX;
static volatile uint32_t t74 = 132559679U;
int8_t x310 = INT8_MIN;
volatile int16_t x313 = INT16_MAX;
static uint32_t x314 = UINT32_MAX;
int64_t x327 = 32LL;
int16_t x346 = 3942;
int64_t t84 = -23538529LL;
uint32_t x349 = 47U;
int32_t x355 = -1;
int8_t x357 = -1;
int32_t x360 = 0;
int64_t x361 = INT64_MIN;
static uint8_t x369 = 1U;
int16_t x378 = -14;
static uint64_t x379 = 148039301256901808LLU;
uint64_t x384 = 66LLU;
volatile uint64_t t95 = 287462665109727623LLU;
uint64_t x394 = 28588386404206LLU;


void f0(void) {
	static uint64_t x1 = 504LLU;
	volatile int32_t x4 = -1;

	t0 = (x1^((x2/x3)-x4));

	if (t0 != 2791263257LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint64_t x6 = 91621026010385LLU;
	uint16_t x8 = UINT16_MAX;
	uint64_t t1 = 50LLU;

	t1 = (x5^((x6/x7)-x8));

	if (t1 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	volatile uint64_t x11 = UINT64_MAX;
	static int64_t x12 = -1LL;
	volatile uint64_t t2 = 38924055094LLU;

	t2 = (x9^((x10/x11)-x12));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	volatile int64_t x15 = -6447176LL;
	volatile uint32_t x16 = 3832546U;
	volatile int64_t t3 = 143236102426LL;

	t3 = (x13^((x14/x15)-x16));

	if (t3 != -3832479LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x18 = 8361275242LLU;
	volatile int32_t x20 = 0;
	uint64_t t4 = 256143713318842712LLU;

	t4 = (x17^((x18/x19)-x20));

	if (t4 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MAX;
	static int32_t x27 = INT32_MIN;
	static volatile int16_t x28 = -1;
	static volatile int32_t t5 = -3970909;

	t5 = (x25^((x26/x27)-x28));

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x34 = 5813799U;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;

	t6 = (x33^((x34/x35)-x36));

	if (t6 != 4294934656U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 4U;
	uint32_t x39 = UINT32_MAX;
	static int32_t x40 = INT32_MAX;
	volatile uint32_t t7 = 1857074059U;

	t7 = (x37^((x38/x39)-x40));

	if (t7 != 2147483374U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -4187807839LL;
	volatile int32_t x42 = -69;
	volatile int16_t x43 = -2062;
	int8_t x44 = INT8_MAX;
	volatile int64_t t8 = -652942884378201962LL;

	t8 = (x41^((x42/x43)-x44));

	if (t8 != 4187807776LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int64_t x46 = -55156074892LL;
	static volatile uint16_t x47 = 12U;
	int16_t x48 = INT16_MAX;

	t9 = (x45^((x46/x47)-x48));

	if (t9 != 4596372340LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = -5982;
	int16_t x52 = INT16_MAX;
	volatile int64_t t10 = -7LL;

	t10 = (x49^((x50/x51)-x52));

	if (t10 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = -3034862924760561883LL;
	static int64_t t11 = 18765497LL;

	t11 = (x53^((x54/x55)-x56));

	if (t11 != -3034862924760561884LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MAX;
	static volatile int64_t x58 = INT64_MIN;
	int16_t x60 = -1;
	static volatile int64_t t12 = -240919642LL;

	t12 = (x57^((x58/x59)-x60));

	if (t12 != -2305843009213693826LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;

	t13 = (x61^((x62/x63)-x64));

	if (t13 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	static int64_t x66 = -101971028166652924LL;
	static int32_t x67 = -1;

	t14 = (x65^((x66/x67)-x68));

	if (t14 != -101971029265402883LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = 15293270277057080LL;
	int32_t x70 = 185546879;
	int16_t x72 = -35;
	int64_t t15 = 8708772298478875LL;

	t15 = (x69^((x70/x71)-x72));

	if (t15 != 15293270277057051LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -1121103;
	int16_t x76 = -428;
	static volatile uint64_t t16 = 2269757494LLU;

	t16 = (x73^((x74/x75)-x76));

	if (t16 != 18446744073708430621LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = 13U;
	int8_t x79 = -1;
	static int64_t x80 = 8401902549LL;
	volatile int64_t t17 = 140735708515893780LL;

	t17 = (x77^((x78/x79)-x80));

	if (t17 != -10549386207LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	static int64_t x82 = 2292691897786LL;
	static volatile int64_t t18 = 45LL;

	t18 = (x81^((x82/x83)-x84));

	if (t18 != 2292690898517LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	int64_t x86 = -44650LL;
	volatile uint64_t x87 = 31673LLU;
	uint8_t x88 = 4U;
	uint64_t t19 = 224321092443011572LLU;

	t19 = (x85^((x86/x87)-x88));

	if (t19 != 18446161661431784767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x91 = 1U;
	static uint32_t x92 = UINT32_MAX;

	t20 = (x89^((x90/x91)-x92));

	if (t20 != 2147483653U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 995U;
	int16_t x95 = 158;
	static volatile uint8_t x96 = 14U;
	volatile uint32_t t21 = 3U;

	t21 = (x93^((x94/x95)-x96));

	if (t21 != 4294966289U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 14U;
	int64_t x98 = -1LL;
	static int8_t x99 = INT8_MAX;
	int64_t x100 = -1LL;
	volatile int64_t t22 = -1067588308775LL;

	t22 = (x97^((x98/x99)-x100));

	if (t22 != 15LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1;
	int8_t x104 = -1;
	volatile uint32_t t23 = 101715552U;

	t23 = (x101^((x102/x103)-x104));

	if (t23 != 4294967172U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 250;
	int64_t x106 = INT64_MAX;
	volatile int32_t x107 = -305;
	volatile int32_t x108 = INT32_MIN;
	int64_t t24 = -303LL;

	t24 = (x105^((x106/x107)-x108));

	if (t24 != -30240561907777934LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 159996610LLU;
	volatile int32_t x110 = INT32_MAX;
	volatile int8_t x112 = INT8_MIN;
	volatile uint64_t t25 = 254507486139099618LLU;

	t25 = (x109^((x110/x111)-x112));

	if (t25 != 18446744071722064451LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 3330LLU;
	volatile int64_t x116 = -1LL;
	volatile uint64_t t26 = 564569434231LLU;

	t26 = (x113^((x114/x115)-x116));

	if (t26 != 18446744073708261835LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;
	int8_t x118 = -1;
	uint32_t x119 = 182716826U;
	uint8_t x120 = 1U;

	t27 = (x117^((x118/x119)-x120));

	if (t27 != 4294967190U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = -2;
	int16_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int8_t x124 = -16;
	int32_t t28 = 127;

	t28 = (x121^((x122/x123)-x124));

	if (t28 != -18) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = -3384896424744398LL;
	uint64_t x127 = 109940LLU;
	uint8_t x128 = UINT8_MAX;

	t29 = (x125^((x126/x127)-x128));

	if (t29 != 18446576315303337359LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MAX;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = 20;
	int32_t t30 = 1;

	t30 = (x129^((x130/x131)-x132));

	if (t30 != -2147482738) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 3U;
	int8_t x134 = INT8_MAX;
	volatile int16_t x136 = INT16_MAX;
	uint32_t t31 = 6077598U;

	t31 = (x133^((x134/x135)-x136));

	if (t31 != 4294934530U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	int64_t x140 = -2236340339LL;
	int64_t t32 = 9LL;

	t32 = (x137^((x138/x139)-x140));

	if (t32 != -2236327820LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x143 = -1;
	uint64_t x144 = 1LLU;
	volatile uint64_t t33 = 53LLU;

	t33 = (x141^((x142/x143)-x144));

	if (t33 != 241LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = INT8_MAX;
	int8_t x147 = INT8_MIN;
	static volatile int16_t x148 = INT16_MAX;
	volatile int32_t t34 = 5267820;

	t34 = (x145^((x146/x147)-x148));

	if (t34 != 16744574) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1828;
	int32_t x151 = INT32_MIN;
	volatile uint32_t x152 = 7U;
	uint32_t t35 = 2U;

	t35 = (x149^((x150/x151)-x152));

	if (t35 != 1829U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x154 = 2U;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	int32_t t36 = 3904885;

	t36 = (x153^((x154/x155)-x156));

	if (t36 != 65534) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x157 = 60;
	volatile uint8_t x160 = 92U;
	int32_t t37 = 29;

	t37 = (x157^((x158/x159)-x160));

	if (t37 != -104) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 12866LLU;
	static int8_t x163 = -4;
	static volatile uint64_t t38 = 20854606395289LLU;

	t38 = (x161^((x162/x163)-x164));

	if (t38 != 2305843011361190466LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x165 = INT64_MIN;
	static volatile int8_t x167 = INT8_MAX;
	int32_t x168 = -137649;
	int64_t t39 = 0LL;

	t39 = (x165^((x166/x167)-x168));

	if (t39 != -9223372036854638143LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x170 = 4723313LLU;
	volatile int64_t x171 = INT64_MAX;
	volatile int32_t x172 = INT32_MIN;

	t40 = (x169^((x170/x171)-x172));

	if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	static volatile uint8_t x174 = 51U;
	static volatile uint16_t x175 = 9U;
	uint16_t x176 = 22053U;
	volatile int32_t t41 = -2613822;

	t41 = (x173^((x174/x175)-x176));

	if (t41 != -10721) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -238494688LL;
	int32_t x178 = INT32_MIN;
	static volatile int32_t x179 = INT32_MAX;
	int64_t x180 = 8LL;
	int64_t t42 = -993664058922241LL;

	t42 = (x177^((x178/x179)-x180));

	if (t42 != 238494679LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MAX;
	static int64_t x183 = INT64_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t43 = 1554001419526698LLU;

	t43 = (x181^((x182/x183)-x184));

	if (t43 != 125LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MAX;
	volatile uint8_t x186 = 5U;
	static int16_t x188 = -1;
	volatile uint64_t t44 = 4712790502LLU;

	t44 = (x185^((x186/x187)-x188));

	if (t44 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	static volatile int64_t x192 = INT64_MAX;

	t45 = (x189^((x190/x191)-x192));

	if (t45 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -764995;
	static volatile int32_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int32_t t46 = -6;

	t46 = (x193^((x194/x195)-x196));

	if (t46 != -732227) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x199 = 1;
	int32_t x200 = INT32_MAX;
	uint64_t t47 = 27794962LLU;

	t47 = (x197^((x198/x199)-x200));

	if (t47 != 18446744071623462073LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = 49U;
	int64_t t48 = 219689538444648537LL;

	t48 = (x201^((x202/x203)-x204));

	if (t48 != 188232081114337511LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = INT8_MAX;
	static int32_t x206 = INT32_MIN;
	static int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t49 = 1320U;

	t49 = (x205^((x206/x207)-x208));

	if (t49 != 16777342U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	int32_t x212 = -25;
	volatile uint32_t t50 = 602191U;

	t50 = (x209^((x210/x211)-x212));

	if (t50 != 4294939369U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x215 = INT16_MIN;

	t51 = (x213^((x214/x215)-x216));

	if (t51 != -13340LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = -1;
	int16_t x220 = -1;
	volatile int64_t t52 = 236285146732LL;

	t52 = (x217^((x218/x219)-x220));

	if (t52 != -2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -12073;
	int64_t x222 = -55LL;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 9U;
	int64_t t53 = -55195466156162853LL;

	t53 = (x221^((x222/x223)-x224));

	if (t53 != 12064LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	volatile uint32_t t54 = 47074698U;

	t54 = (x225^((x226/x227)-x228));

	if (t54 != 2147516416U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = -1;
	static int16_t x230 = INT16_MIN;
	static uint64_t x231 = 55898902335403207LLU;
	uint64_t t55 = 1109145824941540573LLU;

	t55 = (x229^((x230/x231)-x232));

	if (t55 != 18446744073709551288LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	volatile int8_t x234 = 14;
	uint16_t x236 = 2069U;
	int64_t t56 = -1LL;

	t56 = (x233^((x234/x235)-x236));

	if (t56 != 2068LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = UINT8_MAX;
	static int32_t x238 = INT32_MAX;
	volatile int8_t x239 = INT8_MIN;
	static volatile int16_t x240 = -1;
	static int32_t t57 = -1463782;

	t57 = (x237^((x238/x239)-x240));

	if (t57 != -16776963) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	volatile uint16_t x243 = 287U;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t58 = 2151;

	t58 = (x241^((x242/x243)-x244));

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	uint64_t t59 = 132965372806LLU;

	t59 = (x245^((x246/x247)-x248));

	if (t59 != 27LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	uint16_t x250 = 5721U;
	int64_t x251 = -1LL;
	uint16_t x252 = 588U;

	t60 = (x249^((x250/x251)-x252));

	if (t60 != 6308LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	volatile uint8_t x254 = 2U;
	static volatile uint64_t x255 = 1539LLU;
	int64_t x256 = INT64_MIN;
	uint64_t t61 = 4274LLU;

	t61 = (x253^((x254/x255)-x256));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x257 = INT16_MAX;
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = INT32_MIN;
	volatile uint32_t t62 = 57721U;

	t62 = (x257^((x258/x259)-x260));

	if (t62 != 2147581950U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MAX;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = 0;
	int64_t t63 = 199LL;

	t63 = (x261^((x262/x263)-x264));

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x267 = 693;
	int16_t x268 = INT16_MIN;

	t64 = (x265^((x266/x267)-x268));

	if (t64 != 58780087U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	static uint8_t x271 = 6U;
	int16_t x272 = -3227;
	volatile int64_t t65 = 36767708253LL;

	t65 = (x269^((x270/x271)-x272));

	if (t65 != 7686143364045649734LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MAX;
	int32_t t66 = 47968;

	t66 = (x273^((x274/x275)-x276));

	if (t66 != 65282) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x278 = 132835822855410406LLU;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -1263581;

	t67 = (x277^((x278/x279)-x280));

	if (t67 != 32197288LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	volatile uint64_t t68 = 1571492988697514LLU;

	t68 = (x281^((x282/x283)-x284));

	if (t68 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int32_t x286 = -3;
	int32_t x287 = 1175;
	static int64_t x288 = 4270119823033025LL;
	int64_t t69 = 107LL;

	t69 = (x285^((x286/x287)-x288));

	if (t69 != 4270119823031615LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 343336U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = -27;

	t70 = (x289^((x290/x291)-x292));

	if (t70 != 4294623796U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int32_t x295 = -2;
	int16_t x296 = 13;
	volatile int64_t t71 = 1LL;

	t71 = (x293^((x294/x295)-x296));

	if (t71 != -7622516834695LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = UINT32_MAX;
	volatile uint32_t x299 = 2083026U;
	static int8_t x300 = INT8_MIN;

	t72 = (x297^((x298/x299)-x300));

	if (t72 != 4424055819593LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x304 = UINT8_MAX;

	t73 = (x301^((x302/x303)-x304));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x306 = 5015U;
	volatile uint16_t x307 = 198U;
	volatile int16_t x308 = -1;

	t74 = (x305^((x306/x307)-x308));

	if (t74 != 101U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 7515101597LL;
	int16_t x311 = -1;
	int16_t x312 = 655;
	static volatile int64_t t75 = 1LL;

	t75 = (x309^((x310/x311)-x312));

	if (t75 != -7515102100LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x315 = -457226LL;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t76 = -1047LL;

	t76 = (x313^((x314/x315)-x316));

	if (t76 != -23121LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = -14958297070LL;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int64_t t77 = 46038582619287751LL;

	t77 = (x317^((x318/x319)-x320));

	if (t77 != 58659948LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x321 = -8;
	static int32_t x322 = INT32_MIN;
	uint16_t x323 = 292U;
	volatile int64_t x324 = INT64_MIN;
	volatile int64_t t78 = 141LL;

	t78 = (x321^((x322/x323)-x324));

	if (t78 != -9223372036847421412LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MAX;
	int32_t x326 = INT32_MIN;
	int64_t x328 = -1LL;
	static volatile int64_t t79 = 16LL;

	t79 = (x325^((x326/x327)-x328));

	if (t79 != -67076098LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	volatile int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MAX;
	int64_t x332 = -1LL;
	int64_t t80 = -11202623LL;

	t80 = (x329^((x330/x331)-x332));

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = 2659650571LL;
	int64_t x335 = INT64_MAX;
	int8_t x336 = INT8_MIN;
	int64_t t81 = -126LL;

	t81 = (x333^((x334/x335)-x336));

	if (t81 != -2147483520LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = 12;
	uint8_t x339 = 8U;
	uint16_t x340 = 12662U;
	int32_t t82 = -81457;

	t82 = (x337^((x338/x339)-x340));

	if (t82 != 20107) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	static int8_t x343 = INT8_MIN;
	int8_t x344 = 1;
	volatile int32_t t83 = -890637;

	t83 = (x341^((x342/x343)-x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	int64_t x347 = -1LL;
	uint32_t x348 = 3591U;

	t84 = (x345^((x346/x347)-x348));

	if (t84 != 2147476115LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = INT8_MIN;
	static volatile int32_t x351 = -886;
	static int16_t x352 = 2891;
	volatile uint32_t t85 = 12727909U;

	t85 = (x349^((x350/x351)-x352));

	if (t85 != 4294964378U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 1U;
	static uint64_t x354 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile uint64_t t86 = 14LLU;

	t86 = (x353^((x354/x355)-x356));

	if (t86 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x358 = 107;
	static int8_t x359 = INT8_MIN;
	volatile int32_t t87 = -121;

	t87 = (x357^((x358/x359)-x360));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = -8;
	int64_t x364 = INT64_MIN;
	static uint64_t t88 = 130430819371965303LLU;

	t88 = (x361^((x362/x363)-x364));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = 16137644687892184LLU;
	int64_t x367 = INT64_MIN;
	static uint32_t x368 = UINT32_MAX;
	uint64_t t89 = 389LLU;

	t89 = (x365^((x366/x367)-x368));

	if (t89 != 4294934529LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 38U;
	static int64_t x372 = -1LL;
	static volatile int64_t t90 = -14868LL;

	t90 = (x369^((x370/x371)-x372));

	if (t90 != 113025457LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	uint64_t t91 = 226LLU;

	t91 = (x373^((x374/x375)-x376));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x377 = INT64_MIN;
	static uint64_t x380 = UINT64_MAX;
	uint64_t t92 = 3204602490900313LLU;

	t92 = (x377^((x378/x379)-x380));

	if (t92 != 9223372036854775933LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 241U;
	int8_t x382 = 1;
	int8_t x383 = -9;
	volatile uint64_t t93 = 52176134LLU;

	t93 = (x381^((x382/x383)-x384));

	if (t93 != 18446744073709551439LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x386 = 4097450492LLU;
	static int8_t x387 = INT8_MAX;
	int8_t x388 = -1;
	uint64_t t94 = 1557415LLU;

	t94 = (x385^((x386/x387)-x388));

	if (t94 != 18446744071594331358LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = INT64_MIN;
	int32_t x390 = INT32_MAX;
	int64_t x391 = INT64_MAX;
	static uint64_t x392 = UINT64_MAX;

	t95 = (x389^((x390/x391)-x392));

	if (t95 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x393 = -1;
	int64_t x395 = INT64_MAX;
	volatile int8_t x396 = INT8_MIN;
	uint64_t t96 = 101916LLU;

	t96 = (x393^((x394/x395)-x396));

	if (t96 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x397 = 1445U;
	int64_t x398 = -1LL;
	volatile uint16_t x399 = 3U;
	int8_t x400 = -1;
	volatile int64_t t97 = -8LL;

	t97 = (x397^((x398/x399)-x400));

	if (t97 != 1444LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x401 = 722747850026242356LLU;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 544314726323LLU;
	uint16_t x404 = 0U;
	uint64_t t98 = 196LLU;

	t98 = (x401^((x402/x403)-x404));

	if (t98 != 722747849992359693LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	static int64_t x411 = -1LL;
	volatile uint32_t x412 = UINT32_MAX;
	static volatile int64_t t99 = -457799925271745LL;

	t99 = (x409^((x410/x411)-x412));

	if (t99 != 2147483777LL) { NG(); } else { ; }
	
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

