#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static uint64_t x2 = 4908860774569403181LLU;
volatile uint32_t x16 = UINT32_MAX;
static volatile uint32_t x18 = 1138373U;
volatile int32_t x19 = INT32_MIN;
volatile int32_t x21 = INT32_MIN;
int8_t x28 = 0;
int64_t x30 = -204604723728403LL;
int16_t x35 = 33;
volatile uint64_t x37 = 59550616205123LLU;
volatile int64_t x56 = INT64_MAX;
int64_t x66 = -1LL;
uint32_t x67 = 3U;
static int64_t x68 = -442510021376195007LL;
uint32_t x75 = UINT32_MAX;
static uint8_t x78 = 15U;
volatile int32_t x82 = -1;
int64_t x83 = 16734938209738846LL;
int64_t x88 = -1LL;
int64_t t21 = INT64_MIN;
int16_t x101 = -9;
volatile uint8_t x103 = 2U;
uint64_t x108 = UINT64_MAX;
uint32_t x113 = 106U;
static int64_t t26 = 1279695556549227LL;
static int16_t x125 = INT16_MIN;
int64_t x126 = INT64_MIN;
int64_t t27 = -321423104478967LL;
uint8_t x133 = 5U;
volatile int32_t x139 = 10091;
int8_t x140 = -24;
int64_t x161 = -71LL;
uint8_t x166 = 7U;
int32_t x169 = -1;
int64_t t36 = 741691LL;
int64_t x182 = -1LL;
volatile int64_t t38 = 1449537139972LL;
uint64_t t39 = 52266LLU;
uint8_t x190 = 18U;
int64_t x192 = -34015591117886516LL;
int16_t x194 = -209;
uint64_t x201 = UINT64_MAX;
volatile uint64_t t42 = 1089307934182LLU;
int32_t x207 = -32;
int32_t x209 = INT32_MIN;
static int32_t x213 = INT32_MAX;
int8_t x217 = INT8_MIN;
uint16_t x220 = UINT16_MAX;
int8_t x226 = -3;
uint32_t x227 = UINT32_MAX;
uint32_t x231 = 0U;
static int8_t x241 = -1;
volatile uint64_t t50 = 1503266LLU;
static volatile uint32_t x249 = 22329U;
uint16_t x251 = UINT16_MAX;
volatile uint32_t t51 = 186020U;
volatile int8_t x257 = -1;
static int64_t t53 = 5LL;
int16_t x268 = 54;
static volatile int64_t x269 = INT64_MIN;
volatile uint64_t x270 = UINT64_MAX;
volatile uint64_t x272 = 365449623817359060LLU;
uint64_t x273 = 48430517778880LLU;
int64_t x292 = -700095LL;
volatile int64_t t61 = 3964LL;
int64_t x309 = -640418012310LL;
uint8_t x314 = 89U;
volatile int32_t t65 = -4050;
int8_t x318 = -1;
static uint8_t x320 = UINT8_MAX;
uint64_t x329 = 476016257300047936LLU;
uint16_t x332 = 42U;
int32_t x339 = INT32_MIN;
uint64_t t71 = 18030024545LLU;
static int8_t x356 = INT8_MIN;
static uint8_t x357 = 1U;
volatile uint64_t t74 = 223038301701LLU;
uint16_t x364 = UINT16_MAX;
uint64_t x375 = 5973065486LLU;
int16_t x376 = -1;
volatile int8_t x379 = -57;
int32_t x381 = INT32_MIN;
int16_t x389 = -256;
int32_t x395 = INT32_MIN;
uint32_t t83 = 28918U;
volatile int16_t x401 = INT16_MIN;
uint16_t x404 = 102U;
volatile int32_t t84 = -397;
static uint16_t x406 = 312U;
int64_t x411 = INT64_MIN;
uint32_t x414 = UINT32_MAX;
static int64_t t87 = -7LL;
uint64_t x421 = 16087089462LLU;
volatile int64_t t90 = -3LL;
int16_t x430 = -1;
volatile uint32_t x443 = 36955513U;
volatile int64_t t96 = 1413115930094064LL;
uint64_t x469 = 176700595421LLU;
uint64_t x470 = 1LLU;
volatile int32_t x471 = -8734540;
volatile int64_t x472 = -30932762851923598LL;


