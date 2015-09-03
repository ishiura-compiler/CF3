#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
int64_t x3 = INT64_MAX;
int32_t x9 = INT32_MAX;
int32_t x16 = INT32_MIN;
int64_t x19 = INT64_MAX;
uint32_t x21 = 39246U;
volatile uint32_t x22 = 39139591U;
int16_t x30 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
volatile uint32_t x42 = UINT32_MAX;
static int64_t t10 = INT64_MAX;
static volatile uint16_t x56 = 1505U;
uint32_t x60 = UINT32_MAX;
uint64_t x66 = 866345052LLU;
int8_t x70 = INT8_MIN;
volatile int16_t x72 = INT16_MIN;
uint16_t x87 = 1U;
static uint16_t x88 = 456U;
uint64_t x91 = 4067835608LLU;
volatile uint8_t x97 = 29U;
static volatile int8_t x101 = INT8_MIN;
volatile uint64_t x104 = 38096133LLU;
static int32_t x106 = 375;
volatile int8_t x115 = -1;
volatile uint64_t t23 = 134734627157LLU;
static int16_t x125 = -1;
int16_t x127 = -1;
static int8_t x128 = -53;
int16_t x136 = INT16_MIN;
static volatile int8_t x138 = INT8_MAX;
int16_t x139 = -1;
int64_t x141 = -1LL;
uint64_t x148 = 3663LLU;
uint16_t x152 = UINT16_MAX;
volatile int32_t t30 = 31286;
int16_t x159 = -1;
volatile int32_t t32 = -2;
static volatile int64_t x161 = INT64_MAX;
int64_t x167 = -340LL;
int16_t x170 = INT16_MIN;
int16_t x171 = INT16_MIN;
int8_t x172 = INT8_MIN;
int32_t x183 = -418;
uint16_t x191 = 14013U;
static uint64_t t37 = 1843LLU;
uint64_t x194 = 16957472807LLU;
uint64_t t38 = 40446236528LLU;
volatile int32_t t39 = -13675519;
volatile int64_t x212 = INT64_MAX;
static int64_t x214 = -1LL;
int8_t x215 = -1;
volatile uint32_t x216 = 1U;
volatile uint16_t x229 = 12U;
int8_t x230 = -1;
uint32_t x233 = UINT32_MAX;
static volatile int8_t x235 = INT8_MIN;
static int64_t x237 = -1LL;
static int16_t x238 = 4;
int32_t x243 = -68;
volatile uint32_t x245 = 189U;
volatile uint8_t x246 = UINT8_MAX;
volatile int8_t x248 = -1;
volatile int64_t t48 = 434LL;
static int64_t x265 = -1LL;
uint8_t x269 = 40U;
static volatile uint8_t x273 = 11U;
volatile uint32_t t54 = UINT32_MAX;
static int8_t x297 = INT8_MIN;
uint64_t x300 = UINT64_MAX;
int16_t x305 = -3841;
volatile uint8_t x320 = 83U;
int8_t x321 = -1;
volatile uint64_t x327 = UINT64_MAX;
volatile int16_t x328 = 4553;
int64_t t63 = -49512502096153957LL;
int16_t x337 = -1;
uint16_t x339 = 2486U;
static int32_t x344 = -3;
int16_t x346 = 694;
int8_t x357 = -1;
int16_t x359 = -1;
int64_t x360 = 428029577LL;
int8_t x364 = 0;
static uint64_t x369 = 42911629398911695LLU;
uint8_t x378 = 18U;
int32_t x382 = INT32_MAX;
static int8_t x393 = 2;
uint64_t x394 = 53369694248LLU;
static uint16_t x397 = 6448U;
volatile uint16_t x399 = UINT16_MAX;
int16_t x408 = 6;
static volatile int32_t x417 = INT32_MIN;
volatile int32_t x424 = INT32_MIN;
volatile int32_t t81 = -77391;
static int32_t x430 = -562915;
int32_t t83 = -21391;
int32_t x436 = INT32_MIN;
uint8_t x442 = UINT8_MAX;
int64_t x446 = INT64_MAX;
int64_t t86 = 7625LL;
int8_t x449 = 0;
uint8_t x454 = 4U;
static int64_t x456 = -1074307724753LL;
int32_t x465 = INT32_MIN;
int32_t x472 = -1;
uint64_t x473 = UINT64_MAX;
volatile int32_t x474 = 17591834;
int32_t x476 = -36154;
uint64_t t92 = UINT64_MAX;
int64_t x497 = -116690942006918LL;
uint64_t x498 = 7794LLU;
uint64_t t96 = 3468LLU;
static int16_t x513 = INT16_MAX;


