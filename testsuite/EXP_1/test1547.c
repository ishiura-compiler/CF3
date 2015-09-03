#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
int64_t x9 = 175735LL;
int32_t x22 = -666177;
uint32_t x28 = UINT32_MAX;
int32_t t5 = -246839166;
static int16_t x33 = INT16_MIN;
uint64_t x35 = UINT64_MAX;
int64_t x36 = -412623370010LL;
volatile uint64_t t6 = 124998246744LLU;
uint16_t x40 = 111U;
int32_t t7 = 3633862;
int16_t x47 = 0;
static volatile int32_t t9 = -662437;
uint16_t x50 = 2U;
static uint32_t x62 = UINT32_MAX;
volatile int64_t t13 = -223995764LL;
uint32_t x65 = 11U;
volatile uint16_t x68 = 0U;
volatile int32_t t14 = 5770896;
uint64_t x72 = 36281310809733824LLU;
uint64_t x73 = UINT64_MAX;
int16_t x77 = -1;
int8_t x78 = INT8_MAX;
int16_t x80 = -1;
volatile int32_t x81 = 7019;
volatile int16_t x86 = -5724;
static uint16_t x94 = UINT16_MAX;
int16_t x96 = INT16_MAX;
int32_t x101 = -14147224;
volatile int32_t x109 = INT32_MAX;
uint8_t x111 = 13U;
uint32_t x112 = UINT32_MAX;
uint32_t t24 = 59280366U;
volatile int32_t x119 = -1;
volatile int32_t t26 = -24956426;
int8_t x128 = -1;
static volatile int64_t t29 = 10295771LL;
uint8_t x134 = 2U;
int32_t x138 = -246;
int8_t x142 = 25;
int32_t x143 = 23734;
int64_t x144 = 17133LL;
int16_t x145 = -1;
int64_t x146 = -249074282038539652LL;
int64_t x162 = 3089648347373702135LL;
int32_t x163 = 90544;
static uint8_t x169 = 2U;
uint64_t x176 = 17740412677009178LLU;
int8_t x180 = INT8_MIN;
int16_t x183 = 204;
int8_t x186 = -1;
static volatile uint8_t x187 = 1U;
int16_t x192 = -1242;
int64_t x193 = INT64_MIN;
uint32_t x194 = 241346U;
int32_t t43 = 47161;
int16_t x202 = INT16_MIN;
static int8_t x207 = INT8_MIN;
int32_t x208 = INT32_MIN;
int32_t t46 = 67;
int8_t x219 = INT8_MIN;
volatile uint32_t t49 = 8U;
int8_t x229 = INT8_MIN;
int16_t x245 = 6;
volatile int32_t x252 = INT32_MAX;
uint16_t x259 = UINT16_MAX;
int64_t x262 = -1LL;
uint64_t t56 = 1672LLU;
int32_t x272 = -1;
int32_t x278 = INT32_MIN;
static int32_t x280 = 133862724;
int8_t x289 = INT8_MIN;
int8_t x293 = INT8_MAX;
int16_t x296 = INT16_MIN;
volatile int64_t t64 = -22214009754164195LL;
int64_t x298 = -24LL;
volatile int32_t t65 = -40662382;
static int16_t x303 = INT16_MAX;
int32_t t66 = -43074;
volatile int64_t x305 = 35831380LL;
static volatile int16_t x307 = -480;
int64_t t67 = 512976LL;
int8_t x319 = INT8_MIN;
uint8_t x322 = 0U;
uint64_t x327 = 539483666411LLU;
uint32_t x335 = UINT32_MAX;
static int8_t x337 = INT8_MIN;
uint16_t x339 = 0U;
uint64_t x340 = UINT64_MAX;
volatile uint64_t t73 = 21357LLU;
int32_t x347 = INT32_MAX;
uint64_t x353 = 29647332201041379LLU;
int8_t x354 = -1;
static int32_t x357 = INT32_MIN;
int8_t x363 = INT8_MAX;
uint32_t x365 = UINT32_MAX;
int32_t t80 = 29011076;
uint8_t x370 = UINT8_MAX;
volatile uint64_t x375 = UINT64_MAX;
volatile uint64_t t83 = 450496506LLU;
int16_t x384 = INT16_MAX;
uint32_t x386 = 252U;
int16_t x388 = 0;
static int16_t x393 = -1;
uint64_t x396 = UINT64_MAX;
static int32_t x397 = INT32_MAX;
static uint8_t x400 = UINT8_MAX;
static uint64_t x406 = UINT64_MAX;
int16_t x414 = INT16_MIN;
int32_t x417 = INT32_MIN;
int32_t x418 = 0;
volatile uint8_t x428 = 3U;
volatile int64_t t96 = 27810058LL;
int8_t x438 = -1;
int8_t x442 = 6;
static uint32_t x444 = UINT32_MAX;