void f0(void) {
	int16_t x3 = INT16_MIN;
	int32_t x4 = -6213751;
	uint64_t t0 = 2344121163215971686LLU;

	t0 = ((x1|(x2-x3))^x4);

	if (t0 != 1068387492LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 27U;
	int8_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int16_t x8 = -584;
	uint32_t t1 = 5U;

	t1 = ((x5|(x6-x7))^x8);

	if (t1 != 2147484231U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MIN;
	int64_t x15 = -12556553209194578LL;
	static int64_t t2 = -563723254919794LL;

	t2 = ((x13|(x14-x15))^x16);

	if (t2 != 12556553785704448LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -694;
	int16_t x20 = INT16_MAX;
	volatile uint32_t t3 = 16U;

	t3 = ((x17|(x18-x19))^x20);

	if (t3 != 4294934576U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 815236677LLU;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = 5857252155LL;
	volatile uint64_t t4 = 427525311853593591LLU;

	t4 = ((x21|(x22-x23))^x24);

	if (t4 != 18446744069104637310LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int8_t x26 = INT8_MAX;
	volatile int16_t x27 = -1;
	int32_t t5 = -110352;

	t5 = ((x25|(x26-x27))^x28);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MAX;
	int8_t x31 = 2;
	static volatile uint16_t x32 = UINT16_MAX;
	volatile int64_t t6 = -7953083188540LL;

	t6 = ((x29|(x30-x31))^x32);

	if (t6 != -204604723724288LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int16_t x34 = -1;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = 8140;

	t7 = ((x33|(x34-x35))^x36);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MAX;
	int64_t x39 = 53617724LL;
	int16_t x40 = -11;
	uint64_t t8 = 18823139294692659LLU;

	t8 = ((x37|(x38-x39))^x40);

	if (t8 != 35651766LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static uint64_t x42 = 15041LLU;
	static int32_t x43 = 10;
	volatile uint8_t x44 = UINT8_MAX;
	static uint64_t t9 = 994502105279LLU;

	t9 = ((x41|(x42-x43))^x44);

	if (t9 != 4294967040LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MAX;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t10 = 4LLU;

	t10 = ((x45|(x46-x47))^x48);

	if (t10 != 18446744073709453439LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile uint8_t x50 = 14U;
	int16_t x51 = -1;
	static uint32_t x52 = UINT32_MAX;
	volatile uint32_t t11 = 226944049U;

	t11 = ((x49|(x50-x51))^x52);

	if (t11 != 112U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	int64_t x55 = -11769088466078LL;
	int64_t t12 = -21643LL;

	t12 = ((x53|(x54-x55))^x56);

	if (t12 != -11769088465951LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -17801534LL;
	volatile int8_t x62 = INT8_MAX;
	uint8_t x63 = 0U;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = -142LL;

	t13 = ((x61|(x62-x63))^x64);

	if (t13 != 9223372036836974335LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -2;
	volatile int64_t t14 = -3439356769287438LL;

	t14 = ((x65|(x66-x67))^x68);

	if (t14 != 442510021376195007LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MAX;
	volatile int8_t x74 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t15 = 750989487295252LL;

	t15 = ((x73|(x74-x75))^x76);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = -5108;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = 1;

	t16 = ((x77|(x78-x79))^x80);

	if (t16 != 27663) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 65313845408375808LLU;
	uint16_t x84 = 0U;
	volatile uint64_t t17 = 294LLU;

	t17 = ((x81|(x82-x83))^x84);

	if (t17 != 18441268203997609889LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	static volatile int64_t t18 = 911484LL;

	t18 = ((x85|(x86-x87))^x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 0U;
	uint64_t x90 = 2LLU;
	static int8_t x91 = INT8_MAX;
	uint8_t x92 = 25U;
	static uint64_t t19 = 199803LLU;

	t19 = ((x89|(x90-x91))^x92);

	if (t19 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 83529381U;
	volatile int8_t x95 = -15;
	volatile int32_t x96 = -2599000;
	static int64_t t20 = 64379873LL;

	t20 = ((x93|(x94-x95))^x96);

	if (t20 != 9223372036773173532LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x97 = 1U;
	int64_t x98 = INT64_MIN;
	volatile int8_t x99 = 0;
	uint8_t x100 = 1U;

	t21 = ((x97|(x98-x99))^x100);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x102 = 28;
	int16_t x104 = INT16_MIN;
	static int32_t t22 = -14393;

	t22 = ((x101|(x102-x103))^x104);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = 626;
	int32_t x106 = 37093595;
	volatile int16_t x107 = INT16_MIN;
	static uint64_t t23 = 12258LLU;

	t23 = ((x105|(x106-x107))^x108);

	if (t23 != 18446744073672424708LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int16_t x110 = -1;
	int8_t x111 = -1;
	uint64_t x112 = 77134923386LLU;
	static uint64_t t24 = 49207658066295LLU;

	t24 = ((x109|(x110-x111))^x112);

	if (t24 != 77134923397LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x114 = INT32_MIN;
	static int16_t x115 = INT16_MIN;
	static volatile int32_t x116 = INT32_MIN;
	uint32_t t25 = 76U;

	t25 = ((x113|(x114-x115))^x116);

	if (t25 != 32874U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -6110;
	int32_t x118 = INT32_MAX;
	int64_t x119 = -1300885130919542LL;
	uint8_t x120 = 75U;

	t26 = ((x117|(x118-x119))^x120);

	if (t26 != -452LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x127 = INT8_MIN;
	uint16_t x128 = 3418U;

	t27 = ((x125|(x126-x127))^x128);

	if (t27 != -29222LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x130 = 27210U;
	uint16_t x131 = UINT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int64_t t28 = -1139618019389LL;

	t28 = ((x129|(x130-x131))^x132);

	if (t28 != -9223372032559846732LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = -1;
	int32_t x135 = -1;
	volatile uint8_t x136 = UINT8_MAX;
	static int32_t t29 = 335;

	t29 = ((x133|(x134-x135))^x136);

	if (t29 != 250) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x137 = -1;
	int64_t x138 = -1LL;
	int64_t t30 = -49821204LL;

	t30 = ((x137|(x138-x139))^x140);

	if (t30 != 23LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 822829364U;
	int64_t x143 = -15872LL;
	static int16_t x144 = INT16_MIN;
	int64_t t31 = -1416488LL;

	t31 = ((x141|(x142-x143))^x144);

	if (t31 != -4294934529LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = 16;
	static uint64_t x154 = 135597452679LLU;
	uint64_t x155 = 409580205756LLU;
	static int64_t x156 = -87778LL;
	uint64_t t32 = 570199189184575LLU;

	t32 = ((x153|(x154-x155))^x156);

	if (t32 != 273982709701LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x157 = INT64_MIN;
	static uint16_t x158 = 182U;
	int16_t x159 = -1;
	int16_t x160 = 241;
	int64_t t33 = -540516734367770LL;

	t33 = ((x157|(x158-x159))^x160);

	if (t33 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x162 = -1;
	int64_t x163 = 2804548693570233075LL;
	int16_t x164 = -1;
	volatile int64_t t34 = -160483983105LL;

	t34 = ((x161|(x162-x163))^x164);

	if (t34 != 66LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = 0;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t35 = 2;

	t35 = ((x165|(x166-x167))^x168);

	if (t35 != -2147483401) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x170 = 13869;
	static uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;

	t36 = ((x169|(x170-x171))^x172);

	if (t36 != -4294967296LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = 168665;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -235;
	volatile uint64_t t37 = 1LLU;

	t37 = ((x177|(x178-x179))^x180);

	if (t37 != 234LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x183 = -1;
	uint8_t x184 = 4U;

	t38 = ((x181|(x182-x183))^x184);

	if (t38 != 65531LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = 261LLU;
	static int8_t x186 = 0;
	int8_t x187 = INT8_MIN;
	int8_t x188 = -1;

	t39 = ((x185|(x186-x187))^x188);

	if (t39 != 18446744073709551226LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x189 = 0U;
	volatile int32_t x191 = 508;
	volatile int64_t t40 = -82596599057890677LL;

	t40 = ((x189|(x190-x191))^x192);

	if (t40 != 34015591117886938LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -1;
	static int8_t x195 = -1;
	static int16_t x196 = INT16_MAX;
	volatile int32_t t41 = -30;

	t41 = ((x193|(x194-x195))^x196);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x202 = 11U;
	int16_t x203 = 6;
	static uint16_t x204 = 4U;

	t42 = ((x201|(x202-x203))^x204);

	if (t42 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x205 = -4;
	uint64_t x206 = 66452LLU;
	static int8_t x208 = INT8_MIN;
	uint64_t t43 = 186054769336LLU;

	t43 = ((x205|(x206-x207))^x208);

	if (t43 != 124LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x210 = -4;
	static uint8_t x211 = 1U;
	int16_t x212 = INT16_MIN;
	static int32_t t44 = 747780008;

	t44 = ((x209|(x210-x211))^x212);

	if (t44 != 32763) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x214 = 911862U;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -1;
	static uint32_t t45 = 50U;

	t45 = ((x213|(x214-x215))^x216);

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x218 = 271782729;
	uint64_t x219 = 28616914918LLU;
	volatile uint64_t t46 = 3313668776594LLU;

	t46 = ((x217|(x218-x219))^x220);

	if (t46 != 18446744073709486108LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -54;
	volatile uint32_t x228 = UINT32_MAX;
	static uint32_t t47 = 4U;

	t47 = ((x225|(x226-x227))^x228);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x229 = 13894095291473380LL;
	int16_t x230 = -1;
	int32_t x232 = INT32_MIN;
	int64_t t48 = -812367LL;

	t48 = ((x229|(x230-x231))^x232);

	if (t48 != -13894096795992065LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x237 = -10;
	static uint32_t x238 = 30U;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t49 = 0U;

	t49 = ((x237|(x238-x239))^x240);

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x242 = INT8_MIN;
	static volatile uint64_t x243 = 124726954679121548LLU;
	int8_t x244 = 57;

	t50 = ((x241|(x242-x243))^x244);

	if (t50 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x250 = -7120;
	int8_t x252 = 1;

	t51 = ((x249|(x250-x251))^x252);

	if (t51 != 4294899512U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	int64_t x255 = 70976LL;
	int32_t x256 = INT32_MIN;
	volatile int64_t t52 = -29122LL;

	t52 = ((x253|(x254-x255))^x256);

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x258 = -1LL;
	int8_t x259 = -1;
	static int8_t x260 = -1;

	t53 = ((x257|(x258-x259))^x260);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x261 = 9U;
	int64_t x262 = -237521823411636685LL;
	int32_t x263 = 31901939;
	static uint16_t x264 = 3179U;
	volatile int64_t t54 = -197198145262647LL;

	t54 = ((x261|(x262-x263))^x264);

	if (t54 != -237521823443541726LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = -1;
	volatile int16_t x266 = INT16_MAX;
	static int16_t x267 = 1;
	volatile int32_t t55 = -809;

	t55 = ((x265|(x266-x267))^x268);

	if (t55 != -55) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x271 = INT32_MIN;
	volatile uint64_t t56 = 7449591339343196LLU;

	t56 = ((x269|(x270-x271))^x272);

	if (t56 != 9588821661647434027LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x274 = 1U;
	int8_t x275 = -14;
	volatile uint16_t x276 = 6184U;
	static uint64_t t57 = 97020280200570540LLU;

	t57 = ((x273|(x274-x275))^x276);

	if (t57 != 48430517772775LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	static int8_t x283 = INT8_MIN;
	int32_t x284 = -1;
	volatile int64_t t58 = -136676931435LL;

	t58 = ((x281|(x282-x283))^x284);

	if (t58 != 32639LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x286 = -8;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	uint64_t t59 = 189200084298017LLU;

	t59 = ((x285|(x286-x287))^x288);

	if (t59 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = 1;
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MAX;
	static int64_t t60 = -32355715773177LL;

	t60 = ((x289|(x290-x291))^x292);

	if (t60 != 709056LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x293 = INT8_MAX;
	int64_t x294 = INT64_MAX;
	uint32_t x295 = 221523U;
	int32_t x296 = -77788790;

	t61 = ((x293|(x294-x295))^x296);

	if (t61 != -9223372036777076875LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x297 = INT8_MAX;
	int8_t x298 = -6;
	uint16_t x299 = 6559U;
	int32_t x300 = -1;
	volatile int32_t t62 = 1473;

	t62 = ((x297|(x298-x299))^x300);

	if (t62 != 6528) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int8_t x306 = -1;
	int8_t x307 = -26;
	int16_t x308 = 6542;
	uint64_t t63 = 15176429331626462LLU;

	t63 = ((x305|(x306-x307))^x308);

	if (t63 != 18446744073709545073LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x310 = INT64_MIN;
	int16_t x311 = -99;
	volatile int64_t x312 = -1LL;
	int64_t t64 = -4025893611797466321LL;

	t64 = ((x309|(x310-x311))^x312);

	if (t64 != 640418012308LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x313 = 3U;
	int8_t x315 = 0;
	uint16_t x316 = 10U;

	t65 = ((x313|(x314-x315))^x316);

	if (t65 != 81) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x317 = 2U;
	uint16_t x319 = 19877U;
	int32_t t66 = -1983169;

	t66 = ((x317|(x318-x319))^x320);

	if (t66 != -19803) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x321 = -1;
	int16_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	volatile uint8_t x324 = UINT8_MAX;
	static uint32_t t67 = 52333U;

	t67 = ((x321|(x322-x323))^x324);

	if (t67 != 4294967040U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x330 = 3833775706334809LLU;
	int8_t x331 = INT8_MAX;
	static volatile uint64_t t68 = 559LLU;

	t68 = ((x329|(x330-x331))^x332);

	if (t68 != 477309885948620272LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x333 = 11591052U;
	int8_t x334 = -1;
	static int8_t x335 = INT8_MAX;
	static int32_t x336 = -1;
	volatile uint32_t t69 = 85563U;

	t69 = ((x333|(x334-x335))^x336);

	if (t69 != 115U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x337 = INT64_MAX;
	int8_t x338 = INT8_MIN;
	volatile int32_t x340 = INT32_MIN;
	static int64_t t70 = -5LL;

	t70 = ((x337|(x338-x339))^x340);

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x341 = -1LL;
	uint8_t x342 = 20U;
	volatile uint8_t x343 = 3U;
	uint64_t x344 = UINT64_MAX;

	t71 = ((x341|(x342-x343))^x344);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x349 = INT64_MIN;
	static uint32_t x350 = 161813081U;
	static volatile int32_t x351 = INT32_MAX;
	int16_t x352 = -3217;
	volatile int64_t t72 = -752073LL;

	t72 = ((x349|(x350-x351))^x352);

	if (t72 != 9223372034545475893LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = -1;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = 0U;
	static int64_t t73 = -118765880726LL;

	t73 = ((x353|(x354-x355))^x356);

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	static uint64_t x360 = UINT64_MAX;

	t74 = ((x357|(x358-x359))^x360);

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 1516U;
	volatile uint64_t x362 = 6038LLU;
	volatile int16_t x363 = INT16_MIN;
	volatile uint64_t t75 = 1508620303131099LLU;

	t75 = ((x361|(x362-x363))^x364);

	if (t75 != 26625LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x369 = INT32_MAX;
	uint8_t x370 = 0U;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MAX;
	static volatile uint32_t t76 = 2U;

	t76 = ((x369|(x370-x371))^x372);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x373 = -2;
	volatile int32_t x374 = INT32_MIN;
	uint64_t t77 = 33291853309LLU;

	t77 = ((x373|(x374-x375))^x376);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = -1;
	int8_t x378 = -1;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t78 = INT64_MAX;

	t78 = ((x377|(x378-x379))^x380);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x382 = 162U;
	int8_t x383 = 26;
	int64_t x384 = INT64_MIN;
	int64_t t79 = 890092177894LL;

	t79 = ((x381|(x382-x383))^x384);

	if (t79 != -9223372034707292024LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 1U;
	static int32_t x387 = INT32_MAX;
	int64_t x388 = 239822907309446899LL;
	static volatile int64_t t80 = 130748592195909580LL;

	t80 = ((x385|(x386-x387))^x388);

	if (t80 != -239822907309435151LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x390 = 1U;
	uint16_t x391 = 225U;
	uint64_t x392 = 2462LLU;
	uint64_t t81 = 56502955LLU;

	t81 = ((x389|(x390-x391))^x392);

	if (t81 != 18446744073709549246LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x393 = 547U;
	int64_t x394 = -10630LL;
	volatile uint64_t x396 = 113348054LLU;
	uint64_t t82 = 16589635664064723LLU;

	t82 = ((x393|(x394-x395))^x396);

	if (t82 != 2034129837LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	volatile int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;

	t83 = ((x397|(x398-x399))^x400);

	if (t83 != 127U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x402 = -1;
	int32_t x403 = 2;

	t84 = ((x401|(x402-x403))^x404);

	if (t84 != -101) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x405 = INT8_MIN;
	static int8_t x407 = INT8_MAX;
	int8_t x408 = INT8_MAX;
	volatile int32_t t85 = -20;

	t85 = ((x405|(x406-x407))^x408);

	if (t85 != -58) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x409 = INT64_MAX;
	volatile int64_t x410 = INT64_MIN;
	int16_t x412 = -1;
	volatile int64_t t86 = INT64_MIN;

	t86 = ((x409|(x410-x411))^x412);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = 47182U;
	int64_t x415 = -1LL;
	uint32_t x416 = 0U;

	t87 = ((x413|(x414-x415))^x416);

	if (t87 != 4295014478LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x417 = 1;
	static volatile int8_t x418 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MAX;
	static volatile int32_t t88 = 41505;

	t88 = ((x417|(x418-x419))^x420);

	if (t88 != -2147483394) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile int64_t x424 = INT64_MAX;
	volatile uint64_t t89 = 632414939441064523LLU;

	t89 = ((x421|(x422-x423))^x424);

	if (t89 != 9223372020767653961LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = 175LL;
	volatile uint8_t x426 = 3U;
	int32_t x427 = -1;
	int16_t x428 = -8163;

	t90 = ((x425|(x426-x427))^x428);

	if (t90 != -8014LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x429 = UINT32_MAX;
	static int64_t x431 = -30LL;
	static volatile uint8_t x432 = 89U;
	volatile int64_t t91 = -27545470LL;

	t91 = ((x429|(x430-x431))^x432);

	if (t91 != 4294967206LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = INT16_MIN;
	static int32_t x434 = -1;
	static volatile uint8_t x435 = UINT8_MAX;
	int32_t x436 = INT32_MAX;
	volatile int32_t t92 = -9420529;

	t92 = ((x433|(x434-x435))^x436);

	if (t92 != -2147483393) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x437 = INT64_MIN;
	uint64_t x438 = 6LLU;
	volatile uint8_t x439 = 23U;
	volatile uint8_t x440 = 2U;
	volatile uint64_t t93 = 105014288515085LLU;

	t93 = ((x437|(x438-x439))^x440);

	if (t93 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = 410U;
	int32_t x442 = INT32_MIN;
	int16_t x444 = 90;
	static volatile uint32_t t94 = 3935270U;

	t94 = ((x441|(x442-x443))^x444);

	if (t94 != 2110528453U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x445 = 8663279219307038847LLU;
	volatile int8_t x446 = 0;
	int32_t x447 = -1;
	uint32_t x448 = 1066718457U;
	volatile uint64_t t95 = 954777LLU;

	t95 = ((x445|(x446-x447))^x448);

	if (t95 != 8663279220086348934LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x457 = 1U;
	volatile int64_t x458 = INT64_MAX;
	int64_t x459 = 1553423316LL;
	static uint8_t x460 = 1U;

	t96 = ((x457|(x458-x459))^x460);

	if (t96 != 9223372035301352490LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = UINT32_MAX;
	static int32_t x463 = INT32_MIN;
	static int16_t x464 = INT16_MIN;
	uint64_t t97 = 50517413414622238LLU;

	t97 = ((x461|(x462-x463))^x464);

	if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x465 = 26;
	static int16_t x466 = INT16_MAX;
	uint32_t x467 = 234097U;
	int8_t x468 = -1;
	uint32_t t98 = 94086U;

	t98 = ((x465|(x466-x467))^x468);

	if (t98 != 201313U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t t99 = 95484842141428787LLU;

	t99 = ((x469|(x470-x471))^x472);

	if (t99 != 18415811486491834031LLU) { NG(); } else { ; }
	
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

