#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x20 = -23;
uint16_t x36 = 7U;
uint64_t x44 = UINT64_MAX;
uint64_t t5 = 19488393703511722LLU;
static uint32_t x48 = 405047U;
int8_t x64 = 9;
uint8_t x66 = UINT8_MAX;
static int32_t x67 = -10;
uint8_t x70 = UINT8_MAX;
int8_t x76 = INT8_MIN;
int64_t x104 = INT64_MAX;
static int32_t x105 = 7;
int8_t x107 = 4;
int64_t x108 = INT64_MIN;
static int16_t x113 = INT16_MIN;
volatile int16_t x120 = INT16_MIN;
volatile int16_t x131 = INT16_MIN;
int64_t x133 = INT64_MIN;
int64_t x141 = INT64_MIN;
static uint64_t t25 = 566362693221412LLU;
uint8_t x150 = 2U;
volatile uint16_t x153 = 0U;
int16_t x170 = 351;
static int32_t x173 = INT32_MIN;
int16_t x184 = -761;
int32_t t33 = -33219;
int8_t x192 = -1;
static int16_t x193 = -221;
volatile int64_t x194 = INT64_MIN;
volatile uint64_t t35 = 1LLU;
uint8_t x200 = UINT8_MAX;
uint16_t x205 = 3U;
int8_t x209 = INT8_MIN;
static int64_t x216 = 476419365627LL;
int8_t x221 = -1;
static volatile int32_t x223 = -1;
uint8_t x231 = UINT8_MAX;
uint8_t x250 = 10U;
volatile int16_t x251 = INT16_MIN;
uint16_t x261 = 3U;
volatile int32_t t48 = -322934293;
uint32_t x304 = 21U;
static uint8_t x314 = 40U;
volatile int16_t x320 = INT16_MIN;
volatile int8_t x321 = -1;
int8_t x328 = -22;
int8_t x333 = INT8_MIN;
int32_t x337 = INT32_MIN;
int32_t t59 = 352960;
static int32_t x346 = INT32_MAX;
uint32_t x359 = 19U;
int64_t x361 = -62LL;
int16_t x368 = -13;
volatile uint32_t t65 = 22991U;
volatile int64_t x374 = -1LL;
uint64_t x376 = 2353903757LLU;
volatile int8_t x377 = -1;
volatile int32_t x380 = INT32_MIN;
int32_t x381 = INT32_MIN;
uint64_t x384 = UINT64_MAX;
int8_t x390 = -1;
int64_t t69 = -4058LL;
volatile int64_t x399 = 141711331406LL;
static int64_t x401 = INT64_MIN;
static uint64_t t72 = 10075LLU;
int16_t x427 = INT16_MAX;
volatile int32_t x432 = INT32_MAX;
volatile uint64_t t77 = 570LLU;
int64_t x435 = 48989LL;
volatile int64_t t78 = 6414204702LL;
volatile uint32_t x447 = 1021291311U;
volatile uint8_t x448 = 89U;
int16_t x469 = INT16_MAX;
uint32_t x471 = UINT32_MAX;
uint8_t x484 = 107U;
int64_t x485 = 192242LL;
int32_t x492 = -1;
volatile int64_t x512 = -1LL;
int32_t x513 = -1;
int32_t x515 = INT32_MIN;
static int64_t t92 = -4059000841427267LL;
volatile uint64_t t93 = 639391797318041LLU;
int8_t x521 = INT8_MIN;
int8_t x537 = -1;
int8_t x547 = -15;
int16_t x553 = INT16_MIN;


