#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 0;
static int16_t x5 = INT16_MAX;
int64_t x6 = INT64_MAX;
static int64_t x13 = -8678492403LL;
uint64_t x20 = 24LLU;
int64_t x26 = 27LL;
volatile uint64_t t4 = 3359LLU;
int8_t x32 = -1;
int16_t x33 = -1;
int8_t x35 = INT8_MAX;
int32_t t6 = -925647;
static volatile uint8_t x37 = 4U;
int16_t x40 = INT16_MIN;
static int32_t x43 = -1;
uint16_t x44 = UINT16_MAX;
int32_t x49 = INT32_MAX;
static volatile int32_t x50 = 59;
int64_t t10 = 574LL;
int32_t x59 = INT32_MIN;
static int8_t x69 = INT8_MAX;
static volatile int32_t x73 = -677;
static int8_t x81 = INT8_MAX;
volatile uint64_t x83 = UINT64_MAX;
uint64_t t16 = 7748499656LLU;
int32_t x89 = INT32_MIN;
uint64_t x91 = 3817LLU;
uint64_t t18 = 10850625159905201LLU;
static uint8_t x96 = 31U;
volatile int8_t x107 = INT8_MIN;
uint64_t t22 = 13LLU;
static int8_t x110 = INT8_MIN;
int8_t x114 = -1;
uint64_t x116 = 31861116651LLU;
static uint16_t x121 = 711U;
int16_t x128 = 1;
static int16_t x130 = -1;
int8_t x137 = -7;
static uint16_t x139 = 21U;
volatile int64_t t28 = -8341171340LL;
int8_t x142 = INT8_MIN;
int32_t x143 = INT32_MIN;
volatile uint32_t t29 = 230333U;
uint8_t x151 = 49U;
int64_t t30 = 876390334512133810LL;
static volatile int16_t x155 = -737;
static uint64_t t31 = 9LLU;
volatile int16_t x161 = INT16_MAX;
int16_t x169 = -611;
static int64_t t34 = -11170LL;
uint32_t x173 = UINT32_MAX;
volatile uint32_t t35 = 425U;
volatile uint16_t x178 = 66U;
uint64_t t36 = 19654116234779LLU;
int16_t x190 = INT16_MAX;
volatile uint64_t t39 = 1892796997LLU;
static int16_t x195 = -83;
static int8_t x214 = INT8_MAX;
uint64_t x215 = UINT64_MAX;
int8_t x216 = INT8_MAX;
uint64_t t44 = 3949133LLU;
int64_t x221 = INT64_MIN;
uint64_t t46 = 3851698941794469LLU;
int32_t x230 = 40;
int16_t x233 = 2622;
int8_t x239 = -1;
static int16_t x264 = -1;
uint32_t x267 = UINT32_MAX;
int16_t x272 = INT16_MIN;
volatile int64_t t54 = 1LL;
uint64_t x287 = 360952104687898561LLU;
volatile uint32_t x295 = UINT32_MAX;
volatile uint64_t t57 = 537331087037670LLU;
int64_t x323 = -1LL;
int16_t x324 = 6;
volatile int64_t t60 = -8120LL;
static volatile uint64_t t61 = 6706385669LLU;
uint64_t x333 = 2402941265755483LLU;
static uint16_t x334 = 466U;
int32_t x341 = 20001;
volatile int32_t x344 = INT32_MAX;
static volatile int64_t t65 = 19LL;
static int32_t x357 = 8277881;
static uint32_t x361 = 4334U;
static volatile int16_t x385 = INT16_MIN;
static int32_t x386 = INT32_MIN;
volatile int64_t t69 = 4124374273643875LL;
int8_t x401 = -1;
int16_t x404 = 1;
int32_t t72 = 363;
uint64_t x414 = UINT64_MAX;
int8_t x422 = 29;
int32_t x423 = INT32_MIN;
uint64_t x427 = 14050LLU;
int16_t x430 = -1;
static uint16_t x436 = 25U;
static uint64_t x438 = UINT64_MAX;
uint8_t x441 = 100U;
volatile int64_t t82 = -710635LL;
volatile int8_t x449 = INT8_MIN;
int16_t x451 = INT16_MIN;
volatile int8_t x452 = 1;
volatile int16_t x461 = 7470;
int16_t x463 = INT16_MIN;
int8_t x469 = INT8_MAX;
int32_t x480 = INT32_MIN;
int32_t x501 = -270;
static int8_t x506 = INT8_MAX;
int32_t x508 = 53761745;
uint8_t x510 = UINT8_MAX;
volatile int32_t x516 = INT32_MIN;
volatile int64_t t94 = 6742696LL;
static int8_t x533 = -14;
int32_t x534 = -458618;
uint8_t x535 = 5U;
uint8_t x539 = UINT8_MAX;
uint8_t x540 = 13U;
int64_t t99 = -301442078087188LL;


