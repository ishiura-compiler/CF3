#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x11 = INT32_MAX;
int32_t x13 = 154249153;
int16_t x14 = INT16_MIN;
volatile int8_t x16 = INT8_MIN;
int32_t t1 = 167714;
int32_t x21 = INT32_MAX;
static int16_t x29 = -374;
volatile int64_t x30 = INT64_MAX;
volatile int16_t x46 = 2463;
int8_t x55 = -1;
static volatile uint64_t t10 = 795LLU;
int64_t x65 = -1LL;
static int8_t x66 = -1;
uint32_t x69 = UINT32_MAX;
uint8_t x75 = UINT8_MAX;
int32_t t15 = -23031517;
int32_t t17 = -723731926;
static volatile uint16_t x101 = UINT16_MAX;
uint8_t x102 = 1U;
int8_t x104 = INT8_MAX;
int16_t x112 = INT16_MAX;
int16_t x113 = 763;
volatile int8_t x116 = INT8_MIN;
uint8_t x118 = 9U;
int64_t x119 = 31LL;
int32_t t24 = -259504;
static int8_t x133 = -1;
static uint8_t x146 = 7U;
static uint64_t x148 = 2289612216687287015LLU;
uint64_t x155 = 13190164LLU;
int64_t x156 = 47318489866832044LL;
volatile int8_t x162 = INT8_MAX;
uint16_t x165 = 3497U;
int64_t x166 = INT64_MIN;
int32_t x172 = -1;
int32_t x176 = INT32_MAX;
volatile int32_t x185 = INT32_MIN;
volatile int16_t x201 = -1;
int8_t x202 = -5;
volatile uint16_t x212 = UINT16_MAX;
int64_t x226 = -13051484782585LL;
static int16_t x229 = -6;
int32_t x233 = INT32_MAX;
int64_t x234 = INT64_MIN;
static int64_t t42 = 1LL;
int32_t x240 = INT32_MIN;
int32_t x246 = -107543242;
volatile int16_t x256 = INT16_MIN;
volatile uint8_t x262 = UINT8_MAX;
int64_t x265 = INT64_MIN;
volatile uint64_t t50 = 25310628LLU;
int16_t x278 = INT16_MIN;
volatile int16_t x289 = -1;
int32_t x292 = INT32_MAX;
uint16_t x297 = UINT16_MAX;
volatile int64_t t56 = -570582436495877503LL;
static volatile uint8_t x320 = 6U;
int64_t x323 = -102803113642880LL;
uint8_t x332 = 39U;
static int64_t t63 = -590966258LL;
int32_t x335 = INT32_MIN;
volatile int64_t t64 = 26124164422097691LL;
int64_t x347 = INT64_MIN;
volatile uint8_t x349 = UINT8_MAX;
static int16_t x350 = INT16_MIN;
int32_t x352 = 3286545;
int32_t t67 = 2138;
int64_t t69 = 7LL;
static uint64_t x373 = UINT64_MAX;
volatile int64_t t72 = 125305035500LL;
volatile uint8_t x410 = 9U;
static int64_t x416 = INT64_MAX;
static volatile uint32_t x418 = UINT32_MAX;
int16_t x423 = 0;
static int16_t x435 = -1;
uint32_t x438 = 0U;
volatile uint32_t t80 = 482019507U;
static uint16_t x445 = 9555U;
int16_t x450 = -44;
int32_t x453 = 818135;
uint64_t x457 = 378143979089391951LLU;
int16_t x460 = -1;
uint8_t x464 = UINT8_MAX;
volatile uint64_t t85 = 31668141LLU;
static int64_t x472 = 268315107129LL;
static uint32_t x477 = 60522U;
int64_t x485 = -936LL;
int16_t x486 = 7;
int64_t x493 = INT64_MIN;
int8_t x498 = 35;
uint64_t t92 = 1208705351661013888LLU;
int64_t x501 = -1LL;
int8_t x503 = -1;
uint8_t x510 = 0U;
int16_t x511 = -1;
int64_t x512 = -10LL;
volatile int64_t x514 = INT64_MIN;
volatile uint64_t t96 = 1286LLU;
volatile uint8_t x525 = UINT8_MAX;
volatile int8_t x526 = INT8_MIN;
int16_t x528 = INT16_MIN;
static int16_t x536 = INT16_MIN;