void f0(void) {
	static int32_t x2 = -1;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2+x3)-x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 8618581LL;
	int8_t x6 = 1;
	volatile uint32_t x7 = UINT32_MAX;
	static volatile uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 970919794543470101LLU;

	t1 = (x5|((x6+x7)-x8));

	if (t1 != 8618581LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile int8_t x11 = INT8_MIN;
	uint64_t x12 = 10LLU;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10+x11)-x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 31;
	uint64_t x14 = 16LLU;
	volatile int64_t x15 = -20181046731LL;
	uint64_t t3 = 1368530LLU;

	t3 = (x13|((x14+x15)-x16));

	if (t3 != 18446744055675988575LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 1U;
	volatile uint64_t x18 = 37038LLU;
	static volatile uint8_t x20 = 0U;
	static volatile uint64_t t4 = 13685909733554LLU;

	t4 = (x17|((x18+x19)-x20));

	if (t4 != 9223372036854812845LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MAX;
	int64_t t5 = -87909LL;

	t5 = (x21|((x22+x23)-x24));

	if (t5 != -9223372034668119730LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int16_t x26 = -61;
	int16_t x27 = INT16_MAX;
	int32_t x28 = INT32_MAX;
	static volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25|((x26+x27)-x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x31 = 842730772817LL;
	int64_t x32 = -1LL;
	uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30+x31)-x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 1U;
	uint64_t x35 = 6383245361921LLU;
	static volatile uint32_t x36 = 1170U;
	uint64_t t8 = 13970834LLU;

	t8 = (x33|((x34+x35)-x36));

	if (t8 != 6387540328047LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 373307U;
	int64_t t9 = 19138LL;

	t9 = (x41|((x42+x43)-x44));

	if (t9 != -9223372032560181761LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MAX;
	static uint16_t x50 = 780U;
	int8_t x51 = -11;
	int8_t x52 = -7;

	t10 = (x49|((x50+x51)-x52));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = 13U;
	uint32_t x54 = 116572U;
	int64_t x55 = INT64_MIN;
	int64_t t11 = 1LL;

	t11 = (x53|((x54+x55)-x56));

	if (t11 != -9223372036854660737LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MAX;
	uint64_t t12 = 132912LLU;

	t12 = (x57|((x58+x59)-x60));

	if (t12 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	uint8_t x64 = 4U;
	static volatile int64_t t13 = 17310650619822250LL;

	t13 = (x61|((x62+x63)-x64));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	int32_t x67 = -1;
	uint8_t x68 = 40U;
	uint64_t t14 = 1641508LLU;

	t14 = (x65|((x66+x67)-x68));

	if (t14 != 9223372037721120819LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = 116786132LL;
	uint8_t x71 = 1U;
	int64_t t15 = 2571228LL;

	t15 = (x69|((x70+x71)-x72));

	if (t15 != 116817877LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = UINT8_MAX;
	int16_t x82 = 2;
	int16_t x83 = INT16_MIN;
	int16_t x84 = -202;
	int32_t t16 = -5342;

	t16 = (x81|((x82+x83)-x84));

	if (t16 != -32513) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x85 = INT32_MAX;
	static int16_t x86 = 1;
	volatile int32_t t17 = 76;

	t17 = (x85|((x86+x87)-x88));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static int16_t x92 = INT16_MIN;
	volatile uint64_t t18 = 8441622084125399LLU;

	t18 = (x89|((x90+x91)-x92));

	if (t18 != 8362852351LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x98 = 4655U;
	int32_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	uint32_t t19 = 884196742U;

	t19 = (x97|((x98+x99)-x100));

	if (t19 != 4294906431U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x102 = 1;
	static uint8_t x103 = UINT8_MAX;
	volatile uint64_t t20 = 7682989398980066277LLU;

	t20 = (x101|((x102+x103)-x104));

	if (t20 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	volatile int32_t t21 = -10;

	t21 = (x105|((x106+x107)-x108));

	if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x113 = -1949LL;
	static int8_t x114 = 26;
	uint32_t x116 = UINT32_MAX;
	int64_t t22 = -219794821173384828LL;

	t22 = (x113|((x114+x115)-x116));

	if (t22 != -1925LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -10;
	static uint64_t x118 = UINT64_MAX;
	int16_t x119 = 2;
	volatile int32_t x120 = INT32_MAX;

	t23 = (x117|((x118+x119)-x120));

	if (t23 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 149277087092815064LLU;
	static volatile int32_t x122 = -16038;
	static int8_t x123 = -10;
	volatile uint64_t x124 = 13LLU;
	uint64_t t24 = 7355894183476LLU;

	t24 = (x121|((x122+x123)-x124));

	if (t24 != 18446744073709549019LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x126 = 1369851325806397LLU;
	uint64_t t25 = UINT64_MAX;

	t25 = (x125|((x126+x127)-x128));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -53922377;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = -1;
	volatile uint32_t t26 = 3U;

	t26 = (x133|((x134+x135)-x136));

	if (t26 != 4241063935U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 0U;
	uint32_t x140 = UINT32_MAX;
	uint32_t t27 = 898051U;

	t27 = (x137|((x138+x139)-x140));

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x142 = 322224LL;
	uint64_t x143 = 1673740007751LLU;
	uint32_t x144 = 641333U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x141|((x142+x143)-x144));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x145 = 933588084;
	volatile uint64_t x146 = 1192209370407071064LLU;
	volatile int16_t x147 = INT16_MIN;
	uint64_t t29 = 8052687599876092690LLU;

	t29 = (x145|((x146+x147)-x148));

	if (t29 != 1192209370988281725LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x149 = 271;
	volatile int8_t x150 = INT8_MIN;
	int32_t x151 = 1;

	t30 = (x149|((x150+x151)-x152));

	if (t30 != -65649) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 362LLU;
	uint32_t x156 = 362919048U;
	uint64_t t31 = 61920LLU;

	t31 = (x153|((x154+x155)-x156));

	if (t31 != 18446744073709538530LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 2682;
	volatile int32_t x158 = INT32_MAX;
	volatile uint8_t x160 = UINT8_MAX;

	t32 = (x157|((x158+x159)-x160));

	if (t32 != 2147483391) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MAX;
	volatile int32_t x163 = -1;
	uint32_t x164 = 8129282U;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x161|((x162+x163)-x164));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = INT64_MAX;
	int32_t x166 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	static volatile int64_t t34 = 2473107572251735LL;

	t34 = (x165|((x166+x167)-x168));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 36U;
	int32_t t35 = -3199;

	t35 = (x169|((x170+x171)-x172));

	if (t35 != -65372) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x181 = -769;
	volatile int32_t x182 = 3655;
	static volatile int16_t x184 = -1;
	int32_t t36 = 1969074;

	t36 = (x181|((x182+x183)-x184));

	if (t36 != -769) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 1646U;
	static uint64_t x190 = 2974340582LLU;
	uint16_t x192 = 0U;

	t37 = (x189|((x190+x191)-x192));

	if (t37 != 2974355183LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x195 = 4504861148715387003LLU;
	static uint64_t x196 = 4311040LLU;

	t38 = (x193|((x194+x195)-x196));

	if (t38 != 4504861166639513599LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x201 = 42248;
	static volatile int8_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	static int8_t x204 = INT8_MIN;

	t39 = (x201|((x202+x203)-x204));

	if (t39 != -23169) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = -1LL;
	volatile int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x205|((x206+x207)-x208));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = -1;
	uint32_t x211 = 8061U;
	volatile int64_t t41 = 246LL;

	t41 = (x209|((x210+x211)-x212));

	if (t41 != -3LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x213 = -565;
	int64_t t42 = 216683339LL;

	t42 = (x213|((x214+x215)-x216));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x231 = -26;
	int16_t x232 = INT16_MIN;
	volatile int32_t t43 = -7684539;

	t43 = (x229|((x230+x231)-x232));

	if (t43 != 32749) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x234 = INT16_MAX;
	static volatile int32_t x236 = 149;
	uint32_t t44 = UINT32_MAX;

	t44 = (x233|((x234+x235)-x236));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x239 = INT8_MAX;
	int8_t x240 = -1;
	int64_t t45 = 4300019844387710LL;

	t45 = (x237|((x238+x239)-x240));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x241 = INT8_MAX;
	uint64_t x242 = UINT64_MAX;
	static int16_t x244 = -1;
	static uint64_t t46 = UINT64_MAX;

	t46 = (x241|((x242+x243)-x244));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x247 = 144054562LLU;
	volatile uint64_t t47 = 12497LLU;

	t47 = (x245|((x246+x247)-x248));

	if (t47 != 144054975LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = 24LL;
	static uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MAX;
	static int16_t x252 = 453;

	t48 = (x249|((x250+x251)-x252));

	if (t48 != 32313LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = -1LL;
	static volatile uint32_t x254 = 3U;
	int16_t x255 = INT16_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t49 = 43175661LL;

	t49 = (x253|((x254+x255)-x256));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x266 = 1363018U;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -1;
	int64_t t50 = -15770616401002LL;

	t50 = (x265|((x266+x267)-x268));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x270 = -2364764115330LL;
	volatile int16_t x271 = INT16_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	static uint64_t t51 = 1085408216057155495LLU;

	t51 = (x269|((x270+x271)-x272));

	if (t51 != 18446741708945403519LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x274 = 59577549U;
	uint64_t x275 = 4416260295761134LLU;
	int16_t x276 = INT16_MAX;
	volatile uint64_t t52 = 1200LLU;

	t52 = (x273|((x274+x275)-x276));

	if (t52 != 4416260355305919LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = -7;
	int64_t x282 = -1LL;
	int64_t x283 = 15998LL;
	int16_t x284 = 61;
	volatile int64_t t53 = -1882020754558530125LL;

	t53 = (x281|((x282+x283)-x284));

	if (t53 != -7LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = 1;
	int32_t x287 = 411762702;
	int8_t x288 = INT8_MIN;

	t54 = (x285|((x286+x287)-x288));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x298 = -435LL;
	uint32_t x299 = UINT32_MAX;
	static volatile uint64_t t55 = 1LLU;

	t55 = (x297|((x298+x299)-x300));

	if (t55 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MIN;
	volatile int32_t x302 = -3209;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = INT8_MIN;
	static int64_t t56 = 282543LL;

	t56 = (x301|((x302+x303)-x304));

	if (t56 != -2826LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x306 = INT16_MAX;
	volatile int16_t x307 = -1;
	static volatile int8_t x308 = INT8_MIN;
	int32_t t57 = -58237442;

	t57 = (x305|((x306+x307)-x308));

	if (t57 != -3841) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MAX;
	int32_t x314 = 26413;
	volatile int64_t x315 = -14096LL;
	volatile int32_t x316 = INT32_MIN;
	static int64_t t58 = 7536484957584LL;

	t58 = (x313|((x314+x315)-x316));

	if (t58 != 2147516415LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x317 = 2U;
	int32_t x318 = 242076417;
	int8_t x319 = INT8_MIN;
	int32_t t59 = -11;

	t59 = (x317|((x318+x319)-x320));

	if (t59 != 242076206) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x322 = 2U;
	static uint16_t x323 = 412U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t60 = -479418278;

	t60 = (x321|((x322+x323)-x324));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = 6;
	static int16_t x326 = INT16_MIN;
	uint64_t t61 = 82927400813773694LLU;

	t61 = (x325|((x326+x327)-x328));

	if (t61 != 18446744073709514294LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x329 = -1LL;
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 3597U;
	int64_t x332 = -1LL;
	int64_t t62 = 173LL;

	t62 = (x329|((x330+x331)-x332));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x333 = -195324347019LL;
	uint32_t x334 = 14442U;
	int8_t x335 = -2;
	int64_t x336 = INT64_MAX;

	t63 = (x333|((x334+x335)-x336));

	if (t63 != -195324347011LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x338 = INT64_MIN;
	static uint8_t x340 = 7U;
	int64_t t64 = 17303077316450160LL;

	t64 = (x337|((x338+x339)-x340));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x341 = -1LL;
	int64_t x342 = -1333383396139LL;
	int8_t x343 = 44;
	static volatile int64_t t65 = -3503911447605178090LL;

	t65 = (x341|((x342+x343)-x344));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x345 = INT16_MIN;
	uint16_t x347 = 4U;
	int8_t x348 = 1;
	int32_t t66 = -157170828;

	t66 = (x345|((x346+x347)-x348));

	if (t66 != -32071) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x349 = 86219824080347LLU;
	static int8_t x350 = INT8_MAX;
	int64_t x351 = -112317146466170563LL;
	int64_t x352 = -1LL;
	volatile uint64_t t67 = 2230830LLU;

	t67 = (x349|((x350+x351)-x352));

	if (t67 != 18334433835720044031LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x358 = 53296U;
	int64_t t68 = 3443719LL;

	t68 = (x357|((x358+x359)-x360));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x361 = -1LL;
	int8_t x362 = 1;
	uint16_t x363 = 20U;
	int64_t t69 = -1LL;

	t69 = (x361|((x362+x363)-x364));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x370 = -53;
	int32_t x371 = INT32_MAX;
	int8_t x372 = 0;
	uint64_t t70 = 543475042850LLU;

	t70 = (x369|((x370+x371)-x372));

	if (t70 != 42911630287175631LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x377 = 1U;
	uint8_t x379 = 38U;
	static volatile uint32_t x380 = UINT32_MAX;
	uint32_t t71 = 371U;

	t71 = (x377|((x378+x379)-x380));

	if (t71 != 57U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int8_t x383 = -1;
	static uint16_t x384 = UINT16_MAX;
	static volatile int32_t t72 = -239056998;

	t72 = (x381|((x382+x383)-x384));

	if (t72 != 2147418111) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = -1;
	volatile uint16_t x387 = 1U;
	static uint32_t x388 = UINT32_MAX;
	uint32_t t73 = 828U;

	t73 = (x385|((x386+x387)-x388));

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = -1LL;
	int16_t x390 = -15;
	int8_t x391 = -1;
	int64_t x392 = -1LL;
	int64_t t74 = 44677489019330956LL;

	t74 = (x389|((x390+x391)-x392));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x395 = INT64_MIN;
	static volatile int64_t x396 = INT64_MIN;
	volatile uint64_t t75 = 2362871036LLU;

	t75 = (x393|((x394+x395)-x396));

	if (t75 != 53369694250LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x398 = INT16_MAX;
	uint64_t x400 = 39136962502LLU;
	static uint64_t t76 = 96988906159705266LLU;

	t76 = (x397|((x398+x399)-x400));

	if (t76 != 18446744034572687672LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 3U;
	int32_t x407 = 3134253;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x405|((x406+x407)-x408));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x409 = INT16_MAX;
	uint8_t x410 = UINT8_MAX;
	static int8_t x411 = INT8_MIN;
	int64_t x412 = -407045779265LL;
	int64_t t78 = -30850LL;

	t78 = (x409|((x410+x411)-x412));

	if (t78 != 407045799935LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x413 = -30;
	int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	volatile int16_t x416 = INT16_MIN;
	int32_t t79 = -3058972;

	t79 = (x413|((x414+x415)-x416));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x418 = 123U;
	volatile int8_t x419 = INT8_MIN;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t80 = 857757;

	t80 = (x417|((x418+x419)-x420));

	if (t80 != -132) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x421 = 0;
	int16_t x422 = 11;
	int8_t x423 = INT8_MIN;

	t81 = (x421|((x422+x423)-x424));

	if (t81 != 2147483531) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	uint16_t x427 = 261U;
	static volatile int64_t x428 = -229921583939291449LL;
	int64_t t82 = 340922LL;

	t82 = (x425|((x426+x427)-x428));

	if (t82 != -8993450452915484098LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x429 = -1;
	int32_t x431 = INT32_MAX;
	int16_t x432 = INT16_MAX;

	t83 = (x429|((x430+x431)-x432));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x433 = 10644710489746LLU;
	int32_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	volatile uint64_t t84 = 7LLU;

	t84 = (x433|((x434+x435)-x436));

	if (t84 != 10645076443134LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x441 = UINT8_MAX;
	uint8_t x443 = UINT8_MAX;
	uint16_t x444 = 14664U;
	int32_t t85 = 102243290;

	t85 = (x441|((x442+x443)-x444));

	if (t85 != -14081) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x445 = INT32_MIN;
	int16_t x447 = -1;
	uint8_t x448 = 13U;

	t86 = (x445|((x446+x447)-x448));

	if (t86 != -15LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 20966356871198242LLU;
	uint32_t x452 = 19557U;
	static volatile uint64_t t87 = 260776238737445503LLU;

	t87 = (x449|((x450+x451)-x452));

	if (t87 != 9244338393725954493LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x453 = INT64_MIN;
	uint32_t x455 = 7U;
	volatile int64_t t88 = -128LL;

	t88 = (x453|((x454+x455)-x456));

	if (t88 != -9223370962547051044LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = INT32_MAX;
	uint32_t x462 = UINT32_MAX;
	volatile int8_t x463 = INT8_MIN;
	uint32_t x464 = 1U;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x461|((x462+x463)-x464));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x466 = 5U;
	int32_t x467 = -5752;
	int64_t x468 = -3LL;
	int64_t t90 = 40607437169LL;

	t90 = (x465|((x466+x467)-x468));

	if (t90 != -5744LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x469 = INT32_MIN;
	static volatile int16_t x470 = 13862;
	uint16_t x471 = UINT16_MAX;
	static int32_t t91 = 456;

	t91 = (x469|((x470+x471)-x472));

	if (t91 != -2147404250) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x475 = INT16_MAX;

	t92 = (x473|((x474+x475)-x476));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = -1LL;
	volatile int8_t x478 = -1;
	uint32_t x479 = 9635U;
	int64_t x480 = -3467024394405262LL;
	static volatile int64_t t93 = 961665778086104129LL;

	t93 = (x477|((x478+x479)-x480));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	uint32_t x483 = 18902U;
	volatile uint8_t x484 = 12U;
	uint32_t t94 = 1001U;

	t94 = (x481|((x482+x483)-x484));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x489 = -1;
	static uint16_t x490 = 8196U;
	volatile uint32_t x491 = UINT32_MAX;
	volatile uint64_t x492 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x489|((x490+x491)-x492));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x499 = -1LL;
	static uint32_t x500 = 21791U;

	t96 = (x497|((x498+x499)-x500));

	if (t96 != 18446744073709545850LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MIN;
	uint16_t x502 = 29U;
	uint64_t x503 = 0LLU;
	static volatile int16_t x504 = 529;
	volatile uint64_t t97 = 255LLU;

	t97 = (x501|((x502+x503)-x504));

	if (t97 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = -84118153;
	int32_t x510 = INT32_MIN;
	int64_t x511 = INT64_MAX;
	uint32_t x512 = 13619U;
	volatile int64_t t98 = -123LL;

	t98 = (x509|((x510+x511)-x512));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x514 = 2317;
	static int64_t x515 = -1LL;
	uint32_t x516 = UINT32_MAX;
	int64_t t99 = -53LL;

	t99 = (x513|((x514+x515)-x516));

	if (t99 != -4294934529LL) { NG(); } else { ; }
	
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

