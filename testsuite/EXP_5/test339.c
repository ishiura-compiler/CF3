#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = INT8_MIN;
static volatile int8_t x8 = INT8_MIN;
uint64_t t2 = 239296642882801LLU;
int16_t x32 = -1;
static volatile uint64_t t3 = 3044610802LLU;
int16_t x59 = INT16_MIN;
uint8_t x60 = 0U;
int64_t t7 = 124256431845329476LL;
int16_t x65 = INT16_MIN;
volatile uint64_t t8 = 4778771788066354LLU;
uint16_t x78 = 7U;
volatile int8_t x83 = INT8_MIN;
int32_t x93 = -7621;
static int32_t t13 = 449203;
volatile uint16_t x108 = 10U;
int64_t x113 = -731LL;
int32_t x114 = -685743;
uint16_t x127 = 12572U;
static int8_t x128 = INT8_MIN;
int8_t x130 = -1;
int64_t x135 = -3887979628LL;
static int8_t x136 = -1;
volatile int64_t t19 = 847506100648LL;
static int16_t x137 = -5293;
static uint64_t t20 = 11495711012351LLU;
int8_t x143 = -12;
static uint32_t t23 = 6U;
volatile uint8_t x163 = UINT8_MAX;
static int64_t t25 = -167841330LL;
static volatile uint32_t x174 = 73478902U;
uint32_t x186 = 5U;
uint8_t x188 = 62U;
uint8_t x190 = 3U;
uint64_t x192 = 747408997861LLU;
volatile int16_t x197 = INT16_MIN;
volatile uint32_t t33 = 1U;
volatile uint32_t t36 = 26U;
static int32_t x219 = INT32_MAX;
volatile uint16_t x220 = 4148U;
volatile uint32_t t37 = 5U;
static volatile uint64_t x222 = 16852084449LLU;
static int16_t x223 = -1;
static volatile int32_t t39 = 0;
uint32_t x232 = UINT32_MAX;
static int16_t x244 = -4817;
int64_t x255 = 1014272860533LL;
volatile uint8_t x267 = 41U;
uint8_t x269 = 2U;
int8_t x275 = INT8_MAX;
uint8_t x278 = 7U;
int64_t x287 = -649647489891LL;
volatile int32_t x304 = 457;
uint32_t x306 = 711U;
uint64_t x316 = UINT64_MAX;
int16_t x318 = -1;
static int64_t t55 = 3133LL;
static int16_t x323 = -1;
uint64_t t57 = 1975LLU;
static uint32_t t58 = 497825U;
uint32_t t60 = 69U;
static uint64_t x356 = UINT64_MAX;
int64_t x405 = INT64_MIN;
static int64_t x411 = -44LL;
int16_t x420 = -1;
int32_t t69 = -1;
int8_t x427 = INT8_MIN;
static volatile int16_t x430 = INT16_MIN;
uint32_t x431 = 27031652U;
volatile int16_t x434 = -1;
static volatile uint64_t x435 = 2864427789510248LLU;
static volatile int32_t t73 = 27141798;
int64_t x445 = 26433223305LL;
int16_t x446 = -3431;
volatile int64_t t75 = -108LL;
volatile int64_t t76 = 24726738648252293LL;
static volatile uint8_t x490 = UINT8_MAX;
int8_t x494 = INT8_MIN;
int16_t x496 = INT16_MIN;
int64_t t81 = 1LL;
volatile int64_t x504 = -1LL;
uint16_t x505 = UINT16_MAX;
static volatile int64_t x506 = 516454420LL;
int32_t x508 = INT32_MAX;
static int32_t x511 = 113201;
static uint64_t x523 = UINT64_MAX;
uint64_t x526 = 553032103LLU;
uint64_t t87 = 11LLU;
int8_t x530 = INT8_MAX;
uint8_t x531 = 0U;
volatile uint32_t x537 = 62676416U;
uint32_t x538 = 99U;
static volatile int16_t x547 = -117;
static volatile uint32_t t92 = 144639U;
int64_t x560 = 3709LL;
static int64_t t93 = -1039303990974LL;
uint64_t x566 = UINT64_MAX;
uint8_t x567 = UINT8_MAX;
uint32_t x575 = 252969734U;
volatile int32_t x576 = INT32_MIN;
static int8_t x579 = INT8_MAX;
uint32_t x586 = UINT32_MAX;
uint64_t t99 = 8035597LLU;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x7 = 573;
	static uint32_t t0 = 34U;

	t0 = (x5+((x6*x7)+x8));

	if (t0 != 4294893823U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = 62U;
	int16_t x24 = -199;
	volatile int32_t t1 = -796658;

	t1 = (x21+((x22*x23)+x24));

	if (t1 != -2031816) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 637U;
	uint64_t x26 = 8349109165773864314LLU;
	volatile int64_t x27 = INT64_MAX;
	uint64_t x28 = 101575972LLU;

	t2 = (x25+((x26*x27)+x28));

	if (t2 != 10097634908037263911LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = 0;
	volatile int64_t x30 = INT64_MIN;
	static uint64_t x31 = UINT64_MAX;

	t3 = (x29+((x30*x31)+x32));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x41 = INT8_MIN;
	uint64_t x42 = 89952808500369LLU;
	static int8_t x43 = INT8_MAX;
	static int16_t x44 = INT16_MAX;
	volatile uint64_t t4 = 2013876540661802LLU;

	t4 = (x41+((x42*x43)+x44));

	if (t4 != 11424006679579502LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = INT32_MAX;
	uint32_t x46 = UINT32_MAX;
	static volatile int32_t x47 = INT32_MAX;
	static int64_t x48 = -1017754628244LL;
	int64_t t5 = 118672011132235LL;

	t5 = (x45+((x46*x47)+x48));

	if (t5 != -1013459660948LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x57 = 28;
	static int16_t x58 = INT16_MIN;
	volatile int32_t t6 = 823895;

	t6 = (x57+((x58*x59)+x60));

	if (t6 != 1073741852) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x61 = -1;
	volatile int64_t x62 = -1LL;
	static int64_t x63 = -453161808LL;
	static volatile int8_t x64 = 5;

	t7 = (x61+((x62*x63)+x64));

	if (t7 != 453161812LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x66 = UINT16_MAX;
	static volatile uint64_t x67 = 46777237LLU;
	int32_t x68 = INT32_MIN;

	t8 = (x65+((x66*x67)+x68));

	if (t8 != 3063398710379LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	uint16_t x72 = 285U;
	int64_t t9 = 8LL;

	t9 = (x69+((x70*x71)+x72));

	if (t9 != 412LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = -1;
	volatile int8_t x79 = -6;
	volatile uint32_t x80 = UINT32_MAX;
	static uint32_t t10 = 667223766U;

	t10 = (x77+((x78*x79)+x80));

	if (t10 != 4294967252U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x81 = 10317;
	int32_t x82 = -1;
	static int32_t x84 = -197355763;
	static int32_t t11 = -5;

	t11 = (x81+((x82*x83)+x84));

	if (t11 != -197345318) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = 14832;
	int16_t x87 = INT16_MAX;
	static int32_t x88 = -26;
	uint32_t t12 = 241U;

	t12 = (x85+((x86*x87)+x88));

	if (t12 != 486000117U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x94 = -1;
	static int32_t x95 = -1;
	int8_t x96 = -22;

	t13 = (x93+((x94*x95)+x96));

	if (t13 != -7642) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = 68U;
	uint32_t x103 = 60462U;
	uint32_t x104 = 218644U;
	uint32_t t14 = 281U;

	t14 = (x101+((x102*x103)+x104));

	if (t14 != 4395595U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = 90432553141939LLU;
	uint64_t x106 = 2674690791LLU;
	int16_t x107 = -27;
	volatile uint64_t t15 = 192825207906226LLU;

	t15 = (x105+((x106*x107)+x108));

	if (t15 != 90360336490592LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x115 = -1;
	static uint64_t x116 = 56882059LLU;
	volatile uint64_t t16 = 16528102072875211LLU;

	t16 = (x113+((x114*x115)+x116));

	if (t16 != 57567071LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x125 = -237;
	int8_t x126 = -18;
	int32_t t17 = 526586334;

	t17 = (x125+((x126*x127)+x128));

	if (t17 != -226661) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = 5236466878LL;
	int8_t x131 = INT8_MAX;
	static uint64_t x132 = 3280526111899110LLU;
	uint64_t t18 = 2678LLU;

	t18 = (x129+((x130*x131)+x132));

	if (t18 != 3280531348365861LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x133 = 0;
	int8_t x134 = INT8_MIN;

	t19 = (x133+((x134*x135)+x136));

	if (t19 != 497661392383LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x138 = UINT64_MAX;
	volatile int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = UINT64_MAX;

	t20 = (x137+((x138*x139)+x140));

	if (t20 != 18446744073709513555LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	static int64_t t21 = 1LL;

	t21 = (x141+((x142*x143)+x144));

	if (t21 != -9223372036854774400LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int64_t x146 = INT64_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MAX;
	uint64_t t22 = 427LLU;

	t22 = (x145+((x146*x147)+x148));

	if (t22 != 9223372036854776191LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x153 = 631;
	volatile uint32_t x154 = UINT32_MAX;
	static int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MAX;

	t23 = (x153+((x154*x155)+x156));

	if (t23 != 33526U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 5U;
	volatile int16_t x158 = INT16_MIN;
	volatile int8_t x159 = INT8_MIN;
	int32_t x160 = 56;
	int32_t t24 = -1600121;

	t24 = (x157+((x158*x159)+x160));

	if (t24 != 4194365) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MAX;

	t25 = (x161+((x162*x163)+x164));

	if (t25 != -8323074LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 0U;
	volatile int32_t x170 = INT32_MIN;
	static uint64_t x171 = UINT64_MAX;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t26 = 81032LLU;

	t26 = (x169+((x170*x171)+x172));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x173 = -94873;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -4721372685LL;
	int64_t t27 = -663271LL;

	t27 = (x173+((x174*x175)+x176));

	if (t27 != -499979164LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x181 = 516582456394LL;
	volatile int32_t x182 = INT32_MIN;
	uint64_t x183 = 0LLU;
	uint8_t x184 = 4U;
	volatile uint64_t t28 = 2103508668754672LLU;

	t28 = (x181+((x182*x183)+x184));

	if (t28 != 516582456398LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = -2;
	volatile uint8_t x187 = 0U;
	uint32_t t29 = 50U;

	t29 = (x185+((x186*x187)+x188));

	if (t29 != 60U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x189 = 700U;
	volatile uint64_t x191 = 27LLU;
	uint64_t t30 = 2247984620042091637LLU;

	t30 = (x189+((x190*x191)+x192));

	if (t30 != 747408998642LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x193 = -1LL;
	uint8_t x194 = 28U;
	volatile uint16_t x195 = 4544U;
	int8_t x196 = INT8_MIN;
	int64_t t31 = -58918109LL;

	t31 = (x193+((x194*x195)+x196));

	if (t31 != 127103LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x198 = 9452803508907LLU;
	volatile uint32_t x199 = 13U;
	int16_t x200 = 2342;
	uint64_t t32 = 3127127913820078135LLU;

	t32 = (x197+((x198*x199)+x200));

	if (t32 != 122886445585365LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x201 = 11956U;
	volatile uint16_t x202 = 6477U;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -1;

	t33 = (x201+((x202*x203)+x204));

	if (t33 != 4294150195U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x205 = INT64_MAX;
	uint16_t x206 = 917U;
	int64_t x207 = 15955117LL;
	int64_t x208 = INT64_MIN;
	int64_t t34 = 1759145337745LL;

	t34 = (x205+((x206*x207)+x208));

	if (t34 != 14630842288LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x209 = 2698973U;
	int32_t x210 = -1;
	int32_t x211 = -4;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t35 = 456LLU;

	t35 = (x209+((x210*x211)+x212));

	if (t35 != 2698976LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 64041935U;
	int16_t x215 = INT16_MIN;
	int8_t x216 = 2;

	t36 = (x213+((x214*x215)+x216));

	if (t36 != 1712881538U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x217 = 0U;
	static volatile uint32_t x218 = 135656U;

	t37 = (x217+((x218*x219)+x220));

	if (t37 != 4294835788U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x221 = 519566280;
	volatile int64_t x224 = -12799559LL;
	static volatile uint64_t t38 = 100LLU;

	t38 = (x221+((x222*x223)+x224));

	if (t38 != 18446744057364233888LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x225 = 1;
	static int32_t x226 = 1760;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -9657;

	t39 = (x225+((x226*x227)+x228));

	if (t39 != -234936) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	volatile uint64_t t40 = 51418085798LLU;

	t40 = (x229+((x230*x231)+x232));

	if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = -1;
	volatile int16_t x242 = 466;
	uint8_t x243 = UINT8_MAX;
	int32_t t41 = -112;

	t41 = (x241+((x242*x243)+x244));

	if (t41 != 114012) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x245 = UINT64_MAX;
	static int16_t x246 = -6;
	uint64_t x247 = 67061197063816LLU;
	static int32_t x248 = -1;
	volatile uint64_t t42 = 3215930635LLU;

	t42 = (x245+((x246*x247)+x248));

	if (t42 != 18446341706527168718LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = INT16_MAX;
	int8_t x251 = -1;
	volatile uint64_t x252 = 3231054433207756LLU;
	static uint64_t t43 = 100632398770230172LLU;

	t43 = (x249+((x250*x251)+x252));

	if (t43 != 9226603091287950797LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x253 = INT64_MAX;
	static volatile uint64_t x254 = UINT64_MAX;
	int8_t x256 = -9;
	uint64_t t44 = 0LLU;

	t44 = (x253+((x254*x255)+x256));

	if (t44 != 9223371022581915265LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = 1;
	uint64_t x259 = 4930900328104862717LLU;
	static int32_t x260 = -546223006;
	volatile uint64_t t45 = 55LLU;

	t45 = (x257+((x258*x259)+x260));

	if (t45 != 4930900327558639966LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = INT64_MAX;
	uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 10680LLU;
	int32_t x264 = INT32_MAX;
	static volatile uint64_t t46 = 4059LLU;

	t46 = (x261+((x262*x263)+x264));

	if (t46 != 9223372039004982854LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = INT64_MIN;
	static uint16_t x266 = UINT16_MAX;
	int16_t x268 = 0;
	int64_t t47 = 4LL;

	t47 = (x265+((x266*x267)+x268));

	if (t47 != -9223372036852088873LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	static uint64_t x272 = 155LLU;
	uint64_t t48 = 15624664289LLU;

	t48 = (x269+((x270*x271)+x272));

	if (t48 != 32925LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x273 = 28U;
	volatile uint8_t x274 = 7U;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t49 = 248096U;

	t49 = (x273+((x274*x275)+x276));

	if (t49 != 4294935445U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x277 = INT16_MIN;
	volatile int16_t x279 = -1;
	uint8_t x280 = 1U;
	volatile int32_t t50 = 15296507;

	t50 = (x277+((x278*x279)+x280));

	if (t50 != -32774) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = 0;
	volatile int16_t x286 = -1;
	uint16_t x288 = UINT16_MAX;
	int64_t t51 = 2055170845717LL;

	t51 = (x285+((x286*x287)+x288));

	if (t51 != 649647555426LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x301 = -1;
	volatile uint32_t x302 = 25U;
	uint8_t x303 = UINT8_MAX;
	volatile uint32_t t52 = 255U;

	t52 = (x301+((x302*x303)+x304));

	if (t52 != 6831U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x305 = INT64_MAX;
	static uint64_t x307 = 470LLU;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t53 = 1043026093686750LLU;

	t53 = (x305+((x306*x307)+x308));

	if (t53 != 9223372036855109849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = 2055062688919828267LL;
	static uint64_t x315 = UINT64_MAX;
	static volatile uint64_t t54 = 173499086519888LLU;

	t54 = (x313+((x314*x315)+x316));

	if (t54 != 16391681382642239700LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -1LL;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = 56U;

	t55 = (x317+((x318*x319)+x320));

	if (t55 != -200LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x321 = 332U;
	static int8_t x322 = INT8_MAX;
	uint16_t x324 = UINT16_MAX;
	static int32_t t56 = -369857096;

	t56 = (x321+((x322*x323)+x324));

	if (t56 != 65740) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x325 = -1;
	static int32_t x326 = INT32_MAX;
	static uint64_t x327 = 3140564537527971783LLU;
	int32_t x328 = 17;

	t57 = (x325+((x326*x327)+x328));

	if (t57 != 3400236499658395721LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x329 = INT8_MAX;
	uint32_t x330 = 22335662U;
	static int16_t x331 = INT16_MIN;
	static int32_t x332 = 74;

	t58 = (x329+((x330*x331)+x332));

	if (t58 != 2544435401U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x333 = 3U;
	uint64_t x334 = 32LLU;
	int64_t x335 = -7824LL;
	uint32_t x336 = 1628552933U;
	volatile uint64_t t59 = 5621943LLU;

	t59 = (x333+((x334*x335)+x336));

	if (t59 != 1628302568LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 119U;
	volatile int16_t x351 = INT16_MAX;
	uint32_t x352 = UINT32_MAX;

	t60 = (x349+((x350*x351)+x352));

	if (t60 != 3899144U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x353 = -162;
	int64_t x354 = 4197625LL;
	int64_t x355 = 0LL;
	volatile uint64_t t61 = 752LLU;

	t61 = (x353+((x354*x355)+x356));

	if (t61 != 18446744073709551453LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x361 = 3687030U;
	uint64_t x362 = UINT64_MAX;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t62 = 508523879LLU;

	t62 = (x361+((x362*x363)+x364));

	if (t62 != 18446744071565689463LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x365 = 1025U;
	static int64_t x366 = -1LL;
	int16_t x367 = 1;
	volatile uint8_t x368 = 1U;
	volatile int64_t t63 = -6180199439LL;

	t63 = (x365+((x366*x367)+x368));

	if (t63 != 1025LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x381 = INT32_MAX;
	int32_t x382 = -1;
	int32_t x383 = -343551;
	uint32_t x384 = 18U;
	static uint32_t t64 = 183U;

	t64 = (x381+((x382*x383)+x384));

	if (t64 != 2147827216U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x397 = -1410174;
	uint32_t x398 = UINT32_MAX;
	static uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MAX;
	uint64_t t65 = 19758735729LLU;

	t65 = (x397+((x398*x399)+x400));

	if (t65 != 18446744069413174274LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	uint32_t x408 = 5U;
	static int64_t t66 = -853983318LL;

	t66 = (x405+((x406*x407)+x408));

	if (t66 != -9223372036854775675LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x409 = INT8_MIN;
	static uint8_t x410 = UINT8_MAX;
	int8_t x412 = INT8_MAX;
	volatile int64_t t67 = 22234013364168LL;

	t67 = (x409+((x410*x411)+x412));

	if (t67 != -11221LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = 4;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t t68 = -13677;

	t68 = (x417+((x418*x419)+x420));

	if (t68 != 262266) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x421 = 24U;
	int16_t x422 = INT16_MAX;
	int8_t x423 = INT8_MIN;
	static int32_t x424 = -1;

	t69 = (x421+((x422*x423)+x424));

	if (t69 != -4194153) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = 3229;
	volatile int8_t x426 = INT8_MIN;
	volatile uint32_t x428 = 3177U;
	volatile uint32_t t70 = 30364U;

	t70 = (x425+((x426*x427)+x428));

	if (t70 != 22790U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x429 = INT32_MIN;
	volatile int64_t x432 = INT64_MIN;
	volatile int64_t t71 = -1699394845172LL;

	t71 = (x429+((x430*x431)+x432));

	if (t71 != -9223372035717201920LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x433 = INT8_MIN;
	static int8_t x436 = 23;
	static volatile uint64_t t72 = 254761LLU;

	t72 = (x433+((x434*x435)+x436));

	if (t72 != 18443879645920041263LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x437 = -40;
	static volatile int8_t x438 = -1;
	int8_t x439 = 16;
	int8_t x440 = INT8_MIN;

	t73 = (x437+((x438*x439)+x440));

	if (t73 != -184) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x447 = 4;
	volatile int8_t x448 = INT8_MIN;
	volatile int64_t t74 = 3290LL;

	t74 = (x445+((x446*x447)+x448));

	if (t74 != 26433209453LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x457 = 305LL;
	uint32_t x458 = 10677088U;
	int64_t x459 = -1LL;
	int16_t x460 = -1;

	t75 = (x457+((x458*x459)+x460));

	if (t75 != -10676784LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x461 = 1;
	uint8_t x462 = 69U;
	static uint32_t x463 = 507U;
	int64_t x464 = INT64_MIN;

	t76 = (x461+((x462*x463)+x464));

	if (t76 != -9223372036854740824LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x477 = 15572U;
	uint64_t x478 = 2033377916537LLU;
	int16_t x479 = -401;
	static int16_t x480 = INT16_MIN;
	static volatile uint64_t t77 = 9607216772447LLU;

	t77 = (x477+((x478*x479)+x480));

	if (t77 != 18445928689165003083LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	int8_t x482 = -1;
	uint16_t x483 = 7U;
	static volatile int16_t x484 = INT16_MIN;
	volatile int32_t t78 = 341333;

	t78 = (x481+((x482*x483)+x484));

	if (t78 != -65543) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x485 = 13065U;
	static int64_t x486 = INT64_MIN;
	int8_t x487 = 0;
	uint32_t x488 = 47U;
	static volatile int64_t t79 = -7803LL;

	t79 = (x485+((x486*x487)+x488));

	if (t79 != 13112LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x489 = 2U;
	volatile int64_t x491 = -1LL;
	static uint8_t x492 = 1U;
	volatile int64_t t80 = -24384295583769959LL;

	t80 = (x489+((x490*x491)+x492));

	if (t80 != -252LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x493 = INT64_MAX;
	uint16_t x495 = 9U;

	t81 = (x493+((x494*x495)+x496));

	if (t81 != 9223372036854741887LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x501 = 1549256141U;
	uint16_t x502 = UINT16_MAX;
	uint64_t x503 = 11LLU;
	static uint64_t t82 = 61176255679766219LLU;

	t82 = (x501+((x502*x503)+x504));

	if (t82 != 1549977025LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x507 = 11605637569998LLU;
	uint64_t t83 = 0LLU;

	t83 = (x505+((x506*x507)+x508));

	if (t83 != 17037740063779316758LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x509 = INT32_MIN;
	int8_t x510 = -1;
	int64_t x512 = INT64_MAX;
	int64_t t84 = -1828495468888274823LL;

	t84 = (x509+((x510*x511)+x512));

	if (t84 != 9223372034707178958LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x513 = 254483U;
	int8_t x514 = 8;
	int32_t x515 = 12223640;
	uint8_t x516 = 26U;
	uint32_t t85 = 145U;

	t85 = (x513+((x514*x515)+x516));

	if (t85 != 98043629U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x521 = 0;
	static int16_t x522 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t86 = 1163144265140287LLU;

	t86 = (x521+((x522*x523)+x524));

	if (t86 != 32640LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x525 = -1;
	static uint8_t x527 = 16U;
	static int64_t x528 = INT64_MIN;

	t87 = (x525+((x526*x527)+x528));

	if (t87 != 9223372045703289455LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x529 = UINT64_MAX;
	int16_t x532 = 63;
	volatile uint64_t t88 = 646150587805885114LLU;

	t88 = (x529+((x530*x531)+x532));

	if (t88 != 62LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x539 = -24645LL;
	static volatile int8_t x540 = 0;
	int64_t t89 = 154755476436524351LL;

	t89 = (x537+((x538*x539)+x540));

	if (t89 != 60236561LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x545 = INT8_MIN;
	volatile int8_t x546 = 5;
	static volatile int32_t x548 = -1;
	static int32_t t90 = -290461;

	t90 = (x545+((x546*x547)+x548));

	if (t90 != -714) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = UINT8_MAX;
	volatile int8_t x550 = -1;
	static uint64_t x551 = 62LLU;
	int16_t x552 = INT16_MAX;
	uint64_t t91 = 573131276LLU;

	t91 = (x549+((x550*x551)+x552));

	if (t91 != 32960LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x553 = INT32_MAX;
	int16_t x554 = -1;
	static uint32_t x555 = 120214625U;
	volatile uint32_t x556 = 862069U;

	t92 = (x553+((x554*x555)+x556));

	if (t92 != 2028131091U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x557 = 2U;
	int32_t x558 = -1;
	uint16_t x559 = UINT16_MAX;

	t93 = (x557+((x558*x559)+x560));

	if (t93 != -61824LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x565 = -82903LL;
	uint8_t x568 = UINT8_MAX;
	volatile uint64_t t94 = 1985640603746501LLU;

	t94 = (x565+((x566*x567)+x568));

	if (t94 != 18446744073709468713LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x569 = -1;
	uint32_t x570 = 298507U;
	int32_t x571 = -101537;
	static int16_t x572 = INT16_MIN;
	uint32_t t95 = 16297U;

	t95 = (x569+((x570*x571)+x572));

	if (t95 != 4050200340U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x573 = UINT64_MAX;
	int8_t x574 = 1;
	volatile uint64_t t96 = 4332935515697582LLU;

	t96 = (x573+((x574*x575)+x576));

	if (t96 != 2400453381LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x577 = -1;
	volatile uint32_t x578 = 2U;
	uint16_t x580 = UINT16_MAX;
	uint32_t t97 = 86330946U;

	t97 = (x577+((x578*x579)+x580));

	if (t97 != 65788U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x585 = 11349U;
	int8_t x587 = 2;
	volatile int16_t x588 = 213;
	volatile uint32_t t98 = 139U;

	t98 = (x585+((x586*x587)+x588));

	if (t98 != 11560U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x597 = UINT64_MAX;
	int16_t x598 = -5399;
	volatile uint32_t x599 = 9492U;
	int64_t x600 = -1LL;

	t99 = (x597+((x598*x599)+x600));

	if (t99 != 4243719986LLU) { NG(); } else { ; }
	
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