void f0(void) {
	uint16_t x9 = 87U;
	int16_t x10 = INT16_MIN;
	int64_t x12 = -1LL;
	int64_t t0 = -320935246353600LL;

	t0 = ((x9+x10)%(x11+x12));

	if (t0 != -32681LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x15 = INT8_MIN;

	t1 = ((x13+x14)%(x15+x16));

	if (t1 != 193) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = 947712201LLU;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = -1796346012857867072LL;
	uint64_t x20 = 984246104208LLU;
	uint64_t t2 = 4249LLU;

	t2 = ((x17+x18)%(x19+x20));

	if (t2 != 5242679496LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = -3;
	int16_t x23 = -56;
	int64_t x24 = -1LL;
	volatile int64_t t3 = 2634551877LL;

	t3 = ((x21+x22)%(x23+x24));

	if (t3 != 37LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 56368852900618338LLU;
	uint64_t x26 = 40227286912585980LLU;
	volatile int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile uint64_t t4 = 6LLU;

	t4 = ((x25+x26)%(x27+x28));

	if (t4 != 124LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = INT16_MAX;
	int64_t x32 = -1LL;
	volatile int64_t t5 = 927645LL;

	t5 = ((x29+x30)%(x31+x32));

	if (t5 != 32519LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x34 = 234365415LLU;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MAX;
	uint64_t t6 = 6LLU;

	t6 = ((x33+x34)%(x35+x36));

	if (t6 != 23231LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 1226U;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t7 = 159LLU;

	t7 = ((x37+x38)%(x39+x40));

	if (t7 != 139LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int32_t x42 = 76559;
	int16_t x43 = 0;
	static uint32_t x44 = 236218U;
	uint32_t t8 = 14675295U;

	t8 = ((x41+x42)%(x43+x44));

	if (t8 != 76558U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x47 = 13417484;
	uint64_t x48 = 12936912362131490LLU;
	uint64_t t9 = 43564154603725132LLU;

	t9 = ((x45+x46)%(x47+x48));

	if (t9 != 2718LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x56 = -6;

	t10 = ((x53+x54)%(x55+x56));

	if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = 71931;
	uint8_t x58 = 0U;
	int32_t x59 = INT32_MAX;
	uint32_t x60 = 472U;
	static uint32_t t11 = 2390949U;

	t11 = ((x57+x58)%(x59+x60));

	if (t11 != 71931U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = 1446576087196646LL;
	int32_t x62 = INT32_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int64_t x64 = -759LL;
	int64_t t12 = -333LL;

	t12 = ((x61+x62)%(x63+x64));

	if (t12 != 9774LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x67 = 1;
	uint32_t x68 = 20464U;
	int64_t t13 = 7832663644385LL;

	t13 = ((x65+x66)%(x67+x68));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x70 = INT32_MIN;
	uint64_t x71 = 19800286445903360LLU;
	uint32_t x72 = UINT32_MAX;
	uint64_t t14 = 8080435LLU;

	t14 = ((x69+x70)%(x71+x72));

	if (t14 != 2147483647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -122634283;
	static uint16_t x74 = 14U;
	uint16_t x76 = UINT16_MAX;

	t15 = ((x73+x74)%(x75+x76));

	if (t15 != -1709) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	volatile uint32_t x83 = UINT32_MAX;
	volatile int32_t x84 = INT32_MIN;
	uint32_t t16 = 1003U;

	t16 = ((x81+x82)%(x83+x84));

	if (t16 != 126U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -15;
	static uint8_t x86 = 0U;
	static int16_t x87 = INT16_MIN;
	volatile int8_t x88 = 1;

	t17 = ((x85+x86)%(x87+x88));

	if (t17 != -15) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	static uint64_t x94 = 42940LLU;
	volatile int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t18 = 29193080LLU;

	t18 = ((x93+x94)%(x95+x96));

	if (t18 != 4295010235LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x103 = INT8_MAX;
	volatile int32_t t19 = -655317;

	t19 = ((x101+x102)%(x103+x104));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	volatile uint16_t x106 = 384U;
	uint64_t x107 = 1487084857280900LLU;
	int64_t x108 = -1LL;
	uint64_t t20 = 1151129169LLU;

	t20 = ((x105+x106)%(x107+x108));

	if (t20 != 639LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	int8_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int32_t t21 = 463861275;

	t21 = ((x109+x110)%(x111+x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x114 = -1;
	static int16_t x115 = -80;
	static int32_t t22 = 78810495;

	t22 = ((x113+x114)%(x115+x116));

	if (t22 != 138) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -45;
	static int32_t x120 = INT32_MIN;
	volatile int64_t t23 = 393714LL;

	t23 = ((x117+x118)%(x119+x120));

	if (t23 != -36LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = UINT8_MAX;
	static uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;

	t24 = ((x129+x130)%(x131+x132));

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x134 = 1995U;
	uint8_t x135 = UINT8_MAX;
	volatile int8_t x136 = INT8_MAX;
	static volatile int32_t t25 = -8273;

	t25 = ((x133+x134)%(x135+x136));

	if (t25 != 84) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x145 = 1;
	static int16_t x147 = INT16_MIN;
	volatile uint64_t t26 = 10904LLU;

	t26 = ((x145+x146)%(x147+x148));

	if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 40U;
	volatile int16_t x150 = -1;
	int8_t x151 = -1;
	uint64_t x152 = 168758LLU;
	volatile uint64_t t27 = 16991425953193LLU;

	t27 = ((x149+x150)%(x151+x152));

	if (t27 != 39LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x153 = 579820765254LL;
	static int32_t x154 = INT32_MIN;
	uint64_t t28 = 187791LLU;

	t28 = ((x153+x154)%(x155+x156));

	if (t28 != 577673281606LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x163 = 55;
	int16_t x164 = 9347;
	int32_t t29 = -1008887;

	t29 = ((x161+x162)%(x163+x164));

	if (t29 != 9250) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x167 = -1LL;
	uint64_t x168 = 2490182465LLU;
	uint64_t t30 = 31854265045884952LLU;

	t30 = ((x165+x166)%(x167+x168));

	if (t30 != 129015465LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x169 = 181747410102352326LLU;
	uint32_t x170 = 3000U;
	int32_t x171 = -2885711;
	uint64_t t31 = 176010146078654LLU;

	t31 = ((x169+x170)%(x171+x172));

	if (t31 != 181747410102355326LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 192993280U;
	uint8_t x174 = 15U;
	int8_t x175 = INT8_MIN;
	uint32_t t32 = 23773248U;

	t32 = ((x173+x174)%(x175+x176));

	if (t32 != 192993295U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	uint32_t x180 = 1477656620U;
	uint32_t t33 = 24180281U;

	t33 = ((x177+x178)%(x179+x180));

	if (t33 != 1339621545U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1653LL;
	int16_t x182 = -1;
	int16_t x183 = 0;
	uint32_t x184 = 16152U;
	static volatile int64_t t34 = -33LL;

	t34 = ((x181+x182)%(x183+x184));

	if (t34 != -1654LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x186 = -1LL;
	int32_t x187 = 452402111;
	int64_t x188 = INT64_MIN;
	int64_t t35 = 50775LL;

	t35 = ((x185+x186)%(x187+x188));

	if (t35 != -2147483649LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = -1;
	static int64_t x191 = INT64_MIN;
	static uint8_t x192 = 6U;
	int64_t t36 = 70845930167202495LL;

	t36 = ((x189+x190)%(x191+x192));

	if (t36 != -32769LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	static int32_t x199 = INT32_MIN;
	volatile int16_t x200 = INT16_MAX;
	static int32_t t37 = 1192;

	t37 = ((x197+x198)%(x199+x200));

	if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x203 = INT64_MIN;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t38 = 245148239805361LLU;

	t38 = ((x201+x202)%(x203+x204));

	if (t38 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x209 = 242746834034040LLU;
	int32_t x210 = -30830;
	volatile uint16_t x211 = 930U;
	uint64_t t39 = 837552405LLU;

	t39 = ((x209+x210)%(x211+x212));

	if (t39 != 1090LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x225 = 7573278697336436LLU;
	uint32_t x227 = 98779U;
	uint16_t x228 = 15U;
	uint64_t t40 = 44974LLU;

	t40 = ((x225+x226)%(x227+x228));

	if (t40 != 93983LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x230 = 1U;
	static int8_t x231 = 0;
	uint32_t x232 = 109745426U;
	static uint32_t t41 = 650480454U;

	t41 = ((x229+x230)%(x231+x232));

	if (t41 != 14895677U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x235 = INT8_MIN;
	int64_t x236 = 4151443LL;

	t42 = ((x233+x234)%(x235+x236));

	if (t42 != -2407286LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = -4074;
	volatile int8_t x238 = -1;
	int8_t x239 = 3;
	volatile int32_t t43 = -25907012;

	t43 = ((x237+x238)%(x239+x240));

	if (t43 != -4075) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x241 = 2U;
	uint32_t x242 = 12815U;
	int8_t x243 = INT8_MIN;
	static uint8_t x244 = 8U;
	static volatile uint32_t t44 = 27U;

	t44 = ((x241+x242)%(x243+x244));

	if (t44 != 12817U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	static int8_t x247 = 3;
	static uint64_t x248 = 771992042LLU;
	uint64_t t45 = 45LLU;

	t45 = ((x245+x246)%(x247+x248));

	if (t45 != 327463828LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x249 = 11U;
	static volatile uint16_t x250 = 5U;
	int16_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	int32_t t46 = -87689253;

	t46 = ((x249+x250)%(x251+x252));

	if (t46 != 16) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x253 = -10916326422478LL;
	uint64_t x254 = 7160967865072749118LLU;
	volatile int64_t x255 = -1LL;
	uint64_t t47 = 0LLU;

	t47 = ((x253+x254)%(x255+x256));

	if (t47 != 7160956948746326640LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x257 = INT16_MIN;
	uint64_t x258 = 41093LLU;
	uint32_t x259 = UINT32_MAX;
	volatile int8_t x260 = INT8_MAX;
	static volatile uint64_t t48 = 4062936408210LLU;

	t48 = ((x257+x258)%(x259+x260));

	if (t48 != 9LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x261 = -23890302;
	volatile uint8_t x263 = UINT8_MAX;
	volatile uint64_t x264 = UINT64_MAX;
	volatile uint64_t t49 = 827025493171LLU;

	t49 = ((x261+x262)%(x263+x264));

	if (t49 != 179LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x266 = 3U;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = 260324LLU;

	t50 = ((x265+x266)%(x267+x268));

	if (t50 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	static volatile uint8_t x280 = 9U;
	volatile uint32_t t51 = 4U;

	t51 = ((x277+x278)%(x279+x280));

	if (t51 != 2147450870U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	static uint64_t x287 = 147989875424917LLU;
	int64_t x288 = -1LL;
	uint64_t t52 = 35797709248LLU;

	t52 = ((x285+x286)%(x287+x288));

	if (t52 != 102081744621919LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x290 = 920U;
	uint64_t x291 = 57334183LLU;
	static uint64_t t53 = 8493LLU;

	t53 = ((x289+x290)%(x291+x292));

	if (t53 != 919LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 1161U;
	int16_t x295 = -1047;
	static uint32_t x296 = 239U;
	volatile uint32_t t54 = 29245696U;

	t54 = ((x293+x294)%(x295+x296));

	if (t54 != 66696U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x298 = 20563U;
	int8_t x299 = INT8_MAX;
	int8_t x300 = -1;
	static volatile uint32_t t55 = 13046U;

	t55 = ((x297+x298)%(x299+x300));

	if (t55 != 40U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = 11416U;
	int16_t x302 = -1;
	int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MIN;

	t56 = ((x301+x302)%(x303+x304));

	if (t56 != 11415LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = -509;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 8006418765377LLU;
	int8_t x308 = INT8_MIN;
	static uint64_t t57 = 2LLU;

	t57 = ((x305+x306)%(x307+x308));

	if (t57 != 3277088446728LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 66689589LLU;
	int32_t x310 = 1735;
	uint8_t x311 = 64U;
	uint16_t x312 = 1U;
	volatile uint64_t t58 = 24LLU;

	t58 = ((x309+x310)%(x311+x312));

	if (t58 != 24LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 2067120744LLU;
	volatile int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = 22U;
	static uint64_t t59 = 1809241736571LLU;

	t59 = ((x313+x314)%(x315+x316));

	if (t59 != 2067120871LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x317 = 1U;
	int16_t x318 = 106;
	int8_t x319 = -1;
	int32_t t60 = -4962387;

	t60 = ((x317+x318)%(x319+x320));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x321 = 11U;
	uint16_t x322 = UINT16_MAX;
	uint8_t x324 = 1U;
	int64_t t61 = 66298354267606LL;

	t61 = ((x321+x322)%(x323+x324));

	if (t61 != 65546LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x325 = 27U;
	uint64_t x326 = UINT64_MAX;
	static int64_t x327 = -292872059648204LL;
	int32_t x328 = -1;
	uint64_t t62 = 23930451520LLU;

	t62 = ((x325+x326)%(x327+x328));

	if (t62 != 26LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = 9995766293LL;
	int32_t x330 = INT32_MAX;
	volatile int16_t x331 = INT16_MAX;

	t63 = ((x329+x330)%(x331+x332));

	if (t63 != 10622LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x333 = 117855U;
	static volatile uint32_t x334 = 195434853U;
	volatile int64_t x336 = INT64_MAX;

	t64 = ((x333+x334)%(x335+x336));

	if (t64 != 195552708LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = 102U;
	uint32_t x339 = UINT32_MAX;
	static int8_t x340 = -2;
	static volatile int64_t t65 = 13901763068672315LL;

	t65 = ((x337+x338)%(x339+x340));

	if (t65 != -2147483549LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x345 = INT8_MAX;
	uint16_t x346 = UINT16_MAX;
	int64_t x348 = 4226858201716LL;
	static volatile int64_t t66 = -688667LL;

	t66 = ((x345+x346)%(x347+x348));

	if (t66 != 65662LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x351 = 2411U;

	t67 = ((x349+x350)%(x351+x352));

	if (t67 != -32513) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 970451772487237LLU;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 495U;
	static uint64_t t68 = 109787171LLU;

	t68 = ((x357+x358)%(x359+x360));

	if (t68 != 23743LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x365 = -1LL;
	volatile int16_t x366 = 2880;
	volatile int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MIN;

	t69 = ((x365+x366)%(x367+x368));

	if (t69 != 2879LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = -1;
	int64_t x370 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -1;
	static int64_t t70 = 3544778627999LL;

	t70 = ((x369+x370)%(x371+x372));

	if (t70 != 6LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x374 = INT64_MIN;
	volatile int64_t x375 = 5615274LL;
	uint8_t x376 = UINT8_MAX;
	uint64_t t71 = 1607996163450973LLU;

	t71 = ((x373+x374)%(x375+x376));

	if (t71 != 1026415LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = -718381039885LL;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -1;

	t72 = ((x377+x378)%(x379+x380));

	if (t72 != -58LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x385 = 1528U;
	uint32_t x386 = 13U;
	static uint64_t x387 = 7461337LLU;
	uint64_t x388 = 75800LLU;
	static volatile uint64_t t73 = 621588415346052131LLU;

	t73 = ((x385+x386)%(x387+x388));

	if (t73 != 1541LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x405 = UINT8_MAX;
	static int64_t x406 = INT64_MIN;
	int16_t x407 = 11305;
	volatile int8_t x408 = -1;
	int64_t t74 = -858780376942929LL;

	t74 = ((x405+x406)%(x407+x408));

	if (t74 != -9329LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x409 = UINT64_MAX;
	uint32_t x411 = 168U;
	volatile uint16_t x412 = 3U;
	uint64_t t75 = 49931156151275579LLU;

	t75 = ((x409+x410)%(x411+x412));

	if (t75 != 8LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	uint64_t x415 = 3LLU;
	uint64_t t76 = 12387LLU;

	t76 = ((x413+x414)%(x415+x416));

	if (t76 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x417 = -1LL;
	int32_t x419 = INT32_MIN;
	int32_t x420 = 101;
	volatile int64_t t77 = -28178108860294LL;

	t77 = ((x417+x418)%(x419+x420));

	if (t77 != 200LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x421 = 42U;
	int16_t x422 = INT16_MIN;
	volatile int8_t x424 = INT8_MIN;
	int32_t t78 = 1;

	t78 = ((x421+x422)%(x423+x424));

	if (t78 != -86) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -1;
	int8_t x434 = 1;
	uint8_t x436 = UINT8_MAX;
	int32_t t79 = 2641;

	t79 = ((x433+x434)%(x435+x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x437 = UINT32_MAX;
	int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;

	t80 = ((x437+x438)%(x439+x440));

	if (t80 != 65535U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x446 = 277626U;
	int32_t x447 = -360887;
	volatile int8_t x448 = -1;
	uint32_t t81 = 1082U;

	t81 = ((x445+x446)%(x447+x448));

	if (t81 != 287181U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x449 = -32;
	int16_t x451 = -476;
	int64_t x452 = -4108542LL;
	int64_t t82 = 122LL;

	t82 = ((x449+x450)%(x451+x452));

	if (t82 != -76LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x454 = 89U;
	uint8_t x455 = UINT8_MAX;
	static uint64_t x456 = 2LLU;
	static volatile uint64_t t83 = 8058493591LLU;

	t83 = ((x453+x454)%(x455+x456));

	if (t83 != 193LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x458 = INT16_MIN;
	static int16_t x459 = INT16_MAX;
	volatile uint64_t t84 = 1LLU;

	t84 = ((x457+x458)%(x459+x460));

	if (t84 != 28315LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x461 = 14LLU;
	uint64_t x462 = UINT64_MAX;
	uint8_t x463 = UINT8_MAX;

	t85 = ((x461+x462)%(x463+x464));

	if (t85 != 13LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x465 = UINT64_MAX;
	int32_t x466 = -1;
	int16_t x467 = 1570;
	uint64_t x468 = UINT64_MAX;
	uint64_t t86 = 52331024519514599LLU;

	t86 = ((x465+x466)%(x467+x468));

	if (t86 != 662LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x469 = UINT64_MAX;
	uint32_t x470 = 34016900U;
	volatile int8_t x471 = -1;
	static uint64_t t87 = 31119001672307716LLU;

	t87 = ((x469+x470)%(x471+x472));

	if (t87 != 34016899LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = 6030U;
	int16_t x474 = INT16_MAX;
	int8_t x475 = INT8_MAX;
	int32_t x476 = -1;
	int32_t t88 = 31;

	t88 = ((x473+x474)%(x475+x476));

	if (t88 != 115) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x478 = -1;
	int64_t x479 = 33837766LL;
	static volatile int8_t x480 = -37;
	volatile int64_t t89 = -2149491514737676LL;

	t89 = ((x477+x478)%(x479+x480));

	if (t89 != 60521LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x487 = INT32_MIN;
	int32_t x488 = 21149;
	static int64_t t90 = 99580621460274284LL;

	t90 = ((x485+x486)%(x487+x488));

	if (t90 != -929LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x494 = 120U;
	static int16_t x495 = INT16_MIN;
	static int16_t x496 = INT16_MIN;
	int64_t t91 = 8166262LL;

	t91 = ((x493+x494)%(x495+x496));

	if (t91 != -65416LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x497 = INT32_MIN;
	static int8_t x499 = INT8_MIN;
	uint64_t x500 = UINT64_MAX;

	t92 = ((x497+x498)%(x499+x500));

	if (t92 != 18446744071562068003LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x502 = -1;
	uint16_t x504 = 6695U;
	int64_t t93 = -834688032LL;

	t93 = ((x501+x502)%(x503+x504));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x505 = INT64_MIN;
	static uint64_t x506 = 1LLU;
	static int32_t x507 = -257919139;
	static volatile int8_t x508 = INT8_MIN;
	static uint64_t t94 = 3401173LLU;

	t94 = ((x505+x506)%(x507+x508));

	if (t94 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x509 = 76017717U;
	int64_t t95 = 3502895445515410146LL;

	t95 = ((x509+x510)%(x511+x512));

	if (t95 != 6LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x513 = 569U;
	volatile uint64_t x515 = 512599514262LLU;
	static int8_t x516 = INT8_MIN;

	t96 = ((x513+x514)%(x515+x516));

	if (t96 != 333801564291LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x517 = 158U;
	uint8_t x518 = UINT8_MAX;
	static int32_t x519 = INT32_MAX;
	uint32_t x520 = 147230U;
	uint32_t t97 = 20351U;

	t97 = ((x517+x518)%(x519+x520));

	if (t97 != 413U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x527 = -41;
	int32_t t98 = -496821626;

	t98 = ((x525+x526)%(x527+x528));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x533 = INT8_MAX;
	volatile int16_t x534 = INT16_MIN;
	int16_t x535 = 17;
	static int32_t t99 = 1;

	t99 = ((x533+x534)%(x535+x536));

	if (t99 != -32641) { NG(); } else { ; }
	
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

