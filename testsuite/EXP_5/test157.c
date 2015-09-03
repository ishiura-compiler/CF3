#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x2 = -5;
volatile uint64_t t0 = 2149LLU;
volatile int8_t x5 = INT8_MIN;
static int64_t x6 = -1LL;
volatile int32_t x12 = INT32_MIN;
uint32_t x14 = 2U;
int8_t x29 = -1;
static int32_t x33 = INT32_MAX;
int64_t x34 = 54386431LL;
int32_t x37 = 6;
int32_t x45 = INT32_MIN;
int32_t x46 = INT32_MIN;
static volatile int64_t t10 = 169837440363LL;
volatile int8_t x70 = INT8_MIN;
uint8_t x71 = 3U;
int16_t x78 = 4897;
static int32_t t15 = 12104449;
int64_t x88 = 1594LL;
volatile int32_t x95 = -1;
uint64_t t17 = 87167143692238089LLU;
int64_t x107 = INT64_MIN;
volatile uint64_t x112 = 601873LLU;
uint8_t x125 = UINT8_MAX;
int16_t x134 = INT16_MIN;
uint16_t x136 = UINT16_MAX;
static int16_t x139 = INT16_MAX;
uint8_t x140 = 1U;
static int16_t x155 = -1;
static volatile int8_t x161 = -1;
static int16_t x163 = INT16_MAX;
volatile uint64_t t34 = 5181374002848LLU;
uint8_t x183 = 3U;
int8_t x188 = -1;
int64_t x193 = INT64_MAX;
uint32_t x197 = 242U;
int16_t x198 = INT16_MIN;
int8_t x203 = INT8_MIN;
volatile int32_t x205 = -205;
volatile int8_t x206 = INT8_MIN;
int32_t x210 = INT32_MIN;
int8_t x219 = -10;
int8_t x223 = 10;
int8_t x225 = -8;
static uint16_t x230 = 1U;
int64_t x232 = -1LL;
int64_t x245 = -1LL;
volatile int8_t x248 = -5;
uint32_t x254 = 212U;
volatile int64_t t53 = -18LL;
static int64_t x262 = -4023551LL;
int8_t x263 = INT8_MAX;
int32_t x264 = -1;
volatile int64_t t54 = 840088029198LL;
static int8_t x271 = 22;
int16_t x275 = INT16_MAX;
static uint64_t x289 = 875315LLU;
static int16_t x292 = INT16_MAX;
uint64_t x296 = 41658286825LLU;
static int32_t x302 = -1;
uint8_t x308 = UINT8_MAX;
int64_t x330 = INT64_MIN;
static uint32_t x334 = 3221556U;
static int32_t x338 = -1074209;
volatile int32_t x341 = 51456227;
static int64_t t73 = 7LL;
volatile uint16_t x353 = 7450U;
uint8_t x354 = 17U;
volatile uint64_t t74 = 15LLU;
uint16_t x361 = 64U;
int8_t x366 = 4;
static volatile int64_t x370 = INT64_MIN;
volatile uint32_t x373 = 544U;
uint8_t x385 = 0U;
volatile uint64_t t80 = 266573826715LLU;
int16_t x394 = 1639;
volatile int32_t t83 = 44021;
int8_t x405 = 43;
static int64_t x407 = -68123179279LL;
uint64_t x409 = 554914100018752LLU;
int64_t x418 = INT64_MIN;
volatile int64_t t87 = 69674926635816957LL;
uint32_t x422 = UINT32_MAX;
volatile uint64_t t88 = 62230662044006370LLU;
int16_t x426 = 446;
uint16_t x428 = 2U;
int64_t t90 = 18346786260LL;
volatile uint16_t x445 = UINT16_MAX;
uint16_t x457 = 1U;
static int16_t x458 = 1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 264190U;

	t0 = (x1+((x2+x3)^x4));

	if (t0 != 18446744073709287683LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 2074305754U;
	int8_t x8 = -26;
	static int64_t t1 = -44437681LL;

	t1 = (x5+((x6+x7)^x8));

	if (t1 != -2074305857LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	volatile int64_t x10 = 46907986LL;
	uint64_t x11 = 395866730350635LLU;
	static volatile uint64_t t2 = 265166397LLU;

	t2 = (x9+((x10+x11)^x12));

	if (t2 != 18446348210510432892LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x15 = 60U;
	uint32_t x16 = 1238810194U;
	uint32_t t3 = 5U;

	t3 = (x13+((x14+x15)^x16));

	if (t3 != 1238842987U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x23 = 2006;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -400918709;

	t4 = (x21+((x22+x23)^x24));

	if (t4 != -34987) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	static int8_t x26 = INT8_MAX;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = 872940LL;
	int64_t t5 = 221792LL;

	t5 = (x25+((x26+x27)^x28));

	if (t5 != -9223372036853903214LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 1034349LL;
	int8_t x31 = -1;
	int64_t x32 = -22193745397198LL;
	int64_t t6 = -23259301285407377LL;

	t6 = (x29+((x30+x31)^x32));

	if (t6 != -22193744399779LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x35 = 1909U;
	uint8_t x36 = 2U;
	static volatile int64_t t7 = -1476LL;

	t7 = (x33+((x34+x35)^x36));

	if (t7 != 2201871989LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x38 = INT64_MAX;
	uint64_t x39 = 49LLU;
	int32_t x40 = INT32_MIN;
	uint64_t t8 = 2779502708LLU;

	t8 = (x37+((x38+x39)^x40));

	if (t8 != 9223372034707292214LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x47 = 561;
	int64_t x48 = INT64_MIN;
	int64_t t9 = 2194410727LL;

	t9 = (x45+((x46+x47)^x48));

	if (t9 != 9223372032559809073LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = -131690802;
	static int16_t x50 = INT16_MIN;
	uint16_t x51 = 3283U;
	int64_t x52 = INT64_MIN;

	t10 = (x49+((x50+x51)^x52));

	if (t10 != 9223372036723055521LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 0;
	int8_t x58 = 1;
	static int64_t x59 = INT64_MIN;
	uint64_t x60 = 332455471592770812LLU;
	uint64_t t11 = 120554479083716LLU;

	t11 = (x57+((x58+x59)^x60));

	if (t11 != 9555827508447546621LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x61 = -9679111755LL;
	static volatile uint8_t x62 = 3U;
	int32_t x63 = -1819764;
	uint32_t x64 = 2136709128U;
	int64_t t12 = -97379731LL;

	t12 = (x61+((x62+x63)^x64));

	if (t12 != -7519068868LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	int64_t x72 = -1LL;
	int64_t t13 = 28LL;

	t13 = (x69+((x70+x71)^x72));

	if (t13 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x77 = INT32_MIN;
	volatile int16_t x79 = INT16_MAX;
	uint16_t x80 = 16U;
	static int32_t t14 = -52;

	t14 = (x77+((x78+x79)^x80));

	if (t14 != -2147445968) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = -1;
	uint16_t x82 = 239U;
	static uint16_t x83 = 34U;
	uint16_t x84 = UINT16_MAX;

	t15 = (x81+((x82+x83)^x84));

	if (t15 != 65261) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 4U;
	static int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	volatile int64_t t16 = 5790551LL;

	t16 = (x85+((x86+x87)^x88));

	if (t16 != -9223372036854744631LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = 68824U;
	uint64_t x94 = UINT64_MAX;
	int16_t x96 = -25;

	t17 = (x93+((x94+x95)^x96));

	if (t17 != 68849LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 5495U;
	int32_t x98 = -1;
	uint64_t x99 = 887779425642691998LLU;
	static int16_t x100 = INT16_MAX;
	static uint64_t t18 = 43983480LLU;

	t18 = (x97+((x98+x99)^x100));

	if (t18 != 887779425642698713LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 245U;
	int8_t x104 = -1;
	int32_t t19 = 63167;

	t19 = (x101+((x102+x103)^x104));

	if (t19 != 2147450634) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = -1;
	int8_t x106 = 1;
	static uint16_t x108 = 24U;
	int64_t t20 = -45895453LL;

	t20 = (x105+((x106+x107)^x108));

	if (t20 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 5U;
	volatile uint16_t x110 = 113U;
	int32_t x111 = INT32_MIN;
	static volatile uint64_t t21 = 1313849403930508LLU;

	t21 = (x109+((x110+x111)^x112));

	if (t21 != 18446744071562669925LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = -1;
	int8_t x118 = -1;
	volatile uint8_t x119 = UINT8_MAX;
	uint16_t x120 = 2506U;
	int32_t t22 = -28064093;

	t22 = (x117+((x118+x119)^x120));

	if (t22 != 2355) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -44;
	volatile int16_t x123 = INT16_MAX;
	volatile uint64_t x124 = UINT64_MAX;
	static uint64_t t23 = 521528510488LLU;

	t23 = (x121+((x122+x123)^x124));

	if (t23 != 18446744073709518764LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = -1LL;
	int16_t x127 = -1;
	int32_t x128 = -91;
	volatile int64_t t24 = -523929241851LL;

	t24 = (x125+((x126+x127)^x128));

	if (t24 != 346LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MAX;
	int8_t x131 = 1;
	int8_t x132 = -1;
	int32_t t25 = 5648827;

	t25 = (x129+((x130+x131)^x132));

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	int32_t x135 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x133+((x134+x135)^x136));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = -11;
	volatile int32_t t27 = 1643;

	t27 = (x137+((x138+x139)^x140));

	if (t27 != 98292) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x142 = UINT16_MAX;
	int32_t x143 = -4746;
	int64_t x144 = INT64_MIN;
	volatile int64_t t28 = 1222063556059444974LL;

	t28 = (x141+((x142+x143)^x144));

	if (t28 != -9223372036854715147LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int16_t x151 = -1;
	uint32_t x152 = 15U;
	volatile uint32_t t29 = 9U;

	t29 = (x149+((x150+x151)^x152));

	if (t29 != 4294934384U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x153 = 23LL;
	volatile uint64_t x154 = 30578087LLU;
	volatile uint64_t x156 = 287851461LLU;
	uint64_t t30 = 315416975147199101LLU;

	t30 = (x153+((x154+x155)^x156));

	if (t30 != 284874362LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x162 = INT32_MIN;
	int16_t x164 = 52;
	volatile int32_t t31 = -1423088;

	t31 = (x161+((x162+x163)^x164));

	if (t31 != -2147450934) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = INT16_MAX;
	volatile uint8_t x166 = 1U;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 102U;
	int32_t t32 = 16130511;

	t32 = (x165+((x166+x167)^x168));

	if (t32 != 102) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x173 = -1LL;
	int32_t x174 = -1;
	int16_t x175 = 1287;
	static uint8_t x176 = 1U;
	static int64_t t33 = -86329218LL;

	t33 = (x173+((x174+x175)^x176));

	if (t33 != 1286LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x177 = -1;
	uint64_t x178 = 8712327408636471LLU;
	volatile uint16_t x179 = 0U;
	int16_t x180 = INT16_MIN;

	t34 = (x177+((x178+x179)^x180));

	if (t34 != 18438031746300924470LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x181 = INT32_MAX;
	int8_t x182 = INT8_MIN;
	uint32_t x184 = 2850U;
	volatile uint32_t t35 = 5U;

	t35 = (x181+((x182+x183)^x184));

	if (t35 != 2147480736U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x185 = 153152391195LL;
	volatile int64_t x186 = -319288LL;
	int32_t x187 = INT32_MIN;
	int64_t t36 = 1380273850279715777LL;

	t36 = (x185+((x186+x187)^x188));

	if (t36 != 155300194130LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x194 = -52;
	int8_t x195 = -1;
	uint16_t x196 = 15406U;
	volatile int64_t t37 = 9271LL;

	t37 = (x193+((x194+x195)^x196));

	if (t37 != 9223372036854760420LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x199 = -1;
	int16_t x200 = INT16_MAX;
	volatile uint32_t t38 = 4341965U;

	t38 = (x197+((x198+x199)^x200));

	if (t38 != 4294902002U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = -1;
	volatile int64_t x202 = 70317268687258LL;
	static int32_t x204 = 41;
	volatile int64_t t39 = -130947LL;

	t39 = (x201+((x202+x203)^x204));

	if (t39 != 70317268687154LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t40 = 310954LLU;

	t40 = (x205+((x206+x207)^x208));

	if (t40 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x209 = -1;
	static uint16_t x211 = 16199U;
	int32_t x212 = INT32_MIN;
	int32_t t41 = -947;

	t41 = (x209+((x210+x211)^x212));

	if (t41 != 16198) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = 33162713;
	int64_t x214 = -1225361411LL;
	int8_t x215 = INT8_MIN;
	static int64_t x216 = 3790952193149LL;
	int64_t t42 = 14884246398582LL;

	t42 = (x213+((x214+x215)^x216));

	if (t42 != -3792143142695LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x217 = INT16_MAX;
	uint16_t x218 = 7670U;
	volatile int8_t x220 = INT8_MAX;
	int32_t t43 = -220473;

	t43 = (x217+((x218+x219)^x220));

	if (t43 != 40338) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 270452271318LLU;
	int64_t x222 = INT64_MIN;
	int16_t x224 = -15465;
	volatile uint64_t t44 = 2936725845074532863LLU;

	t44 = (x221+((x222+x223)^x224));

	if (t44 != 9223372307307031667LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 1769339582U;
	volatile uint64_t t45 = 215449LLU;

	t45 = (x225+((x226+x227)^x228));

	if (t45 != 18446744071940244793LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MAX;
	static int32_t x231 = -1;
	volatile int64_t t46 = -496376251817LL;

	t46 = (x229+((x230+x231)^x232));

	if (t46 != 32766LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MAX;
	uint16_t x234 = 14U;
	static volatile uint32_t x235 = 6U;
	static uint8_t x236 = UINT8_MAX;
	static uint32_t t47 = 946U;

	t47 = (x233+((x234+x235)^x236));

	if (t47 != 2147483882U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MIN;
	static int8_t x238 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	volatile int16_t x240 = INT16_MAX;
	volatile uint64_t t48 = 100159430084LLU;

	t48 = (x237+((x238+x239)^x240));

	if (t48 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x241 = 3U;
	int8_t x242 = -10;
	uint32_t x243 = 11692574U;
	static uint8_t x244 = 107U;
	volatile uint32_t t49 = 6U;

	t49 = (x241+((x242+x243)^x244));

	if (t49 != 11692674U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x246 = UINT16_MAX;
	static int8_t x247 = -51;
	static volatile int64_t t50 = 3640861800LL;

	t50 = (x245+((x246+x247)^x248));

	if (t50 != -65482LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = 1U;
	int64_t x251 = -69959LL;
	int16_t x252 = 0;
	int64_t t51 = -31930LL;

	t51 = (x249+((x250+x251)^x252));

	if (t51 != -2147553606LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x255 = 3550096486669LLU;
	volatile uint8_t x256 = 123U;
	volatile uint64_t t52 = 11462591205922LLU;

	t52 = (x253+((x254+x255)^x256));

	if (t52 != 3547949003162LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x257 = -1LL;
	static uint16_t x258 = 365U;
	int8_t x259 = INT8_MAX;
	volatile int8_t x260 = INT8_MIN;

	t53 = (x257+((x258+x259)^x260));

	if (t53 != -405LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MIN;

	t54 = (x261+((x262+x263)^x264));

	if (t54 != 4023295LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 14850928U;
	int64_t x267 = -7LL;
	int8_t x268 = -2;
	volatile int64_t t55 = 121318LL;

	t55 = (x265+((x266+x267)^x268));

	if (t55 != -14785386LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = UINT8_MAX;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t56 = 29241992;

	t56 = (x269+((x270+x271)^x272));

	if (t56 != -32278) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x273 = INT64_MAX;
	int16_t x274 = -15;
	static uint64_t x276 = 5600920LLU;
	uint64_t t57 = 12069LLU;

	t57 = (x273+((x274+x275)^x276));

	if (t57 != 9223372036860348775LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	uint8_t x279 = 55U;
	uint32_t x280 = 9805602U;
	uint32_t t58 = 98516182U;

	t58 = (x277+((x278+x279)^x280));

	if (t58 != 9772820U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = -1;
	volatile uint64_t x282 = 280760594293148LLU;
	int64_t x283 = 945LL;
	int8_t x284 = INT8_MAX;
	uint64_t t59 = 199125747290960LLU;

	t59 = (x281+((x282+x283)^x284));

	if (t59 != 280760594294065LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = INT16_MAX;
	volatile uint64_t t60 = 11LLU;

	t60 = (x289+((x290+x291)^x292));

	if (t60 != 18446744071562943283LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = -1;
	uint64_t t61 = 73510040968LLU;

	t61 = (x293+((x294+x295)^x296));

	if (t61 != 39510802967LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x301 = 0U;
	int32_t x303 = -5;
	static int8_t x304 = INT8_MAX;
	int32_t t62 = 2901839;

	t62 = (x301+((x302+x303)^x304));

	if (t62 != -123) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 33997744206590LLU;
	uint16_t x306 = 26U;
	int8_t x307 = INT8_MAX;
	volatile uint64_t t63 = 491380786LLU;

	t63 = (x305+((x306+x307)^x308));

	if (t63 != 33997744206692LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = 3379361369435LL;
	static int32_t x310 = 6616;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	volatile int64_t t64 = 1607443850870779532LL;

	t64 = (x309+((x310+x311)^x312));

	if (t64 != 3383656310578LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = INT64_MIN;
	static volatile int8_t x314 = INT8_MAX;
	static uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 1U;
	int64_t t65 = 1258024763511250617LL;

	t65 = (x313+((x314+x315)^x316));

	if (t65 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x321 = 11LLU;
	int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -1LL;
	uint64_t t66 = 33667397837LLU;

	t66 = (x321+((x322+x323)^x324));

	if (t66 != 32779LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = -1;
	int32_t x326 = 726401;
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = -15973106983968LL;
	int64_t t67 = 180145705353983446LL;

	t67 = (x325+((x326+x327)^x328));

	if (t67 != 15975007833696LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = 12;
	uint64_t x331 = 8347833602197296LLU;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t68 = 36LLU;

	t68 = (x329+((x330+x331)^x332));

	if (t68 != 9215024203252578492LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	volatile uint16_t x335 = 128U;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t69 = 26U;

	t69 = (x333+((x334+x335)^x336));

	if (t69 != 3266251U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x337 = UINT8_MAX;
	static int8_t x339 = -1;
	int16_t x340 = 1928;
	int32_t t70 = -3699;

	t70 = (x337+((x338+x339)^x340));

	if (t70 != -1073835) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x342 = 56LLU;
	static int32_t x343 = -1;
	int32_t x344 = -12;
	uint64_t t71 = 65282941719176962LLU;

	t71 = (x341+((x342+x343)^x344));

	if (t71 != 51456166LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x345 = -120;
	uint32_t x346 = UINT32_MAX;
	volatile uint64_t x347 = UINT64_MAX;
	static int16_t x348 = -59;
	uint64_t t72 = 25LLU;

	t72 = (x345+((x346+x347)^x348));

	if (t72 != 18446744069414584259LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 898U;
	int64_t x351 = -133912702045LL;
	int16_t x352 = -1;

	t73 = (x349+((x350+x351)^x352));

	if (t73 != 133912701018LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x355 = 2768912278438LLU;
	uint64_t x356 = 57647LLU;

	t74 = (x353+((x354+x355)^x356));

	if (t74 != 2768912293810LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x362 = 5669U;
	uint64_t x363 = 4317869656429610794LLU;
	int64_t x364 = INT64_MIN;
	static volatile uint64_t t75 = 10LLU;

	t75 = (x361+((x362+x363)^x364));

	if (t75 != 13541241693284392335LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x365 = -1;
	static volatile int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	int32_t t76 = 2;

	t76 = (x365+((x366+x367)^x368));

	if (t76 != 65531) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MAX;
	uint8_t x371 = 28U;
	volatile int64_t x372 = INT64_MIN;
	int64_t t77 = 82056LL;

	t77 = (x369+((x370+x371)^x372));

	if (t77 != 155LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x374 = 417136488;
	int64_t x375 = INT64_MIN;
	volatile int8_t x376 = 0;
	volatile int64_t t78 = 6116497680237LL;

	t78 = (x373+((x374+x375)^x376));

	if (t78 != -9223372036437638776LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = 33715;
	int8_t x378 = INT8_MAX;
	static int8_t x379 = 15;
	int16_t x380 = INT16_MAX;
	int32_t t79 = 30045;

	t79 = (x377+((x378+x379)^x380));

	if (t79 != 66340) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x386 = -1257193867733955LL;
	volatile int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;

	t80 = (x385+((x386+x387)^x388));

	if (t80 != 1257196015217602LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x393 = 60022529021LLU;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	volatile uint64_t t81 = 626LLU;

	t81 = (x393+((x394+x395)^x396));

	if (t81 != 60022527381LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x397 = 7;
	static uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t82 = 29337915LLU;

	t82 = (x397+((x398+x399)^x400));

	if (t82 != 5LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = 125U;
	volatile int8_t x402 = INT8_MIN;
	int16_t x403 = 12649;
	volatile uint8_t x404 = 102U;

	t83 = (x401+((x402+x403)^x404));

	if (t83 != 12556) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x406 = INT64_MAX;
	int64_t x408 = -1LL;
	volatile int64_t t84 = 207154919356030475LL;

	t84 = (x405+((x406+x407)^x408));

	if (t84 != -9223371968731596486LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x410 = INT16_MIN;
	static uint8_t x411 = 16U;
	volatile uint64_t x412 = 120659624826508LLU;
	uint64_t t85 = 3753942LLU;

	t85 = (x409+((x410+x411)^x412));

	if (t85 != 434254475171036LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = 7518LL;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = 621U;
	int64_t t86 = 34096LL;

	t86 = (x413+((x414+x415)^x416));

	if (t86 != 8048LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x417 = INT32_MAX;
	uint32_t x419 = 166920U;
	static int8_t x420 = 30;

	t87 = (x417+((x418+x419)^x420));

	if (t87 != -9223372034707125227LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x421 = 119U;
	volatile uint64_t x423 = 39LLU;
	uint16_t x424 = 60U;

	t88 = (x421+((x422+x423)^x424));

	if (t88 != 4294967441LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x425 = -1;
	static int32_t x427 = INT32_MIN;
	int32_t t89 = -1804165;

	t89 = (x425+((x426+x427)^x428));

	if (t89 != -2147483205) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = -11237601646736LL;
	volatile int16_t x430 = -1;
	int16_t x431 = 3919;
	static volatile int8_t x432 = INT8_MIN;

	t90 = (x429+((x430+x431)^x432));

	if (t90 != -11237601650626LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x437 = 14U;
	uint8_t x438 = 8U;
	static int64_t x439 = 1224132088630973661LL;
	int16_t x440 = -1;
	volatile int64_t t91 = 1154884445056433976LL;

	t91 = (x437+((x438+x439)^x440));

	if (t91 != -1224132088630973656LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 237795U;
	volatile int32_t x443 = INT32_MIN;
	uint8_t x444 = 21U;
	uint32_t t92 = 0U;

	t92 = (x441+((x442+x443)^x444));

	if (t92 != 2147688694U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x446 = 8130900096LLU;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	uint64_t t93 = 77LLU;

	t93 = (x445+((x446+x447)^x448));

	if (t93 != 8130940926LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x449 = 75764433U;
	static int16_t x450 = 315;
	volatile int16_t x451 = -2;
	static int16_t x452 = -10;
	volatile uint32_t t94 = 11521661U;

	t94 = (x449+((x450+x451)^x452));

	if (t94 != 75764128U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x453 = UINT32_MAX;
	int32_t x454 = -1;
	uint16_t x455 = 207U;
	static int32_t x456 = INT32_MIN;
	uint32_t t95 = 1894159858U;

	t95 = (x453+((x454+x455)^x456));

	if (t95 != 2147483853U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x459 = INT32_MIN;
	int32_t x460 = -803;
	int32_t t96 = -682284;

	t96 = (x457+((x458+x459)^x460));

	if (t96 != 2147482845) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x461 = INT32_MIN;
	uint8_t x462 = 1U;
	uint32_t x463 = 229U;
	int32_t x464 = -1;
	volatile uint32_t t97 = 31U;

	t97 = (x461+((x462+x463)^x464));

	if (t97 != 2147483417U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = 4;
	int64_t x466 = INT64_MAX;
	int8_t x467 = -1;
	uint64_t x468 = 11804313876312255LLU;
	static volatile uint64_t t98 = 32955536LLU;

	t98 = (x465+((x466+x467)^x468));

	if (t98 != 9211567722978463557LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = INT32_MAX;
	int8_t x474 = 0;
	volatile int32_t x475 = 321109771;
	uint64_t x476 = 1586LLU;
	volatile uint64_t t99 = 6897312699811269LLU;

	t99 = (x473+((x474+x475)^x476));

	if (t99 != 2468591928LLU) { NG(); } else { ; }
	
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