void f0(void) {
	uint16_t x2 = 31U;
	int8_t x3 = 1;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -106826;

	t0 = (((x1-x2)-x3)+x4);

	if (t0 != 65503) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 1U;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 25020930419875LL;

	t1 = (((x5-x6)-x7)+x8);

	if (t1 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = 356466LLU;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t2 = 2988LLU;

	t2 = (((x13-x14)-x15)+x16);

	if (t2 != 18446744065030702747LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MIN;
	uint32_t x19 = 1043568U;
	volatile uint64_t t3 = 1682642936279LLU;

	t3 = (((x17-x18)-x19)+x20);

	if (t3 != 4294022055LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint16_t x27 = 450U;
	int64_t x28 = INT64_MAX;

	t4 = (((x25-x26)-x27)+x28);

	if (t4 != 9223372036854775329LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 120LL;
	static int32_t x30 = -115;
	int32_t x31 = INT32_MAX;
	int64_t t5 = -434540619260472349LL;

	t5 = (((x29-x30)-x31)+x32);

	if (t5 != -2147483413LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x34 = INT8_MAX;
	int16_t x36 = -1;

	t6 = (((x33-x34)-x35)+x36);

	if (t6 != -256) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = 70644759319694952LLU;
	uint8_t x39 = UINT8_MAX;
	uint64_t t7 = 32886127089179785LLU;

	t7 = (((x37-x38)-x39)+x40);

	if (t7 != 18376099314389823645LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 32963003U;
	uint16_t x42 = 944U;
	volatile uint32_t t8 = 106044839U;

	t8 = (((x41-x42)-x43)+x44);

	if (t8 != 33027595U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = 0LL;
	static volatile int16_t x46 = INT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	int64_t t9 = -5190483549036LL;

	t9 = (((x45-x46)-x47)+x48);

	if (t9 != -65407LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x51 = 36U;
	int64_t x52 = -2000LL;

	t10 = (((x49-x50)-x51)+x52);

	if (t10 != 2147481552LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -1;
	uint64_t x54 = 46045LLU;
	uint8_t x55 = 1U;
	uint8_t x56 = 0U;
	volatile uint64_t t11 = 5845914854017620273LLU;

	t11 = (((x53-x54)-x55)+x56);

	if (t11 != 18446744073709505569LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -68051696451479LL;
	int8_t x58 = INT8_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	int64_t t12 = -1444257792889LL;

	t12 = (((x57-x58)-x59)+x60);

	if (t12 != -68045254000663LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = -1;
	int64_t x66 = 8LL;
	static volatile int32_t x67 = INT32_MIN;
	static int32_t x68 = -1;
	int64_t t13 = 1330221LL;

	t13 = (((x65-x66)-x67)+x68);

	if (t13 != 2147483638LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = 2243608964893581LL;
	volatile int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	int64_t t14 = 1768368LL;

	t14 = (((x69-x70)-x71)+x72);

	if (t14 != -2243611112344334LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1LL;
	volatile uint16_t x75 = 20U;
	int16_t x76 = INT16_MIN;
	volatile int64_t t15 = 3028471486LL;

	t15 = (((x73-x74)-x75)+x76);

	if (t15 != -33464LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x82 = 61U;
	static int64_t x84 = -1LL;

	t16 = (((x81-x82)-x83)+x84);

	if (t16 != 66LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -1;
	static int32_t x87 = -1;
	volatile int16_t x88 = 25;
	uint64_t t17 = 17354666489LLU;

	t17 = (((x85-x86)-x87)+x88);

	if (t17 != 26LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x90 = INT64_MIN;
	uint8_t x92 = 2U;

	t18 = (((x89-x90)-x91)+x92);

	if (t18 != 9223372034707288345LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x93 = -1;
	int8_t x94 = INT8_MAX;
	uint32_t x95 = 628450713U;
	volatile uint32_t t19 = 36427U;

	t19 = (((x93-x94)-x95)+x96);

	if (t19 != 3666516486U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 1122U;
	int64_t x98 = INT64_MAX;
	static int8_t x99 = INT8_MAX;
	static uint32_t x100 = UINT32_MAX;
	int64_t t20 = -69050LL;

	t20 = (((x97-x98)-x99)+x100);

	if (t20 != -9223372032559807517LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = 59704975LL;
	volatile int16_t x102 = 37;
	static int32_t x103 = INT32_MIN;
	uint8_t x104 = 7U;
	int64_t t21 = -224006LL;

	t21 = (((x101-x102)-x103)+x104);

	if (t21 != 2207188593LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = -1;
	static uint64_t x108 = UINT64_MAX;

	t22 = (((x105-x106)-x107)+x108);

	if (t22 != 65663LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	static int32_t t23 = 53294461;

	t23 = (((x109-x110)-x111)+x112);

	if (t23 != 33150) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x115 = INT8_MAX;
	static uint64_t t24 = 1994770116689050LLU;

	t24 = (((x113-x114)-x115)+x116);

	if (t24 != 31861182060LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x122 = UINT32_MAX;
	volatile int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MAX;
	volatile uint32_t t25 = 50737150U;

	t25 = (((x121-x122)-x123)+x124);

	if (t25 != 33352U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	int64_t x127 = INT64_MIN;
	static volatile int64_t t26 = -162115211196558LL;

	t26 = (((x125-x126)-x127)+x128);

	if (t26 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t27 = 85LLU;

	t27 = (((x129-x130)-x131)+x132);

	if (t27 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x138 = -506513LL;
	int64_t x140 = INT64_MIN;

	t28 = (((x137-x138)-x139)+x140);

	if (t28 != -9223372036854269323LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x141 = 1U;
	int32_t x144 = INT32_MAX;

	t29 = (((x141-x142)-x143)+x144);

	if (t29 != 128U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -7500064LL;
	volatile int16_t x150 = INT16_MAX;
	int32_t x152 = INT32_MAX;

	t30 = (((x149-x150)-x151)+x152);

	if (t30 != 2139950767LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	int16_t x156 = -457;

	t31 = (((x153-x154)-x155)+x156);

	if (t31 != 2147483927LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 15815278645053736LLU;
	uint32_t x158 = 39062U;
	int8_t x159 = INT8_MIN;
	int32_t x160 = 0;
	uint64_t t32 = 523691LLU;

	t32 = (((x157-x158)-x159)+x160);

	if (t32 != 15815278645014802LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x162 = -1001626785;
	uint8_t x163 = 21U;
	volatile int64_t x164 = 7LL;
	int64_t t33 = 354LL;

	t33 = (((x161-x162)-x163)+x164);

	if (t33 != 1001659538LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x170 = -1LL;
	uint32_t x171 = 21516609U;
	volatile int16_t x172 = 1078;

	t34 = (((x169-x170)-x171)+x172);

	if (t34 != -21516141LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x174 = 26U;
	uint32_t x175 = UINT32_MAX;
	int8_t x176 = INT8_MIN;

	t35 = (((x173-x174)-x175)+x176);

	if (t35 != 4294967142U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = -1;
	static uint64_t x179 = 10325635482569LLU;
	volatile int32_t x180 = 142636511;

	t36 = (((x177-x178)-x179)+x180);

	if (t36 != 18446733748216705491LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = 28737;
	static uint16_t x182 = UINT16_MAX;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t37 = 5697812;

	t37 = (((x181-x182)-x183)+x184);

	if (t37 != 2147414082) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = 150U;
	volatile int16_t x186 = 1676;
	int16_t x187 = -15738;
	static uint32_t x188 = 19U;
	volatile uint32_t t38 = 3U;

	t38 = (((x185-x186)-x187)+x188);

	if (t38 != 14231U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x189 = 0LLU;
	int64_t x191 = INT64_MIN;
	volatile int64_t x192 = -13296925446LL;

	t39 = (((x189-x190)-x191)+x192);

	if (t39 != 9223372023557817595LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 892329347U;
	int64_t x196 = INT64_MIN;
	volatile int64_t t40 = -49388196701601LL;

	t40 = (((x193-x194)-x195)+x196);

	if (t40 != -9223372033452137777LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = 475U;
	volatile int64_t t41 = -3799484LL;

	t41 = (((x197-x198)-x199)+x200);

	if (t41 != 9223372036854743643LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 2457650256631758LLU;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = -1LL;
	int64_t x204 = 690635598LL;
	uint64_t t42 = 500853035285056LLU;

	t42 = (((x201-x202)-x203)+x204);

	if (t42 != 2457650947201822LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = -1;
	static volatile uint8_t x210 = 2U;
	static volatile uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MAX;
	static uint32_t t43 = 14087U;

	t43 = (((x209-x210)-x211)+x212);

	if (t43 != 2147483645U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x213 = -1LL;

	t44 = (((x213-x214)-x215)+x216);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x217 = -8663;
	int8_t x218 = INT8_MAX;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MAX;
	int32_t t45 = 939;

	t45 = (((x217-x218)-x219)+x220);

	if (t45 != 2147474985) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x222 = 3LLU;
	uint8_t x223 = 1U;
	volatile int16_t x224 = INT16_MIN;

	t46 = (((x221-x222)-x223)+x224);

	if (t46 != 9223372036854743036LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x229 = -1;
	static uint16_t x231 = 3U;
	int8_t x232 = -28;
	int32_t t47 = -57;

	t47 = (((x229-x230)-x231)+x232);

	if (t47 != -72) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x234 = -1;
	static int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	static int32_t t48 = -3;

	t48 = (((x233-x234)-x235)+x236);

	if (t48 != -2147481024) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MIN;
	static volatile int16_t x238 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;
	uint64_t t49 = 3271730073757LLU;

	t49 = (((x237-x238)-x239)+x240);

	if (t49 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x249 = -1;
	int8_t x250 = -2;
	volatile int64_t x251 = 1823405373490LL;
	int32_t x252 = INT32_MAX;
	int64_t t50 = -15198948LL;

	t50 = (((x249-x250)-x251)+x252);

	if (t50 != -1821257889842LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MAX;
	int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MAX;
	int64_t t51 = 615852786LL;

	t51 = (((x253-x254)-x255)+x256);

	if (t51 != -9223372032559742977LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x261 = 695585371LL;
	uint32_t x262 = 517801U;
	int32_t x263 = -1;
	volatile int64_t t52 = 1381011379673107LL;

	t52 = (((x261-x262)-x263)+x264);

	if (t52 != 695067570LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x265 = -16907297LL;
	int8_t x266 = 0;
	int16_t x268 = -10;
	int64_t t53 = -3LL;

	t53 = (((x265-x266)-x267)+x268);

	if (t53 != -4311874602LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x269 = 921329985U;
	static volatile int64_t x270 = -1LL;
	volatile int32_t x271 = INT32_MAX;

	t54 = (((x269-x270)-x271)+x272);

	if (t54 != -1226186429LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x285 = -1;
	uint32_t x286 = 1U;
	int8_t x288 = -3;
	volatile uint64_t t55 = 15066011LLU;

	t55 = (((x285-x286)-x287)+x288);

	if (t55 != 18085791973316620346LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x293 = 32292597463288LL;
	uint8_t x294 = 6U;
	uint8_t x296 = 18U;
	int64_t t56 = -178027680951640LL;

	t56 = (((x293-x294)-x295)+x296);

	if (t56 != 32288302496005LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = -55482;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = 2054964809LLU;
	int16_t x316 = -1;

	t57 = (((x313-x314)-x315)+x316);

	if (t57 != 92463356LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = 26U;
	volatile uint32_t x318 = 7U;
	uint32_t x319 = 858U;
	uint8_t x320 = UINT8_MAX;
	uint32_t t58 = 5313126U;

	t58 = (((x317-x318)-x319)+x320);

	if (t58 != 4294966712U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x321 = 60U;
	int64_t x322 = -59558LL;
	int64_t t59 = 872376212929813LL;

	t59 = (((x321-x322)-x323)+x324);

	if (t59 != 59625LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x325 = -19LL;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MIN;

	t60 = (((x325-x326)-x327)+x328);

	if (t60 != -65554LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = INT16_MIN;
	volatile uint8_t x330 = 2U;
	volatile uint64_t x331 = 15985LLU;
	uint32_t x332 = UINT32_MAX;

	t61 = (((x329-x330)-x331)+x332);

	if (t61 != 4294918540LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x335 = -611901;
	int8_t x336 = 6;
	volatile uint64_t t62 = 27349LLU;

	t62 = (((x333-x334)-x335)+x336);

	if (t62 != 2402941266366924LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = 22U;
	int16_t x338 = INT16_MIN;
	static uint16_t x339 = UINT16_MAX;
	static int16_t x340 = INT16_MIN;
	static volatile int32_t t63 = -25251282;

	t63 = (((x337-x338)-x339)+x340);

	if (t63 != -65513) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x342 = -29858452939413LL;
	static uint16_t x343 = 2318U;
	int64_t t64 = -4LL;

	t64 = (((x341-x342)-x343)+x344);

	if (t64 != 29860600440743LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	int16_t x355 = 0;
	uint8_t x356 = 1U;

	t65 = (((x353-x354)-x355)+x356);

	if (t65 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x358 = UINT32_MAX;
	int8_t x359 = -1;
	uint32_t x360 = 651U;
	uint32_t t66 = 0U;

	t66 = (((x357-x358)-x359)+x360);

	if (t66 != 8278534U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x362 = 245922610U;
	int16_t x363 = 5054;
	uint8_t x364 = UINT8_MAX;
	static uint32_t t67 = 1U;

	t67 = (((x361-x362)-x363)+x364);

	if (t67 != 4049044221U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x381 = 55052387721192404LLU;
	static uint64_t x382 = 2556104750720LLU;
	int64_t x383 = INT64_MIN;
	static volatile uint32_t x384 = 918273896U;
	volatile uint64_t t68 = 19LLU;

	t68 = (((x381-x382)-x383)+x384);

	if (t68 != 9278421869389491388LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x387 = -30;
	static int64_t x388 = INT64_MIN;

	t69 = (((x385-x386)-x387)+x388);

	if (t69 != -9223372034707324898LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = -1;
	volatile int32_t t70 = -2397;

	t70 = (((x389-x390)-x391)+x392);

	if (t70 != -65792) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x393 = -1204;
	uint64_t x394 = 38LLU;
	int32_t x395 = -7;
	volatile int64_t x396 = -1LL;
	uint64_t t71 = 287623906LLU;

	t71 = (((x393-x394)-x395)+x396);

	if (t71 != 18446744073709550380LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x402 = -1;
	static uint8_t x403 = 30U;

	t72 = (((x401-x402)-x403)+x404);

	if (t72 != -29) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x405 = INT8_MAX;
	int8_t x406 = -1;
	static volatile int32_t x407 = -1;
	int16_t x408 = INT16_MAX;
	int32_t t73 = 8187;

	t73 = (((x405-x406)-x407)+x408);

	if (t73 != 32896) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = INT64_MAX;
	uint8_t x410 = 21U;
	volatile uint64_t x411 = UINT64_MAX;
	static int64_t x412 = INT64_MIN;
	static uint64_t t74 = 0LLU;

	t74 = (((x409-x410)-x411)+x412);

	if (t74 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x413 = INT8_MIN;
	volatile uint32_t x415 = 1268819U;
	int32_t x416 = -1;
	volatile uint64_t t75 = 134607298959996LLU;

	t75 = (((x413-x414)-x415)+x416);

	if (t75 != 18446744073708282669LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x421 = -1;
	volatile int8_t x424 = 0;
	volatile int32_t t76 = -29;

	t76 = (((x421-x422)-x423)+x424);

	if (t76 != 2147483618) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x425 = 1LLU;
	int16_t x426 = 1;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t77 = 44290LLU;

	t77 = (((x425-x426)-x427)+x428);

	if (t77 != 18446744073709504798LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x429 = -1LL;
	static volatile int32_t x431 = INT32_MIN;
	static int16_t x432 = -1;
	int64_t t78 = 7894111186237LL;

	t78 = (((x429-x430)-x431)+x432);

	if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -14;
	volatile uint64_t x434 = 4187142LLU;
	static int64_t x435 = INT64_MAX;
	static volatile uint64_t t79 = 809618838365959LLU;

	t79 = (((x433-x434)-x435)+x436);

	if (t79 != 9223372036850588678LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -13;
	int64_t x439 = -1LL;
	int8_t x440 = INT8_MAX;
	volatile uint64_t t80 = 4798218458550076LLU;

	t80 = (((x437-x438)-x439)+x440);

	if (t80 != 116LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x442 = 1U;
	static uint64_t x443 = 238129LLU;
	uint16_t x444 = 2U;
	static volatile uint64_t t81 = 156679080660LLU;

	t81 = (((x441-x442)-x443)+x444);

	if (t81 != 18446744073709313588LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x445 = -1LL;
	int8_t x446 = INT8_MAX;
	static uint16_t x447 = 370U;
	int32_t x448 = INT32_MIN;

	t82 = (((x445-x446)-x447)+x448);

	if (t82 != -2147484146LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x450 = INT16_MAX;
	volatile int32_t t83 = -238864;

	t83 = (((x449-x450)-x451)+x452);

	if (t83 != -126) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = 1;
	int8_t x454 = INT8_MIN;
	int8_t x455 = INT8_MIN;
	static int8_t x456 = INT8_MIN;
	volatile int32_t t84 = 40454784;

	t84 = (((x453-x454)-x455)+x456);

	if (t84 != 129) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	volatile int8_t x459 = -1;
	int32_t x460 = INT32_MIN;
	uint32_t t85 = 9042U;

	t85 = (((x457-x458)-x459)+x460);

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x462 = 1230195U;
	int64_t x464 = -1LL;
	volatile int64_t t86 = 132446857519854LL;

	t86 = (((x461-x462)-x463)+x464);

	if (t86 != 4293777338LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x470 = 105U;
	int8_t x471 = -1;
	int16_t x472 = INT16_MIN;
	static volatile int32_t t87 = -577738;

	t87 = (((x469-x470)-x471)+x472);

	if (t87 != -32745) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x477 = 123U;
	uint8_t x478 = 117U;
	int8_t x479 = 1;
	volatile int32_t t88 = -6128006;

	t88 = (((x477-x478)-x479)+x480);

	if (t88 != -2147483643) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x481 = INT8_MIN;
	static uint16_t x482 = 5504U;
	static uint32_t x483 = 16557126U;
	uint16_t x484 = UINT16_MAX;
	volatile uint32_t t89 = 66358793U;

	t89 = (((x481-x482)-x483)+x484);

	if (t89 != 4278470073U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x489 = INT64_MIN;
	int16_t x490 = INT16_MIN;
	int32_t x491 = 108;
	uint16_t x492 = 6728U;
	int64_t t90 = -17948035645710833LL;

	t90 = (((x489-x490)-x491)+x492);

	if (t90 != -9223372036854736420LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x502 = UINT8_MAX;
	uint16_t x503 = UINT16_MAX;
	int8_t x504 = INT8_MIN;
	volatile int32_t t91 = -23303805;

	t91 = (((x501-x502)-x503)+x504);

	if (t91 != -66188) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x505 = 0U;
	volatile uint8_t x507 = UINT8_MAX;
	volatile int32_t t92 = 131;

	t92 = (((x505-x506)-x507)+x508);

	if (t92 != 53761363) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x509 = 11113061LLU;
	static int64_t x511 = INT64_MIN;
	static int32_t x512 = INT32_MIN;
	volatile uint64_t t93 = 47LLU;

	t93 = (((x509-x510)-x511)+x512);

	if (t93 != 9223372034718404966LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = INT64_MAX;
	uint8_t x514 = 0U;
	static uint16_t x515 = 213U;

	t94 = (((x513-x514)-x515)+x516);

	if (t94 != 9223372034707291946LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = -594;
	int16_t x518 = -37;
	int32_t x519 = 145158657;
	uint16_t x520 = UINT16_MAX;
	int32_t t95 = -128842;

	t95 = (((x517-x518)-x519)+x520);

	if (t95 != -145093679) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x521 = INT8_MIN;
	uint64_t x522 = UINT64_MAX;
	uint32_t x523 = 5U;
	volatile int64_t x524 = -1LL;
	uint64_t t96 = 3LLU;

	t96 = (((x521-x522)-x523)+x524);

	if (t96 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x536 = INT32_MIN;
	int32_t t97 = -6;

	t97 = (((x533-x534)-x535)+x536);

	if (t97 != -2147025049) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x537 = INT16_MAX;
	uint8_t x538 = UINT8_MAX;
	static volatile int32_t t98 = 1407565;

	t98 = (((x537-x538)-x539)+x540);

	if (t98 != 32270) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x541 = INT64_MAX;
	int8_t x542 = INT8_MAX;
	static int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MAX;

	t99 = (((x541-x542)-x543)+x544);

	if (t99 != 9223372034707292160LL) { NG(); } else { ; }
	
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
