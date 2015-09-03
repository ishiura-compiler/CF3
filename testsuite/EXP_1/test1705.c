#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -442261;
volatile int64_t x13 = 34675860559103642LL;
uint32_t x15 = 79771004U;
volatile int8_t x21 = INT8_MIN;
uint32_t x24 = 344421U;
static int64_t x34 = INT64_MAX;
static uint8_t x41 = 7U;
volatile int32_t x47 = INT32_MIN;
int16_t x56 = INT16_MAX;
uint64_t x57 = 13195LLU;
static int8_t x66 = -1;
int32_t x73 = INT32_MIN;
int32_t x74 = INT32_MIN;
volatile int16_t x81 = 255;
volatile int8_t x89 = INT8_MIN;
int32_t x113 = -1;
static uint16_t x114 = 554U;
volatile uint32_t x115 = 839164U;
static volatile uint32_t t22 = 280U;
uint16_t x122 = UINT16_MAX;
int32_t x124 = -1;
volatile uint64_t x128 = 1033697LLU;
uint8_t x137 = 115U;
int32_t t26 = 0;
uint32_t x152 = 7559U;
int16_t x160 = INT16_MIN;
static int64_t x162 = 15999937369LL;
uint64_t x165 = UINT64_MAX;
static uint64_t x166 = 23LLU;
int32_t x168 = INT32_MIN;
int16_t x170 = INT16_MIN;
volatile int64_t x171 = -1LL;
static volatile int8_t x173 = 0;
uint64_t x175 = UINT64_MAX;
int32_t x180 = INT32_MIN;
uint8_t x189 = 16U;
int32_t t36 = 75;
static int64_t x201 = INT64_MIN;
int64_t x202 = INT64_MAX;
uint32_t t39 = 708485966U;
static int64_t x222 = 856LL;
static volatile int32_t x224 = INT32_MAX;
uint8_t x230 = UINT8_MAX;
int8_t x232 = INT8_MAX;
volatile int64_t t43 = 11371958LL;
uint32_t x250 = UINT32_MAX;
uint8_t x257 = 1U;
volatile uint8_t x258 = 99U;
int64_t x263 = INT64_MIN;
volatile int64_t x268 = INT64_MAX;
int64_t t50 = -4416658522078LL;
int8_t x274 = -1;
volatile int64_t t52 = 1LL;
int32_t t53 = 165883114;
int8_t x287 = -7;
int64_t x289 = INT64_MAX;
static int64_t x300 = 34044005LL;
int32_t x303 = INT32_MIN;
static int64_t t58 = 3746LL;
int64_t x327 = -2LL;
volatile int64_t t62 = -492LL;
volatile uint8_t x332 = UINT8_MAX;
int64_t t63 = 63LL;
volatile int64_t x333 = 95190816092722LL;
uint64_t x334 = UINT64_MAX;
int32_t x341 = -1;
uint64_t x342 = 21LLU;
static uint8_t x351 = 115U;
static uint16_t x352 = UINT16_MAX;
volatile int32_t t68 = 4;
int64_t x355 = INT64_MAX;
uint64_t x358 = 1LLU;
volatile uint16_t x367 = 47U;
volatile uint32_t t73 = 1264U;
static volatile int64_t x381 = INT64_MAX;
int8_t x384 = 2;
volatile uint8_t x391 = 39U;
static uint64_t x402 = UINT64_MAX;
static uint32_t x407 = 434U;
int32_t x416 = INT32_MIN;
static int64_t x417 = -1LL;
static int16_t x418 = INT16_MAX;
static uint64_t x419 = 8LLU;
static volatile uint64_t t82 = 10899490LLU;
int32_t x429 = INT32_MIN;
volatile int8_t x431 = -52;
uint16_t x433 = 449U;
static int64_t x435 = -1LL;
volatile int16_t x440 = INT16_MIN;
static volatile int64_t t88 = -70LL;
int64_t x445 = 386LL;
int8_t x447 = -5;
int64_t t89 = -34533618550LL;
uint32_t x455 = 732581145U;
volatile int8_t x465 = INT8_MAX;
int16_t x467 = -783;
int8_t x468 = INT8_MIN;
uint32_t x477 = 7880617U;
volatile uint32_t t94 = 1743U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = 903898089;
	volatile int64_t x3 = -1LL;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 21463047309957560LL;

	t0 = (((x1&x2)-x3)-x4);

	if (t0 != 32769LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 7;
	uint16_t x6 = UINT16_MAX;
	static uint8_t x7 = 38U;
	uint8_t x8 = 9U;

	t1 = (((x5&x6)-x7)-x8);

	if (t1 != -40) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	int64_t t2 = 1248335334877LL;

	t2 = (((x13&x14)-x15)-x16);

	if (t2 != 34675860479332766LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	static int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t3 = 21649;

	t3 = (((x17&x18)-x19)-x20);

	if (t3 != -2147451007) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 24U;
	int32_t x23 = 721023316;
	uint32_t t4 = 105896U;

	t4 = (((x21&x22)-x23)-x24);

	if (t4 != 3573599559U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	int16_t x27 = INT16_MAX;
	uint32_t x28 = 344U;
	static uint32_t t5 = 241153U;

	t5 = (((x25&x26)-x27)-x28);

	if (t5 != 4294934184U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = 938;
	uint8_t x35 = 112U;
	volatile int8_t x36 = INT8_MIN;
	volatile int64_t t6 = -337150LL;

	t6 = (((x33&x34)-x35)-x36);

	if (t6 != 954LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 5598U;
	uint8_t x40 = 3U;
	volatile int64_t t7 = 0LL;

	t7 = (((x37&x38)-x39)-x40);

	if (t7 != 9223372036854737439LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 32U;
	int8_t x44 = INT8_MIN;
	int32_t t8 = -1780405;

	t8 = (((x41&x42)-x43)-x44);

	if (t8 != 96) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MIN;
	uint64_t x46 = 190046LLU;
	uint16_t x48 = UINT16_MAX;
	uint64_t t9 = 6720608937LLU;

	t9 = (((x45&x46)-x47)-x48);

	if (t9 != 2147418113LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	static uint8_t x54 = UINT8_MAX;
	int8_t x55 = -26;
	static volatile int32_t t10 = 13947;

	t10 = (((x53&x54)-x55)-x56);

	if (t10 != -32486) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x58 = INT64_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile int64_t x60 = INT64_MAX;
	static uint64_t t11 = 39LLU;

	t11 = (((x57&x58)-x59)-x60);

	if (t11 != 9223372036854789005LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MAX;
	int8_t x63 = 0;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t12 = -149;

	t12 = (((x61&x62)-x63)-x64);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -56247351765LL;
	uint64_t x67 = 389730425326341LLU;
	static uint64_t x68 = 2876LLU;
	uint64_t t13 = 535452292377302LLU;

	t13 = (((x65&x66)-x67)-x68);

	if (t13 != 18446354287036870634LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile int8_t x71 = INT8_MAX;
	uint32_t x72 = 92821394U;
	static int64_t t14 = -147597139656984LL;

	t14 = (((x69&x70)-x71)-x72);

	if (t14 != -92821266LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	int64_t t15 = -5695928302763LL;

	t15 = (((x73&x74)-x75)-x76);

	if (t15 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	int64_t x78 = -1LL;
	static int16_t x79 = INT16_MIN;
	uint32_t x80 = 175356U;
	int64_t t16 = 29024LL;

	t16 = (((x77&x78)-x79)-x80);

	if (t16 != -142589LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -1LL;
	int32_t x83 = -978;
	volatile uint8_t x84 = 3U;
	volatile int64_t t17 = 1LL;

	t17 = (((x81&x82)-x83)-x84);

	if (t17 != 1230LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x90 = INT16_MAX;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	uint64_t t18 = 1824660LLU;

	t18 = (((x89&x90)-x91)-x92);

	if (t18 != 9223372036854808449LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 16611314LLU;
	uint64_t x102 = UINT64_MAX;
	static int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t19 = 53LLU;

	t19 = (((x101&x102)-x103)-x104);

	if (t19 != 2164127730LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = 232U;
	int32_t x106 = -1;
	int64_t x107 = 2638383573976290LL;
	volatile int32_t x108 = INT32_MAX;
	volatile int64_t t20 = 8360718094117068LL;

	t20 = (((x105&x106)-x107)-x108);

	if (t20 != -2638385721459705LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = 260904770;
	static int64_t x110 = -3061014627LL;
	uint8_t x111 = 4U;
	uint32_t x112 = 16520410U;
	int64_t t21 = -17458910731881LL;

	t21 = (((x109&x110)-x111)-x112);

	if (t21 != 143655458LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x116 = INT32_MIN;

	t22 = (((x113&x114)-x115)-x116);

	if (t22 != 2146645038U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = 325775866LLU;
	int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MAX;
	int32_t x120 = 0;
	uint64_t t23 = 1050121987968099LLU;

	t23 = (((x117&x118)-x119)-x120);

	if (t23 != 325743099LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 42214130U;
	static int8_t x123 = 24;
	uint32_t t24 = 5243094U;

	t24 = (((x121&x122)-x123)-x124);

	if (t24 != 8923U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = 457LL;
	int64_t x127 = -1LL;
	volatile uint64_t t25 = 1551479LLU;

	t25 = (((x125&x126)-x127)-x128);

	if (t25 != 18446744073708517920LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = 218415;
	uint8_t x140 = 5U;

	t26 = (((x137&x138)-x139)-x140);

	if (t26 != -218420) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = -1;
	static int64_t x150 = -1569179346197349LL;
	static uint32_t x151 = 9929U;
	static volatile int64_t t27 = 862755814896479393LL;

	t27 = (((x149&x150)-x151)-x152);

	if (t27 != -1569179346214837LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -1;
	volatile int16_t x154 = INT16_MAX;
	static volatile int16_t x155 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t28 = -192;

	t28 = (((x153&x154)-x155)-x156);

	if (t28 != 65280) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x157 = 26U;
	int8_t x158 = -45;
	int16_t x159 = INT16_MIN;
	static volatile int32_t t29 = -14;

	t29 = (((x157&x158)-x159)-x160);

	if (t29 != 65554) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = INT64_MAX;
	uint8_t x163 = 11U;
	volatile int8_t x164 = INT8_MAX;
	int64_t t30 = 0LL;

	t30 = (((x161&x162)-x163)-x164);

	if (t30 != 15999937231LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x167 = UINT32_MAX;
	volatile uint64_t t31 = 923778365LLU;

	t31 = (((x165&x166)-x167)-x168);

	if (t31 != 18446744071562067992LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x169 = 13;
	uint64_t x172 = 41121258034567LLU;
	volatile uint64_t t32 = 4245LLU;

	t32 = (((x169&x170)-x171)-x172);

	if (t32 != 18446702952451517050LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x174 = INT32_MIN;
	uint16_t x176 = UINT16_MAX;
	uint64_t t33 = 2LLU;

	t33 = (((x173&x174)-x175)-x176);

	if (t33 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = UINT16_MAX;
	static uint64_t x178 = 240306144353262307LLU;
	int32_t x179 = -34744350;
	static uint64_t t34 = 223023849996306LLU;

	t34 = (((x177&x178)-x179)-x180);

	if (t34 != 2182234881LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x190 = INT64_MIN;
	static volatile int8_t x191 = 9;
	uint32_t x192 = 397U;
	volatile int64_t t35 = -6493LL;

	t35 = (((x189&x190)-x191)-x192);

	if (t35 != -406LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	int16_t x200 = -7654;

	t36 = (((x197&x198)-x199)-x200);

	if (t36 != 2147458534) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MAX;
	volatile int64_t t37 = -3035100751LL;

	t37 = (((x201&x202)-x203)-x204);

	if (t37 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = INT16_MIN;
	static volatile int64_t x206 = INT64_MIN;
	static int8_t x207 = INT8_MIN;
	volatile uint8_t x208 = 38U;
	int64_t t38 = -48083426071766364LL;

	t38 = (((x205&x206)-x207)-x208);

	if (t38 != -9223372036854775718LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = 5U;
	uint8_t x214 = 15U;
	uint32_t x215 = 23U;
	static volatile int8_t x216 = 6;

	t39 = (((x213&x214)-x215)-x216);

	if (t39 != 4294967272U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x221 = 201352256411577396LLU;
	int16_t x223 = -25;
	volatile uint64_t t40 = 0LLU;

	t40 = (((x221&x222)-x223)-x224);

	if (t40 != 18446744071562068010LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x225 = -275LL;
	uint16_t x226 = 15428U;
	int8_t x227 = INT8_MIN;
	volatile uint32_t x228 = 113588U;
	int64_t t41 = 64751629583LL;

	t41 = (((x225&x226)-x227)-x228);

	if (t41 != -98032LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x229 = 4U;
	static int16_t x231 = -1;
	int32_t t42 = -24966216;

	t42 = (((x229&x230)-x231)-x232);

	if (t42 != -122) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = 1;
	uint16_t x235 = 312U;
	int64_t x236 = -27LL;

	t43 = (((x233&x234)-x235)-x236);

	if (t43 != -285LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = 6129265LL;
	int8_t x242 = INT8_MIN;
	int16_t x243 = 57;
	int64_t x244 = -1LL;
	static volatile int64_t t44 = -11651512743757LL;

	t44 = (((x241&x242)-x243)-x244);

	if (t44 != 6129096LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	int8_t x248 = 0;
	volatile int64_t t45 = 21603914LL;

	t45 = (((x245&x246)-x247)-x248);

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x249 = -1;
	volatile int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MAX;
	uint32_t t46 = 60U;

	t46 = (((x249&x250)-x251)-x252);

	if (t46 != 2147516416U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = -1;
	static uint32_t x254 = UINT32_MAX;
	uint16_t x255 = 3625U;
	uint32_t x256 = 1787274U;
	uint32_t t47 = 255346U;

	t47 = (((x253&x254)-x255)-x256);

	if (t47 != 4293176396U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = INT16_MIN;
	static volatile int32_t t48 = 15205;

	t48 = (((x257&x258)-x259)-x260);

	if (t48 != 32514) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	uint64_t x264 = 7898734625929756LLU;
	volatile uint64_t t49 = 58643951LLU;

	t49 = (((x261&x262)-x263)-x264);

	if (t49 != 18438845339083621860LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -22;

	t50 = (((x265&x266)-x267)-x268);

	if (t50 != -9223372032559808490LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x269 = 2U;
	int32_t x270 = 10755;
	uint64_t x271 = 1LLU;
	int64_t x272 = INT64_MAX;
	static volatile uint64_t t51 = 32452LLU;

	t51 = (((x269&x270)-x271)-x272);

	if (t51 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = 9;
	volatile int64_t x275 = 2573952476947884LL;
	uint16_t x276 = 42U;

	t52 = (((x273&x274)-x275)-x276);

	if (t52 != -2573952476947917LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x277 = -47;
	uint8_t x278 = 12U;
	uint8_t x279 = 11U;
	int32_t x280 = 10558;

	t53 = (((x277&x278)-x279)-x280);

	if (t53 != -10569) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x281 = 0U;
	int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	static uint32_t x284 = 39864673U;
	volatile uint32_t t54 = 5758476U;

	t54 = (((x281&x282)-x283)-x284);

	if (t54 != 2107618976U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	static int32_t x288 = INT32_MAX;
	int32_t t55 = -1539588;

	t55 = (((x285&x286)-x287)-x288);

	if (t55 != -2147450872) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x290 = 28164U;
	static int8_t x291 = 44;
	uint16_t x292 = 28U;
	int64_t t56 = -5086968601342529LL;

	t56 = (((x289&x290)-x291)-x292);

	if (t56 != 28092LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x297 = 683;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = -964277661106LL;
	volatile int64_t t57 = 886708698755934656LL;

	t57 = (((x297&x298)-x299)-x300);

	if (t57 != 964243617784LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = -2LL;
	int8_t x304 = -1;

	t58 = (((x301&x302)-x303)-x304);

	if (t58 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x305 = -10;
	int16_t x306 = INT16_MIN;
	static uint64_t x307 = 688385108LLU;
	static int16_t x308 = -1;
	static uint64_t t59 = 6LLU;

	t59 = (((x305&x306)-x307)-x308);

	if (t59 != 18446744073021133741LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	uint16_t x311 = 466U;
	int64_t x312 = -1LL;
	volatile int64_t t60 = 12LL;

	t60 = (((x309&x310)-x311)-x312);

	if (t60 != -33233LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x317 = INT64_MIN;
	static int16_t x318 = -1;
	static int16_t x319 = -1;
	int32_t x320 = -1;
	volatile int64_t t61 = 45029654072LL;

	t61 = (((x317&x318)-x319)-x320);

	if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MAX;
	volatile int32_t x328 = INT32_MIN;

	t62 = (((x325&x326)-x327)-x328);

	if (t62 != 2147483650LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x329 = -76;
	volatile int64_t x330 = -471360191LL;
	uint32_t x331 = UINT32_MAX;

	t63 = (((x329&x330)-x331)-x332);

	if (t63 != -4766327806LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x335 = -28;
	volatile int8_t x336 = 0;
	static uint64_t t64 = 32272LLU;

	t64 = (((x333&x334)-x335)-x336);

	if (t64 != 95190816092750LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x337 = 50232861295LLU;
	static int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	static volatile int8_t x340 = -1;
	volatile uint64_t t65 = 55139886083040539LLU;

	t65 = (((x337&x338)-x339)-x340);

	if (t65 != 50232860930LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x343 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile uint64_t t66 = 2285376058LLU;

	t66 = (((x341&x342)-x343)-x344);

	if (t66 != 32534LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x345 = 95U;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -127;
	static uint16_t x348 = 834U;
	static int32_t t67 = -5;

	t67 = (((x345&x346)-x347)-x348);

	if (t67 != -707) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -1;
	int16_t x350 = 1;

	t68 = (((x349&x350)-x351)-x352);

	if (t68 != -65649) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x353 = UINT32_MAX;
	static int16_t x354 = INT16_MIN;
	static int16_t x356 = -125;
	volatile int64_t t69 = 61453886631636030LL;

	t69 = (((x353&x354)-x355)-x356);

	if (t69 != -9223372032559841154LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = INT64_MAX;
	int16_t x359 = 5036;
	static int64_t x360 = -157996621LL;
	volatile uint64_t t70 = 3871716355350LLU;

	t70 = (((x357&x358)-x359)-x360);

	if (t70 != 157991586LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = 10628468778310801LLU;
	static int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	static volatile uint64_t t71 = 142743014572LLU;

	t71 = (((x361&x362)-x363)-x364);

	if (t71 != 10628470925754369LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x365 = 14LLU;
	int16_t x366 = -1;
	volatile int32_t x368 = -33539;
	volatile uint64_t t72 = 104860981882970LLU;

	t72 = (((x365&x366)-x367)-x368);

	if (t72 != 33506LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 54551134U;
	volatile int32_t x374 = INT32_MIN;
	int32_t x375 = -62;
	volatile int16_t x376 = INT16_MIN;

	t73 = (((x373&x374)-x375)-x376);

	if (t73 != 32830U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	uint32_t x379 = 28U;
	volatile int32_t x380 = -350778;
	uint32_t t74 = 234U;

	t74 = (((x377&x378)-x379)-x380);

	if (t74 != 2147834398U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MAX;
	volatile int64_t t75 = -1LL;

	t75 = (((x381&x382)-x383)-x384);

	if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x389 = 102546990903076562LL;
	int8_t x390 = -23;
	int32_t x392 = -1;
	int64_t t76 = 267711188819248LL;

	t76 = (((x389&x390)-x391)-x392);

	if (t76 != 102546990903076506LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = 0;
	volatile int64_t x395 = 2940938LL;
	int64_t x396 = 1224206721LL;
	int64_t t77 = 452613201901LL;

	t77 = (((x393&x394)-x395)-x396);

	if (t77 != -1227147659LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = -1;
	uint64_t x399 = 956879055LLU;
	int8_t x400 = -45;
	static volatile uint64_t t78 = 365803683757252332LLU;

	t78 = (((x397&x398)-x399)-x400);

	if (t78 != 18446744072752672733LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = -1LL;
	volatile int16_t x403 = INT16_MIN;
	volatile uint8_t x404 = UINT8_MAX;
	volatile uint64_t t79 = 182776254819583LLU;

	t79 = (((x401&x402)-x403)-x404);

	if (t79 != 32512LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x405 = 3305709567LL;
	int8_t x406 = -1;
	volatile int16_t x408 = INT16_MIN;
	volatile int64_t t80 = -133007619779278399LL;

	t80 = (((x405&x406)-x407)-x408);

	if (t80 != 3305741901LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x413 = 1460U;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	volatile uint32_t t81 = 11314U;

	t81 = (((x413&x414)-x415)-x416);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x420 = INT32_MIN;

	t82 = (((x417&x418)-x419)-x420);

	if (t82 != 2147516407LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x421 = 79U;
	int16_t x422 = 2489;
	int32_t x423 = -1;
	uint32_t x424 = 93008U;
	static volatile uint32_t t83 = 3870U;

	t83 = (((x421&x422)-x423)-x424);

	if (t83 != 4294874298U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x425 = 5U;
	uint64_t x426 = 3544248868256LLU;
	static uint64_t x427 = 14302906139LLU;
	uint16_t x428 = 7307U;
	uint64_t t84 = 125399927LLU;

	t84 = (((x425&x426)-x427)-x428);

	if (t84 != 18446744059406638170LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x430 = 6156U;
	uint8_t x432 = 12U;
	int32_t t85 = -94761354;

	t85 = (((x429&x430)-x431)-x432);

	if (t85 != 40) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x434 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	int64_t t86 = 13138LL;

	t86 = (((x433&x434)-x435)-x436);

	if (t86 != 33153LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = INT8_MAX;
	static int32_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	uint64_t t87 = 3555964663LLU;

	t87 = (((x437&x438)-x439)-x440);

	if (t87 != 32896LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x441 = INT64_MIN;
	uint32_t x442 = 13404842U;
	volatile int8_t x443 = INT8_MIN;
	int16_t x444 = -16281;

	t88 = (((x441&x442)-x443)-x444);

	if (t88 != 16409LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x446 = INT64_MIN;
	static int16_t x448 = -1;

	t89 = (((x445&x446)-x447)-x448);

	if (t89 != 6LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x453 = -156;
	int8_t x454 = -1;
	static int32_t x456 = INT32_MIN;
	uint32_t t90 = 81101518U;

	t90 = (((x453&x454)-x455)-x456);

	if (t90 != 1414902347U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x466 = INT16_MIN;
	volatile int32_t t91 = 316611;

	t91 = (((x465&x466)-x467)-x468);

	if (t91 != 911) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = -4663143;
	static volatile int8_t x470 = INT8_MIN;
	uint64_t x471 = UINT64_MAX;
	uint8_t x472 = UINT8_MAX;
	static uint64_t t92 = 4092283224379LLU;

	t92 = (((x469&x470)-x471)-x472);

	if (t92 != 18446744073704888194LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x473 = 9U;
	static int32_t x474 = -100897;
	int16_t x475 = INT16_MAX;
	uint64_t x476 = UINT64_MAX;
	static uint64_t t93 = 6828537LLU;

	t93 = (((x473&x474)-x475)-x476);

	if (t93 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x478 = -1;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = 2U;

	t94 = (((x477&x478)-x479)-x480);

	if (t94 != 7880743U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = INT8_MIN;
	volatile int8_t x482 = 57;
	static int8_t x483 = INT8_MAX;
	int8_t x484 = -4;
	static int32_t t95 = 92280001;

	t95 = (((x481&x482)-x483)-x484);

	if (t95 != -123) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x485 = 57381635985362119LLU;
	int64_t x486 = -1LL;
	volatile int16_t x487 = INT16_MIN;
	int8_t x488 = -1;
	uint64_t t96 = 3604893850407819784LLU;

	t96 = (((x485&x486)-x487)-x488);

	if (t96 != 57381635985394888LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MIN;
	uint64_t x490 = 1077100LLU;
	int16_t x491 = -524;
	volatile uint8_t x492 = 6U;
	volatile uint64_t t97 = 117109165716315LLU;

	t97 = (((x489&x490)-x491)-x492);

	if (t97 != 1077510LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x493 = 25315;
	int64_t x494 = -198673273160673555LL;
	int64_t x495 = 655347907635LL;
	static volatile int32_t x496 = -9089;
	static int64_t t98 = 331279399445LL;

	t98 = (((x493&x494)-x495)-x496);

	if (t98 != -655347881425LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x501 = 74LLU;
	int32_t x502 = 29193;
	int64_t x503 = -5051953061943LL;
	volatile uint32_t x504 = UINT32_MAX;
	static uint64_t t99 = 3187065257605037209LLU;

	t99 = (((x501&x502)-x503)-x504);

	if (t99 != 5047658094656LLU) { NG(); } else { ; }
	
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