void f0(void) {
	volatile int32_t x5 = INT32_MIN;
	static int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MAX;
	int32_t t0 = 0;

	t0 = (((x5<=x6)-x7)^x8);

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = -3878;
	volatile int32_t x11 = -744586;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t1 = 600317;

	t1 = (((x9<=x10)-x11)^x12);

	if (t1 != 744565) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 11U;
	int32_t x14 = INT32_MIN;
	int16_t x15 = -1;
	int32_t x16 = INT32_MIN;
	static int32_t t2 = 2429961;

	t2 = (((x13<=x14)-x15)^x16);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	int32_t x23 = INT32_MAX;
	int8_t x24 = -12;
	volatile int32_t t3 = -6782566;

	t3 = (((x21<=x22)-x23)^x24);

	if (t3 != 2147483637) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 1435342LLU;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -1;
	volatile uint32_t t4 = 106078U;

	t4 = (((x25<=x26)-x27)^x28);

	if (t4 != 4294967293U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	static uint32_t x30 = 2639U;
	int8_t x31 = -17;
	uint16_t x32 = UINT16_MAX;

	t5 = (((x29<=x30)-x31)^x32);

	if (t5 != 65517) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = -261604010;

	t6 = (((x33<=x34)-x35)^x36);

	if (t6 != 18446743661086181607LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x37 = -1;
	static uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;

	t7 = (((x37<=x38)-x39)^x40);

	if (t7 != 109) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MAX;
	int16_t x43 = 2121;
	int64_t x44 = -1LL;
	int64_t t8 = 2807512567LL;

	t8 = (((x41<=x42)-x43)^x44);

	if (t8 != 2119LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 15U;
	int64_t x46 = 138393931074970LL;
	volatile int8_t x48 = 5;

	t9 = (((x45<=x46)-x47)^x48);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = INT32_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	static int32_t t10 = 1;

	t10 = (((x49<=x50)-x51)^x52);

	if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	static int16_t x54 = INT16_MAX;
	uint8_t x55 = 59U;
	int16_t x56 = 0;
	volatile int32_t t11 = 5;

	t11 = (((x53<=x54)-x55)^x56);

	if (t11 != -58) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x57 = 2895178197LLU;
	uint32_t x58 = UINT32_MAX;
	static int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t12 = -290566721;

	t12 = (((x57<=x58)-x59)^x60);

	if (t12 != -126) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	uint8_t x63 = UINT8_MAX;
	static volatile int64_t x64 = INT64_MAX;

	t13 = (((x61<=x62)-x63)^x64);

	if (t13 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = -1;
	int16_t x67 = INT16_MAX;

	t14 = (((x65<=x66)-x67)^x68);

	if (t14 != -32766) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = -1;
	int8_t x70 = -5;
	int64_t x71 = 23845791LL;
	uint64_t t15 = 12177025LLU;

	t15 = (((x69<=x70)-x71)^x72);

	if (t15 != 18410462762885488289LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 9U;
	int8_t x76 = INT8_MAX;
	volatile int32_t t16 = -18340;

	t16 = (((x73<=x74)-x75)^x76);

	if (t16 != -120) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x79 = 0;
	int32_t t17 = -449;

	t17 = (((x77<=x78)-x79)^x80);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	int32_t x84 = -339;
	static volatile int32_t t18 = 828064470;

	t18 = (((x81<=x82)-x83)^x84);

	if (t18 != 300) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	volatile uint64_t x87 = 14508113LLU;
	static int64_t x88 = INT64_MIN;
	uint64_t t19 = 16031083210LLU;

	t19 = (((x85<=x86)-x87)^x88);

	if (t19 != 9223372036840267695LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	volatile int8_t x91 = INT8_MIN;
	uint64_t x92 = 278982220515423LLU;
	volatile uint64_t t20 = 8468519LLU;

	t20 = (((x89<=x90)-x91)^x92);

	if (t20 != 278982220515550LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	static int32_t t21 = -93480267;

	t21 = (((x93<=x94)-x95)^x96);

	if (t21 != 32638) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x102 = 1;
	int8_t x103 = -1;
	uint8_t x104 = 53U;
	volatile int32_t t22 = 8588;

	t22 = (((x101<=x102)-x103)^x104);

	if (t22 != 55) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	volatile uint16_t x106 = 430U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t23 = -3409;

	t23 = (((x105<=x106)-x107)^x108);

	if (t23 != -2147483520) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x110 = UINT16_MAX;

	t24 = (((x109<=x110)-x111)^x112);

	if (t24 != 12U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MAX;
	volatile uint16_t x114 = 9U;
	int8_t x115 = 12;
	uint16_t x116 = 5U;
	volatile int32_t t25 = 2257;

	t25 = (((x113<=x114)-x115)^x116);

	if (t25 != -15) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -62;
	int32_t x118 = INT32_MIN;
	int8_t x120 = INT8_MIN;

	t26 = (((x117<=x118)-x119)^x120);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	volatile uint16_t x124 = 17U;
	static volatile int32_t t27 = -250719;

	t27 = (((x121<=x122)-x123)^x124);

	if (t27 != 144) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -17;
	uint16_t x126 = UINT16_MAX;
	volatile int16_t x127 = -11719;
	volatile int32_t t28 = 113235238;

	t28 = (((x125<=x126)-x127)^x128);

	if (t28 != -11721) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	int8_t x130 = -1;
	volatile uint32_t x131 = 22425U;
	int64_t x132 = INT64_MAX;

	t29 = (((x129<=x130)-x131)^x132);

	if (t29 != 9223372032559830935LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 1950770143387445LLU;
	static int32_t x135 = -1;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -102093784;

	t30 = (((x133<=x134)-x135)^x136);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 2439;
	volatile int8_t x139 = -1;
	static int32_t x140 = -60792;
	static volatile int32_t t31 = -204;

	t31 = (((x137<=x138)-x139)^x140);

	if (t31 != -60791) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 49543LLU;
	int64_t t32 = -90943632517667574LL;

	t32 = (((x141<=x142)-x143)^x144);

	if (t32 != -7769LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x147 = 4U;
	int32_t x148 = 10492526;
	volatile int32_t t33 = -7657;

	t33 = (((x145<=x146)-x147)^x148);

	if (t33 != -10492526) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x149 = -1LL;
	uint32_t x150 = 12860128U;
	static uint8_t x151 = 4U;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t34 = -796304;

	t34 = (((x149<=x150)-x151)^x152);

	if (t34 != -254) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = 1924361834U;
	uint8_t x164 = 1U;
	int32_t t35 = -87;

	t35 = (((x161<=x162)-x163)^x164);

	if (t35 != -90544) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = INT32_MIN;
	int64_t x166 = 7714543649LL;
	int8_t x167 = INT8_MAX;
	int16_t x168 = -70;
	static volatile int32_t t36 = 694102275;

	t36 = (((x165<=x166)-x167)^x168);

	if (t36 != 56) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 1U;
	static int32_t x172 = -1;
	static volatile int32_t t37 = 868;

	t37 = (((x169<=x170)-x171)^x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 89857149LLU;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -6;
	volatile uint64_t t38 = 28559833LLU;

	t38 = (((x173<=x174)-x175)^x176);

	if (t38 != 17740412677009181LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x177 = -1;
	volatile uint64_t x178 = 176110706389635462LLU;
	volatile int8_t x179 = -5;
	int32_t t39 = -783221;

	t39 = (((x177<=x178)-x179)^x180);

	if (t39 != -123) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	static int32_t x182 = INT32_MAX;
	int64_t x184 = -1558245742LL;
	int64_t t40 = 25298LL;

	t40 = (((x181<=x182)-x183)^x184);

	if (t40 != 1558245799LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x185 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (((x185<=x186)-x187)^x188);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1;
	int16_t x190 = 1;
	static volatile uint8_t x191 = UINT8_MAX;
	int32_t t42 = 1198010;

	t42 = (((x189<=x190)-x191)^x192);

	if (t42 != 1060) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x195 = 32452390;
	static int32_t x196 = INT32_MIN;

	t43 = (((x193<=x194)-x195)^x196);

	if (t43 != 2115031259) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = 0;
	uint32_t x198 = 357466225U;
	volatile uint8_t x199 = 90U;
	uint8_t x200 = UINT8_MAX;
	static int32_t t44 = 207;

	t44 = (((x197<=x198)-x199)^x200);

	if (t44 != -168) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = 9;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t45 = -15;

	t45 = (((x201<=x202)-x203)^x204);

	if (t45 != 2147450881) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1230;
	int16_t x206 = INT16_MAX;

	t46 = (((x205<=x206)-x207)^x208);

	if (t46 != -2147483519) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static volatile uint8_t x210 = 1U;
	static int32_t x211 = INT32_MAX;
	uint64_t x212 = 6LLU;
	volatile uint64_t t47 = 13820788910947LLU;

	t47 = (((x209<=x210)-x211)^x212);

	if (t47 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -1LL;
	volatile int8_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t48 = -33LL;

	t48 = (((x213<=x214)-x215)^x216);

	if (t48 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 2216383921471959LLU;
	volatile uint8_t x218 = UINT8_MAX;
	uint32_t x220 = 1208936021U;

	t49 = (((x217<=x218)-x219)^x220);

	if (t49 != 1208936149U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -1LL;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = -1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t50 = 99;

	t50 = (((x221<=x222)-x223)^x224);

	if (t50 != 2147483645) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = 489268880LL;
	static volatile uint32_t x228 = 20254U;
	int64_t t51 = 177946943904LL;

	t51 = (((x225<=x226)-x227)^x228);

	if (t51 != -489286034LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x230 = 14;
	volatile int16_t x231 = INT16_MAX;
	static int64_t x232 = INT64_MIN;
	int64_t t52 = 7129LL;

	t52 = (((x229<=x230)-x231)^x232);

	if (t52 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x246 = INT8_MAX;
	int64_t x247 = 248424441583248LL;
	int64_t x248 = INT64_MIN;
	int64_t t53 = -1535177480762854473LL;

	t53 = (((x245<=x246)-x247)^x248);

	if (t53 != 9223123612413192561LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = INT8_MAX;
	int64_t x250 = 42831161910LL;
	static uint32_t x251 = 12267496U;
	volatile uint32_t t54 = 151U;

	t54 = (((x249<=x250)-x251)^x252);

	if (t54 != 2159751142U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = -1;
	int8_t x258 = INT8_MAX;
	static int8_t x260 = -1;
	int32_t t55 = 2412;

	t55 = (((x257<=x258)-x259)^x260);

	if (t55 != 65533) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x261 = 8U;
	volatile uint64_t x263 = 1979441931748991598LLU;
	int32_t x264 = -1;

	t56 = (((x261<=x262)-x263)^x264);

	if (t56 != 1979441931748991597LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x265 = 6U;
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	static int64_t t57 = -677658581093LL;

	t57 = (((x265<=x266)-x267)^x268);

	if (t57 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x269 = INT16_MIN;
	volatile int8_t x270 = 1;
	static int32_t x271 = -1;
	int32_t t58 = -45885;

	t58 = (((x269<=x270)-x271)^x272);

	if (t58 != -3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	volatile int16_t x274 = INT16_MAX;
	volatile int64_t x275 = INT64_MAX;
	volatile int32_t x276 = 134151;
	int64_t t59 = -755845LL;

	t59 = (((x273<=x274)-x275)^x276);

	if (t59 != -9223372036854641659LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	int16_t x279 = -215;
	int32_t t60 = -146650;

	t60 = (((x277<=x278)-x279)^x280);

	if (t60 != 133862812) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = 7U;
	static int8_t x282 = INT8_MAX;
	volatile int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t61 = -105844;

	t61 = (((x281<=x282)-x283)^x284);

	if (t61 != -2147450879) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MAX;
	static int8_t x286 = 1;
	volatile uint32_t x287 = 59993U;
	int64_t x288 = INT64_MIN;
	volatile int64_t t62 = -7683LL;

	t62 = (((x285<=x286)-x287)^x288);

	if (t62 != -9223372032559868505LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MAX;
	static int64_t x292 = INT64_MAX;
	int64_t t63 = 21LL;

	t63 = (((x289<=x290)-x291)^x292);

	if (t63 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MAX;

	t64 = (((x293<=x294)-x295)^x296);

	if (t64 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x297 = 510871733LLU;
	int16_t x299 = -8;
	int16_t x300 = 0;

	t65 = (((x297<=x298)-x299)^x300);

	if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = 1176858669379403LL;
	int8_t x304 = INT8_MIN;

	t66 = (((x301<=x302)-x303)^x304);

	if (t66 != 32642) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = INT64_MIN;
	int64_t x308 = 9520LL;

	t67 = (((x305<=x306)-x307)^x308);

	if (t67 != 9424LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = 12;
	volatile int16_t x310 = 171;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t68 = -23325587;

	t68 = (((x309<=x310)-x311)^x312);

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x317 = 8101570U;
	uint64_t x318 = 1463205LLU;
	static volatile int32_t x320 = INT32_MAX;
	volatile int32_t t69 = -402545;

	t69 = (((x317<=x318)-x319)^x320);

	if (t69 != 2147483519) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x321 = UINT8_MAX;
	volatile int32_t x323 = -1;
	int64_t x324 = 174844LL;
	static int64_t t70 = 7865649170LL;

	t70 = (((x321<=x322)-x323)^x324);

	if (t70 != 174845LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = 0;
	static int8_t x328 = INT8_MAX;
	uint64_t t71 = 1470358LLU;

	t71 = (((x325<=x326)-x327)^x328);

	if (t71 != 18446743534225885289LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MIN;
	static volatile int16_t x334 = INT16_MIN;
	static int8_t x336 = -1;
	volatile uint32_t t72 = 474U;

	t72 = (((x333<=x334)-x335)^x336);

	if (t72 != 4294967293U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x338 = UINT64_MAX;

	t73 = (((x337<=x338)-x339)^x340);

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = -1;
	int8_t x343 = -1;
	int64_t x344 = 60416LL;
	int64_t t74 = 72511562193LL;

	t74 = (((x341<=x342)-x343)^x344);

	if (t74 != 60417LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = -3;
	uint8_t x346 = UINT8_MAX;
	static uint8_t x348 = UINT8_MAX;
	static volatile int32_t t75 = -29711805;

	t75 = (((x345<=x346)-x347)^x348);

	if (t75 != -2147483395) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = 26;
	volatile int32_t x350 = 83108;
	uint64_t x351 = 7607701172LLU;
	volatile uint32_t x352 = 13340U;
	uint64_t t76 = 129389176244868LLU;

	t76 = (((x349<=x350)-x351)^x352);

	if (t76 != 18446744066101839185LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x355 = 3;
	int8_t x356 = -3;
	int32_t t77 = 60383;

	t77 = (((x353<=x354)-x355)^x356);

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x358 = -1;
	uint8_t x359 = 7U;
	volatile int32_t x360 = -257334;
	volatile int32_t t78 = -1607116;

	t78 = (((x357<=x358)-x359)^x360);

	if (t78 != 257328) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x362 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t79 = 2449;

	t79 = (((x361<=x362)-x363)^x364);

	if (t79 != 32642) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x366 = 99U;
	static uint8_t x367 = 3U;
	int32_t x368 = -62641;

	t80 = (((x365<=x366)-x367)^x368);

	if (t80 != 62642) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x369 = INT32_MIN;
	int64_t x371 = 52251LL;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t81 = 3010035995197040008LLU;

	t81 = (((x369<=x370)-x371)^x372);

	if (t81 != 52249LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -712065597;
	volatile int64_t x376 = -217303818303LL;
	uint64_t t82 = 6216526641LLU;

	t82 = (((x373<=x374)-x375)^x376);

	if (t82 != 18446743856405733312LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = -19627180;
	int16_t x378 = INT16_MAX;
	static uint64_t x379 = UINT64_MAX;
	uint32_t x380 = UINT32_MAX;

	t83 = (((x377<=x378)-x379)^x380);

	if (t83 != 4294967293LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 50U;
	uint8_t x382 = 0U;
	int64_t x383 = -1LL;
	int64_t t84 = 11LL;

	t84 = (((x381<=x382)-x383)^x384);

	if (t84 != 32766LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int32_t t85 = 13459189;

	t85 = (((x385<=x386)-x387)^x388);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MIN;
	uint8_t x390 = 0U;
	int64_t x391 = -1LL;
	uint32_t x392 = UINT32_MAX;
	int64_t t86 = -8393603299497LL;

	t86 = (((x389<=x390)-x391)^x392);

	if (t86 != 4294967293LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	volatile uint64_t t87 = 32606LLU;

	t87 = (((x393<=x394)-x395)^x396);

	if (t87 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x398 = 13;
	uint8_t x399 = 1U;
	volatile int32_t t88 = 0;

	t88 = (((x397<=x398)-x399)^x400);

	if (t88 != -256) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x405 = INT16_MIN;
	volatile int32_t x407 = -1;
	static int32_t x408 = -8;
	volatile int32_t t89 = -487;

	t89 = (((x405<=x406)-x407)^x408);

	if (t89 != -6) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x409 = 64325188U;
	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	uint16_t x412 = 6161U;
	static volatile int64_t t90 = 13884997421LL;

	t90 = (((x409<=x410)-x411)^x412);

	if (t90 != -9223372036854769648LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = 20583586U;
	volatile int8_t x415 = -5;
	int8_t x416 = -1;
	int32_t t91 = 235298;

	t91 = (((x413<=x414)-x415)^x416);

	if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x419 = UINT8_MAX;
	uint32_t x420 = UINT32_MAX;
	static uint32_t t92 = 12U;

	t92 = (((x417<=x418)-x419)^x420);

	if (t92 != 253U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = 16148116U;
	int16_t x422 = INT16_MAX;
	uint8_t x423 = 1U;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t93 = INT32_MAX;

	t93 = (((x421<=x422)-x423)^x424);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x425 = 184865746360LLU;
	uint64_t x426 = 93516LLU;
	uint8_t x427 = 5U;
	volatile int32_t t94 = -3428;

	t94 = (((x425<=x426)-x427)^x428);

	if (t94 != -8) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = -39;
	int64_t x430 = 3623136892LL;
	volatile uint8_t x431 = 19U;
	int8_t x432 = 0;
	int32_t t95 = 936;

	t95 = (((x429<=x430)-x431)^x432);

	if (t95 != -18) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x433 = UINT32_MAX;
	int16_t x434 = INT16_MAX;
	volatile int32_t x435 = 94320105;
	int64_t x436 = 1245690LL;

	t96 = (((x433<=x434)-x435)^x436);

	if (t96 != -93074451LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x437 = INT64_MAX;
	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	volatile int32_t t97 = -1825;

	t97 = (((x437<=x438)-x439)^x440);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x441 = INT8_MAX;
	volatile int16_t x443 = 0;
	uint32_t t98 = UINT32_MAX;

	t98 = (((x441<=x442)-x443)^x444);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = 1;
	int64_t x446 = -1LL;
	int16_t x447 = 1;
	int32_t x448 = 157;
	int32_t t99 = -8051866;

	t99 = (((x445<=x446)-x447)^x448);

	if (t99 != -158) { NG(); } else { ; }
	
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