void f0(void) {
	static int32_t x9 = -1;
	static int32_t x10 = -1;
	uint8_t x11 = 116U;
	static int16_t x12 = -1;
	int32_t t0 = 104715;

	t0 = (x9/((x10*x11)-x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -1LL;
	uint16_t x18 = 7U;
	volatile uint64_t x19 = 111893022310542657LLU;
	uint64_t t1 = 9555LLU;

	t1 = (x17/((x18*x19)-x20));

	if (t1 != 23LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = -1;
	volatile uint64_t x31 = 26682297816312019LLU;
	uint16_t x32 = 70U;
	uint64_t t2 = 1061224159310LLU;

	t2 = (x29/((x30*x31)-x32));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x33 = INT64_MAX;
	volatile uint16_t x34 = 34U;
	int8_t x35 = 37;
	static int64_t t3 = -538837886LL;

	t3 = (x33/((x34*x35)-x36));

	if (t3 != 7372799389971843LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = 12;
	volatile uint8_t x39 = 2U;
	int8_t x40 = -1;
	volatile int32_t t4 = -380288263;

	t4 = (x37/((x38*x39)-x40));

	if (t4 != 10) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 15352202209092LLU;
	volatile int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = 52334760976494LLU;

	t5 = (x41/((x42*x43)-x44));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x45 = -1;
	volatile uint64_t x46 = 104011750895251344LLU;
	volatile uint16_t x47 = UINT16_MAX;
	static uint64_t t6 = 428598869132470956LLU;

	t6 = (x45/((x46*x47)-x48));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 398748874U;
	volatile uint8_t x52 = UINT8_MAX;
	uint32_t t7 = 0U;

	t7 = (x49/((x50*x51)-x52));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	uint8_t x59 = 1U;
	volatile int16_t x60 = 1;
	volatile int32_t t8 = -840024;

	t8 = (x57/((x58*x59)-x60));

	if (t8 != 16384) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	static int16_t x62 = 6;
	uint16_t x63 = 11533U;
	volatile int32_t t9 = -15126;

	t9 = (x61/((x62*x63)-x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = -1;
	uint32_t x68 = 8024U;
	volatile uint32_t t10 = 227U;

	t10 = (x65/((x66*x67)-x68));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x69 = -1;
	int64_t x71 = -619LL;
	int64_t x72 = INT64_MIN;
	volatile int64_t t11 = 1LL;

	t11 = (x69/((x70*x71)-x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -1;
	static volatile int8_t x74 = INT8_MAX;
	static uint64_t x75 = 3509LLU;
	static uint64_t t12 = 44497561648738LLU;

	t12 = (x73/((x74*x75)-x76));

	if (t12 != 41381660255399LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x77 = 3512LL;
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = INT8_MAX;
	static volatile uint64_t t13 = 37LLU;

	t13 = (x77/((x78*x79)-x80));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x85 = 7830U;
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = INT32_MIN;
	volatile uint64_t x88 = 19LLU;
	uint64_t t14 = 775641LLU;

	t14 = (x85/((x86*x87)-x88));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = -209;
	int32_t x94 = 240138719;
	int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile int64_t t15 = 66355114658LL;

	t15 = (x93/((x94*x95)-x96));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;
	uint8_t x99 = 21U;
	volatile int16_t x100 = INT16_MAX;
	static volatile uint32_t t16 = 79U;

	t16 = (x97/((x98*x99)-x100));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	static volatile int32_t x103 = 1071;
	int64_t t17 = -293874471LL;

	t17 = (x101/((x102*x103)-x104));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x106 = -226;
	static volatile int64_t t18 = -72LL;

	t18 = (x105/((x106*x107)-x108));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = 2U;
	uint32_t x110 = UINT32_MAX;
	static int32_t x111 = INT32_MAX;
	uint64_t x112 = 297413LLU;
	volatile uint64_t t19 = 962LLU;

	t19 = (x109/((x110*x111)-x112));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = -1;
	int8_t x116 = -1;
	volatile uint32_t t20 = 88U;

	t20 = (x113/((x114*x115)-x116));

	if (t20 != 2147467264U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x117 = INT32_MIN;
	volatile uint16_t x118 = 3U;
	int16_t x119 = INT16_MIN;
	static int32_t t21 = 336042961;

	t21 = (x117/((x118*x119)-x120));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x121 = INT16_MAX;
	int32_t x122 = 2;
	uint16_t x123 = 107U;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t22 = 1454771742802LLU;

	t22 = (x121/((x122*x123)-x124));

	if (t22 != 152LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 43U;
	static uint8_t x130 = 2U;
	int32_t x132 = INT32_MIN;
	int32_t t23 = -16100348;

	t23 = (x129/((x130*x131)-x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x134 = INT16_MIN;
	int16_t x135 = -2284;
	static int8_t x136 = INT8_MIN;
	static int64_t t24 = -1LL;

	t24 = (x133/((x134*x135)-x136));

	if (t24 != -123237519839LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x142 = 0U;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = 8653373LLU;

	t25 = (x141/((x142*x143)-x144));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = 12;
	static uint8_t x146 = 0U;
	volatile int8_t x147 = -1;
	volatile uint32_t x148 = UINT32_MAX;
	static uint32_t t26 = 158677074U;

	t26 = (x145/((x146*x147)-x148));

	if (t26 != 12U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x149 = 1LLU;
	static int8_t x151 = -1;
	uint8_t x152 = 4U;
	uint64_t t27 = 95366LLU;

	t27 = (x149/((x150*x151)-x152));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x154 = 26949LLU;
	int8_t x155 = 2;
	uint64_t x156 = 2LLU;
	uint64_t t28 = 121355577LLU;

	t28 = (x153/((x154*x155)-x156));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x165 = -21252219157955091LL;
	uint16_t x166 = 8U;
	int8_t x167 = INT8_MIN;
	static int16_t x168 = INT16_MAX;
	volatile int64_t t29 = 2025400252152LL;

	t29 = (x165/((x166*x167)-x168));

	if (t29 != 628931347339LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x169 = 4632908311LLU;
	int8_t x171 = -22;
	int16_t x172 = -1;
	static uint64_t t30 = 840945886414876LLU;

	t30 = (x169/((x170*x171)-x172));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t31 = -401;

	t31 = (x173/((x174*x175)-x176));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = 0;
	int8_t x182 = INT8_MAX;
	static int8_t x183 = INT8_MIN;
	volatile int32_t t32 = -75598;

	t32 = (x181/((x182*x183)-x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = -1;
	int8_t x186 = -61;
	int8_t x187 = 9;
	int32_t x188 = -237066;

	t33 = (x185/((x186*x187)-x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 180;
	uint32_t t34 = 5822079U;

	t34 = (x189/((x190*x191)-x192));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x195 = 90629055544233272LLU;
	int64_t x196 = -1LL;

	t35 = (x193/((x194*x195)-x196));

	if (t35 != 18446744073709551395LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x197 = 5;
	uint8_t x198 = 1U;
	int64_t x199 = -1LL;
	volatile int64_t t36 = -2055809LL;

	t36 = (x197/((x198*x199)-x200));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x206 = -10;
	int64_t x207 = 1LL;
	volatile int64_t x208 = -31821745635277LL;
	volatile int64_t t37 = 1173990895LL;

	t37 = (x205/((x206*x207)-x208));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x210 = 107;
	uint64_t x211 = UINT64_MAX;
	uint8_t x212 = 9U;
	static volatile uint64_t t38 = 408084336913944390LLU;

	t38 = (x209/((x210*x211)-x212));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = 1;
	int16_t x214 = 10;
	int16_t x215 = 1;
	static volatile int64_t t39 = 22479674LL;

	t39 = (x213/((x214*x215)-x216));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x222 = -26436;
	int16_t x224 = INT16_MIN;
	static int32_t t40 = -1004726;

	t40 = (x221/((x222*x223)-x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x225 = 1U;
	uint8_t x226 = 1U;
	uint8_t x227 = UINT8_MAX;
	volatile int8_t x228 = -1;
	volatile int32_t t41 = -305;

	t41 = (x225/((x226*x227)-x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x229 = 857978391120499LLU;
	uint32_t x230 = UINT32_MAX;
	volatile int16_t x232 = INT16_MIN;
	volatile uint64_t t42 = 3786061770LLU;

	t42 = (x229/((x230*x231)-x232));

	if (t42 != 26388779599LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = -1;
	static volatile int16_t x234 = INT16_MIN;
	uint8_t x235 = 6U;
	uint8_t x236 = 2U;
	int32_t t43 = -63223851;

	t43 = (x233/((x234*x235)-x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x249 = 3U;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t44 = -5;

	t44 = (x249/((x250*x251)-x252));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x253 = -1;
	int8_t x254 = -1;
	static int16_t x255 = -1;
	int8_t x256 = -1;
	volatile int32_t t45 = 53;

	t45 = (x253/((x254*x255)-x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x257 = INT32_MAX;
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t46 = 13753LLU;

	t46 = (x257/((x258*x259)-x260));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x262 = -202219901;
	volatile uint64_t x263 = 1523696787810917LLU;
	int8_t x264 = INT8_MIN;
	uint64_t t47 = 8846620968366459LLU;

	t47 = (x261/((x262*x263)-x264));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x277 = INT16_MIN;
	static int16_t x278 = 0;
	int16_t x279 = -5387;
	static volatile uint8_t x280 = UINT8_MAX;

	t48 = (x277/((x278*x279)-x280));

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x293 = 46U;
	int16_t x294 = -53;
	uint8_t x295 = 0U;
	uint8_t x296 = UINT8_MAX;
	uint32_t t49 = 8171U;

	t49 = (x293/((x294*x295)-x296));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x297 = 18927U;
	int8_t x298 = 3;
	volatile int16_t x299 = -437;
	int32_t x300 = 373937484;
	int32_t t50 = -13;

	t50 = (x297/((x298*x299)-x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x301 = -1;
	volatile int64_t x302 = 43526325LL;
	volatile int16_t x303 = -26;
	int64_t t51 = -658773798LL;

	t51 = (x301/((x302*x303)-x304));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x309 = INT32_MIN;
	static uint32_t x310 = UINT32_MAX;
	int8_t x311 = -1;
	static uint16_t x312 = 0U;
	volatile uint32_t t52 = 77U;

	t52 = (x309/((x310*x311)-x312));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x313 = 6588686012051912945LLU;
	int16_t x315 = -583;
	int16_t x316 = 410;
	volatile uint64_t t53 = 1493LLU;

	t53 = (x313/((x314*x315)-x316));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	static uint32_t x319 = UINT32_MAX;
	volatile uint32_t t54 = 1477U;

	t54 = (x317/((x318*x319)-x320));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x322 = INT32_MAX;
	volatile int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	int32_t t55 = 1;

	t55 = (x321/((x322*x323)-x324));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x325 = INT32_MAX;
	uint32_t x326 = 16840319U;
	int8_t x327 = 3;
	static uint32_t t56 = 123087U;

	t56 = (x325/((x326*x327)-x328));

	if (t56 != 42U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MAX;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	int64_t t57 = -80551646LL;

	t57 = (x329/((x330*x331)-x332));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x334 = UINT64_MAX;
	volatile uint8_t x335 = 47U;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t58 = 346149004LLU;

	t58 = (x333/((x334*x335)-x336));

	if (t58 != 8589934780LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x338 = -1;
	uint16_t x339 = 285U;
	int16_t x340 = 0;

	t59 = (x337/((x338*x339)-x340));

	if (t59 != 7535030) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x345 = 1565;
	int16_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t60 = 914667256913LLU;

	t60 = (x345/((x346*x347)-x348));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = 0;
	int32_t x350 = -2;
	int64_t x351 = 142932759676368477LL;
	int16_t x352 = 1703;
	int64_t t61 = 3839984235589864LL;

	t61 = (x349/((x350*x351)-x352));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x353 = 5376523953659LLU;
	int16_t x354 = 1;
	int64_t x355 = -1LL;
	uint16_t x356 = 12U;
	static volatile uint64_t t62 = 0LLU;

	t62 = (x353/((x354*x355)-x356));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x357 = 1017676751LL;
	uint64_t x358 = 0LLU;
	uint16_t x360 = 2993U;
	volatile uint64_t t63 = 2803934696032886634LLU;

	t63 = (x357/((x358*x359)-x360));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x362 = 215942LLU;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = 7U;
	static volatile uint64_t t64 = 320493LLU;

	t64 = (x361/((x362*x363)-x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	static uint32_t x367 = UINT32_MAX;

	t65 = (x365/((x366*x367)-x368));

	if (t65 != 306783369U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x373 = INT16_MAX;
	int64_t x375 = 1630452924479106LL;
	uint64_t t66 = 384182700LLU;

	t66 = (x373/((x374*x375)-x376));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x378 = -1;
	volatile int64_t x379 = 1074392769309LL;
	volatile int64_t t67 = 29190208327833998LL;

	t67 = (x377/((x378*x379)-x380));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x382 = -1LL;
	uint16_t x383 = 863U;
	volatile uint64_t t68 = 3742383938990869LLU;

	t68 = (x381/((x382*x383)-x384));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -125349773LL;

	t69 = (x389/((x390*x391)-x392));

	if (t69 != -73581007749LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x393 = INT8_MIN;
	volatile uint16_t x394 = UINT16_MAX;
	int8_t x395 = INT8_MIN;
	uint8_t x396 = UINT8_MAX;
	int32_t t70 = 2416;

	t70 = (x393/((x394*x395)-x396));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x397 = -29257LL;
	volatile int32_t x398 = -1;
	int8_t x400 = 15;
	volatile int64_t t71 = 468591186LL;

	t71 = (x397/((x398*x399)-x400));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x402 = INT8_MIN;
	static int16_t x403 = INT16_MAX;
	volatile uint64_t x404 = 16834239467LLU;

	t72 = (x401/((x402*x403)-x404));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x405 = UINT8_MAX;
	static volatile int16_t x406 = 1;
	volatile uint16_t x407 = 364U;
	uint8_t x408 = 30U;
	int32_t t73 = -3508;

	t73 = (x405/((x406*x407)-x408));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x409 = 65371728742LLU;
	uint64_t x410 = 7301698870030702340LLU;
	static int32_t x411 = 1;
	int64_t x412 = 0LL;
	uint64_t t74 = 155542293278595759LLU;

	t74 = (x409/((x410*x411)-x412));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x421 = -1;
	int64_t x422 = INT64_MAX;
	static volatile uint64_t x423 = 2407LLU;
	volatile int16_t x424 = -1;
	uint64_t t75 = 14190220413LLU;

	t75 = (x421/((x422*x423)-x424));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x425 = -1;
	uint16_t x426 = 9U;
	uint32_t x428 = 2752591U;
	volatile uint32_t t76 = 1U;

	t76 = (x425/((x426*x427)-x428));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x429 = 1294389614LLU;
	int64_t x430 = -436216692733LL;
	uint8_t x431 = 3U;

	t77 = (x429/((x430*x431)-x432));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x433 = INT32_MAX;
	static int16_t x434 = -3603;
	int16_t x436 = INT16_MIN;

	t78 = (x433/((x434*x435)-x436));

	if (t78 != -12LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x437 = -1;
	static uint64_t x438 = 6576LLU;
	int32_t x439 = INT32_MAX;
	int16_t x440 = -1;
	uint64_t t79 = 55885114246314LLU;

	t79 = (x437/((x438*x439)-x440));

	if (t79 != 1306255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x441 = INT32_MAX;
	uint64_t x442 = 725358442LLU;
	int8_t x443 = INT8_MAX;
	uint8_t x444 = 27U;
	uint64_t t80 = 101540166430258095LLU;

	t80 = (x441/((x442*x443)-x444));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x445 = -1LL;
	int32_t x446 = INT32_MAX;
	volatile int64_t t81 = 4059908198707221943LL;

	t81 = (x445/((x446*x447)-x448));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = INT8_MIN;
	static uint64_t x454 = 36178LLU;
	volatile int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t82 = 23374LLU;

	t82 = (x453/((x454*x455)-x456));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x465 = -1LL;
	static uint64_t x466 = 95030LLU;
	int64_t x467 = 6965316306279581LL;
	uint8_t x468 = 103U;
	static uint64_t t83 = 21922LLU;

	t83 = (x465/((x466*x467)-x468));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x470 = 60U;
	uint32_t x472 = 1799516U;
	uint32_t t84 = 394U;

	t84 = (x469/((x470*x471)-x472));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x477 = INT32_MIN;
	int64_t x478 = 10850063814403245LL;
	int16_t x479 = -2;
	volatile int8_t x480 = INT8_MAX;
	int64_t t85 = -95LL;

	t85 = (x477/((x478*x479)-x480));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = -21123467LL;
	volatile int8_t x482 = INT8_MAX;
	volatile int16_t x483 = INT16_MIN;
	int64_t t86 = -7583747LL;

	t86 = (x481/((x482*x483)-x484));

	if (t86 != 5LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x486 = INT16_MIN;
	volatile uint32_t x487 = 0U;
	int32_t x488 = 63;
	int64_t t87 = -35520510LL;

	t87 = (x485/((x486*x487)-x488));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x489 = 112LL;
	uint8_t x490 = 87U;
	static int8_t x491 = -1;
	int64_t t88 = 1LL;

	t88 = (x489/((x490*x491)-x492));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x501 = 0;
	static int16_t x502 = 1;
	int16_t x503 = INT16_MIN;
	volatile uint8_t x504 = UINT8_MAX;
	int32_t t89 = -497;

	t89 = (x501/((x502*x503)-x504));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x505 = INT8_MAX;
	uint8_t x506 = 115U;
	static uint8_t x507 = 15U;
	int8_t x508 = 1;
	int32_t t90 = 748;

	t90 = (x505/((x506*x507)-x508));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x509 = -19;
	int16_t x510 = INT16_MIN;
	uint16_t x511 = UINT16_MAX;
	static int64_t t91 = -2516783369267944864LL;

	t91 = (x509/((x510*x511)-x512));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x514 = -1LL;
	int64_t x516 = -1LL;

	t92 = (x513/((x514*x515)-x516));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x517 = 21508U;
	int16_t x518 = -1;
	uint32_t x519 = 1U;
	uint64_t x520 = UINT64_MAX;

	t93 = (x517/((x518*x519)-x520));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x522 = 1LLU;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t94 = 181610228218801541LLU;

	t94 = (x521/((x522*x523)-x524));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = INT16_MAX;
	int32_t x530 = 1;
	volatile int64_t x531 = 4098970786865333LL;
	int8_t x532 = 1;
	volatile int64_t t95 = 18982629943796906LL;

	t95 = (x529/((x530*x531)-x532));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x533 = INT64_MIN;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = UINT64_MAX;
	static uint32_t x536 = UINT32_MAX;
	uint64_t t96 = 5LLU;

	t96 = (x533/((x534*x535)-x536));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 24706209U;
	uint64_t x540 = 1214823356833247873LLU;
	volatile uint64_t t97 = 14681LLU;

	t97 = (x537/((x538*x539)-x540));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x545 = INT64_MIN;
	int16_t x546 = -1185;
	static volatile int8_t x548 = INT8_MAX;
	int64_t t98 = -2LL;

	t98 = (x545/((x546*x547)-x548));

	if (t98 != -522629875161762LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x554 = 1U;
	static int8_t x555 = INT8_MIN;
	static int16_t x556 = INT16_MIN;
	static volatile int32_t t99 = 45235;

	t99 = (x553/((x554*x555)-x556));

	if (t99 != -1) { NG(); } else { ; }
	
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

