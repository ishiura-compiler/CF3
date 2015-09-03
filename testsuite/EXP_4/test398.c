#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile uint8_t x3 = 7U;
static int32_t t0 = -3;
int64_t x12 = -1LL;
uint16_t x14 = 3179U;
uint16_t x15 = 119U;
volatile int8_t x21 = 1;
int32_t x37 = INT32_MIN;
static int64_t x38 = 7473LL;
int8_t x39 = INT8_MIN;
volatile int64_t x40 = -1LL;
uint8_t x75 = 2U;
uint16_t x94 = 538U;
static uint8_t x96 = UINT8_MAX;
int64_t x102 = INT64_MIN;
static volatile int64_t x106 = INT64_MIN;
int32_t t18 = -143411;
uint32_t x109 = 14687171U;
static int64_t x110 = 6583715LL;
int8_t x112 = -2;
int16_t x113 = -1;
int32_t t20 = 127700;
int16_t x121 = -1147;
static uint32_t x123 = 106605817U;
static volatile int16_t x124 = INT16_MAX;
volatile int16_t x133 = -1;
uint16_t x134 = 1117U;
uint16_t x138 = UINT16_MAX;
volatile int16_t x139 = INT16_MIN;
volatile int8_t x140 = INT8_MIN;
int16_t x145 = INT16_MIN;
uint32_t x151 = 64585475U;
static int64_t x157 = 22368768271635956LL;
volatile int32_t t29 = -1117664;
static volatile uint32_t x163 = UINT32_MAX;
volatile int32_t t32 = -12322552;
int32_t t33 = -290893022;
static volatile int32_t t34 = -79104727;
int64_t x189 = -1LL;
int64_t x191 = -2150030150176179846LL;
uint64_t x193 = 95332008LLU;
int8_t x198 = INT8_MAX;
uint32_t x199 = 42868U;
int32_t t38 = 1;
uint64_t x208 = 27562534LLU;
uint8_t x221 = 84U;
static volatile int32_t x234 = INT32_MIN;
int32_t x236 = -1;
static uint32_t x242 = 6680211U;
int8_t x244 = -1;
static volatile int32_t t46 = -531693;
int16_t x256 = 3;
volatile int32_t t47 = 71237;
int32_t x265 = INT32_MAX;
static volatile int32_t t50 = -240771;
volatile int8_t x269 = INT8_MAX;
int64_t x291 = -1LL;
static uint16_t x292 = UINT16_MAX;
uint32_t x293 = 255686361U;
uint32_t x294 = 22U;
int32_t x296 = -1;
static int16_t x299 = 2839;
volatile int8_t x303 = -1;
volatile uint32_t x304 = 95U;
int8_t x307 = 12;
int64_t x318 = -1LL;
volatile int32_t t61 = -2;
static uint32_t x336 = 48722349U;
int64_t x338 = INT64_MAX;
static uint32_t x345 = 91686453U;
uint8_t x354 = 113U;
static volatile int32_t t66 = -1;
volatile int32_t t67 = 3051099;
int16_t x370 = -1;
static int32_t x371 = 11;
uint16_t x375 = UINT16_MAX;
uint16_t x380 = 9811U;
uint64_t x385 = 3366069124417LLU;
int32_t x386 = INT32_MIN;
uint64_t x404 = UINT64_MAX;
int32_t t73 = -22793568;
int8_t x409 = INT8_MAX;
int32_t x411 = 14203554;
uint32_t x423 = UINT32_MAX;
static volatile int16_t x430 = 1;
static uint8_t x441 = 0U;
uint8_t x442 = 19U;
static int8_t x443 = INT8_MIN;
int16_t x444 = INT16_MIN;
int32_t x447 = 58616779;
volatile int16_t x454 = INT16_MIN;
int64_t x462 = -1292LL;
uint16_t x469 = 304U;
volatile int8_t x483 = INT8_MIN;
uint16_t x484 = 3U;
int16_t x504 = INT16_MIN;
volatile int32_t x506 = INT32_MAX;
int16_t x509 = INT16_MAX;
uint8_t x534 = 56U;
int16_t x536 = INT16_MIN;
static uint16_t x549 = UINT16_MAX;
int64_t x554 = INT64_MAX;
volatile uint16_t x556 = UINT16_MAX;
static int16_t x564 = INT16_MIN;
uint8_t x577 = 53U;


void f0(void) {
	int8_t x2 = -22;
	int32_t x4 = -1;

	t0 = (x1==(x2%(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -63;
	static volatile int32_t x6 = 0;
	static volatile int32_t x7 = INT32_MAX;
	int32_t x8 = -1;
	volatile int32_t t1 = 3;

	t1 = (x5==(x6%(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 1U;
	static int32_t x10 = INT32_MIN;
	uint32_t x11 = 29859875U;
	static int32_t t2 = -93;

	t2 = (x9==(x10%(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static int8_t x16 = 7;
	static int32_t t3 = 212;

	t3 = (x13==(x14%(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 603U;
	int64_t x18 = -1LL;
	volatile int8_t x19 = 6;
	volatile int8_t x20 = -1;
	int32_t t4 = -16294;

	t4 = (x17==(x18%(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 22U;
	static int16_t x23 = -1;
	volatile int64_t x24 = -10819690640503011LL;
	static volatile int32_t t5 = 317;

	t5 = (x21==(x22%(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1004282601946LL;
	volatile uint32_t x26 = 126U;
	static int8_t x27 = -1;
	static uint16_t x28 = 917U;
	int32_t t6 = -30708;

	t6 = (x25==(x26%(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int8_t x30 = -27;
	uint8_t x31 = 77U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 62197;

	t7 = (x29==(x30%(x31*x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t t8 = -1;

	t8 = (x37==(x38%(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = -1;

	t9 = (x41==(x42%(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x49 = 3U;
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = 41LLU;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t10 = 49;

	t10 = (x49==(x50%(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -1;
	static uint32_t x58 = 287315092U;
	volatile int32_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t11 = -33277259;

	t11 = (x57==(x58%(x59*x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 6U;
	static int32_t x74 = INT32_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t12 = -1;

	t12 = (x73==(x74%(x75*x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 503U;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 18U;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t13 = 61562;

	t13 = (x81==(x82%(x83*x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	static uint64_t x91 = 1964895302756225919LLU;
	static uint16_t x92 = 61U;
	volatile int32_t t14 = -1;

	t14 = (x89==(x90%(x91*x92)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x95 = 130628LLU;
	int32_t t15 = -25;

	t15 = (x93==(x94%(x95*x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 20U;
	int32_t x100 = -755888;
	volatile int32_t t16 = 189743019;

	t16 = (x97==(x98%(x99*x100)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x101 = INT64_MIN;
	uint32_t x103 = 242U;
	volatile int16_t x104 = 4;
	volatile int32_t t17 = 389721;

	t17 = (x101==(x102%(x103*x104)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MIN;
	static int64_t x107 = -1LL;
	int16_t x108 = -1;

	t18 = (x105==(x106%(x107*x108)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x111 = -762;
	static volatile int32_t t19 = 652;

	t19 = (x109==(x110%(x111*x112)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x114 = 1U;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = 154724LLU;

	t20 = (x113==(x114%(x115*x116)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = 27;
	int32_t x118 = INT32_MIN;
	int32_t x119 = 1;
	int8_t x120 = INT8_MIN;
	int32_t t21 = -7;

	t21 = (x117==(x118%(x119*x120)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x122 = INT8_MIN;
	int32_t t22 = 3234687;

	t22 = (x121==(x122%(x123*x124)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = 15985;
	int16_t x130 = INT16_MIN;
	int32_t x131 = 59497;
	static int8_t x132 = -7;
	int32_t t23 = 5584919;

	t23 = (x129==(x130%(x131*x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x135 = -1;
	uint8_t x136 = 7U;
	volatile int32_t t24 = 336634198;

	t24 = (x133==(x134%(x135*x136)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = INT32_MAX;
	volatile int32_t t25 = 0;

	t25 = (x137==(x138%(x139*x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = UINT64_MAX;
	uint8_t x142 = 1U;
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t26 = 217322;

	t26 = (x141==(x142%(x143*x144)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	static volatile int64_t x148 = INT64_MAX;
	int32_t t27 = -38683;

	t27 = (x145==(x146%(x147*x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = -123338LL;
	uint64_t x150 = 13676905279415LLU;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t28 = -11591904;

	t28 = (x149==(x150%(x151*x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x158 = 212804U;
	static int64_t x159 = INT64_MIN;
	static uint64_t x160 = UINT64_MAX;

	t29 = (x157==(x158%(x159*x160)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x161 = -1;
	static int8_t x162 = -18;
	uint32_t x164 = 174U;
	static volatile int32_t t30 = -82115;

	t30 = (x161==(x162%(x163*x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x165 = 373U;
	int64_t x166 = -7438536171LL;
	uint32_t x167 = 2585U;
	uint64_t x168 = 3158826LLU;
	static volatile int32_t t31 = 61467;

	t31 = (x165==(x166%(x167*x168)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = INT32_MAX;

	t32 = (x169==(x170%(x171*x172)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x173 = UINT8_MAX;
	static volatile uint64_t x174 = 19586836887LLU;
	uint32_t x175 = 21U;
	int8_t x176 = INT8_MAX;

	t33 = (x173==(x174%(x175*x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MIN;
	int32_t x179 = 13736368;
	int8_t x180 = INT8_MIN;

	t34 = (x177==(x178%(x179*x180)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = -1LL;
	uint16_t x182 = 3698U;
	uint32_t x183 = 250U;
	int8_t x184 = INT8_MIN;
	int32_t t35 = -84961772;

	t35 = (x181==(x182%(x183*x184)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x190 = INT16_MIN;
	static uint64_t x192 = 167989025LLU;
	volatile int32_t t36 = -1;

	t36 = (x189==(x190%(x191*x192)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x194 = UINT64_MAX;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = -1LL;
	int32_t t37 = 14;

	t37 = (x193==(x194%(x195*x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 27789U;
	int16_t x200 = -24;

	t38 = (x197==(x198%(x199*x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MAX;
	uint16_t x202 = UINT16_MAX;
	int8_t x203 = INT8_MAX;
	uint64_t x204 = 100535264LLU;
	volatile int32_t t39 = 201;

	t39 = (x201==(x202%(x203*x204)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = -1LL;
	volatile int64_t x206 = -731200LL;
	uint8_t x207 = 34U;
	static int32_t t40 = -284;

	t40 = (x205==(x206%(x207*x208)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x213 = 39LLU;
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MAX;
	uint16_t x216 = 5020U;
	volatile int32_t t41 = 286623315;

	t41 = (x213==(x214%(x215*x216)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x217 = -14561;
	static int16_t x218 = -14388;
	int32_t x219 = 7;
	uint16_t x220 = 3U;
	int32_t t42 = -3;

	t42 = (x217==(x218%(x219*x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x222 = 78418915405783214LLU;
	static uint16_t x223 = UINT16_MAX;
	volatile uint32_t x224 = 33839U;
	int32_t t43 = 87;

	t43 = (x221==(x222%(x223*x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = INT32_MAX;
	int8_t x235 = -1;
	int32_t t44 = -214372;

	t44 = (x233==(x234%(x235*x236)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x241 = UINT8_MAX;
	uint64_t x243 = 70451427132121LLU;
	int32_t t45 = -957;

	t45 = (x241==(x242%(x243*x244)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x245 = 219U;
	int8_t x246 = INT8_MAX;
	int16_t x247 = 247;
	uint64_t x248 = UINT64_MAX;

	t46 = (x245==(x246%(x247*x248)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x253 = -17443;
	volatile uint32_t x254 = 1991622055U;
	uint8_t x255 = 15U;

	t47 = (x253==(x254%(x255*x256)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x257 = 453153142579LL;
	int16_t x258 = -8;
	uint64_t x259 = 1305381148937872428LLU;
	uint16_t x260 = UINT16_MAX;
	static int32_t t48 = -62275;

	t48 = (x257==(x258%(x259*x260)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x261 = 3983328U;
	int64_t x262 = INT64_MAX;
	int16_t x263 = -1;
	int16_t x264 = -1;
	static volatile int32_t t49 = -149821724;

	t49 = (x261==(x262%(x263*x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x266 = INT8_MAX;
	int16_t x267 = -1;
	int32_t x268 = INT32_MAX;

	t50 = (x265==(x266%(x267*x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x270 = -4;
	uint32_t x271 = 34U;
	int8_t x272 = 1;
	static int32_t t51 = 1164;

	t51 = (x269==(x270%(x271*x272)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x273 = INT64_MIN;
	static int32_t x274 = 1;
	uint32_t x275 = 122847U;
	volatile uint8_t x276 = 55U;
	volatile int32_t t52 = 204841;

	t52 = (x273==(x274%(x275*x276)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x285 = 0U;
	volatile uint8_t x286 = UINT8_MAX;
	int32_t x287 = -1;
	int16_t x288 = INT16_MAX;
	int32_t t53 = 430854714;

	t53 = (x285==(x286%(x287*x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x289 = 0U;
	int64_t x290 = INT64_MIN;
	volatile int32_t t54 = -90247147;

	t54 = (x289==(x290%(x291*x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x295 = -918;
	int32_t t55 = 262632;

	t55 = (x293==(x294%(x295*x296)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x297 = 74U;
	volatile int16_t x298 = -13212;
	int8_t x300 = INT8_MAX;
	static int32_t t56 = 8;

	t56 = (x297==(x298%(x299*x300)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = INT32_MIN;
	static uint16_t x302 = 1U;
	int32_t t57 = 79;

	t57 = (x301==(x302%(x303*x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = -6;
	int8_t x306 = -1;
	int8_t x308 = INT8_MIN;
	int32_t t58 = 615098;

	t58 = (x305==(x306%(x307*x308)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x313 = INT8_MIN;
	static uint32_t x314 = UINT32_MAX;
	int32_t x315 = -4123;
	static uint8_t x316 = 82U;
	volatile int32_t t59 = -12586;

	t59 = (x313==(x314%(x315*x316)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x317 = -226;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = -695LL;
	static volatile int32_t t60 = -51925;

	t60 = (x317==(x318%(x319*x320)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = 21;
	int8_t x323 = -1;
	int32_t x324 = -57;

	t61 = (x321==(x322%(x323*x324)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 3037U;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	volatile int32_t t62 = 94070;

	t62 = (x325==(x326%(x327*x328)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = INT32_MIN;
	volatile int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile int32_t t63 = 3965;

	t63 = (x333==(x334%(x335*x336)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	static uint16_t x340 = UINT16_MAX;
	static volatile int32_t t64 = -1;

	t64 = (x337==(x338%(x339*x340)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x346 = -33;
	int64_t x347 = 106874LL;
	uint8_t x348 = UINT8_MAX;
	int32_t t65 = 808;

	t65 = (x345==(x346%(x347*x348)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x353 = INT64_MIN;
	uint8_t x355 = 11U;
	static int64_t x356 = -1LL;

	t66 = (x353==(x354%(x355*x356)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x361 = UINT8_MAX;
	static int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = -1LL;

	t67 = (x361==(x362%(x363*x364)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x369 = INT64_MIN;
	static uint8_t x372 = 59U;
	static volatile int32_t t68 = -57;

	t68 = (x369==(x370%(x371*x372)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = -1;
	int64_t x374 = 392143678479132085LL;
	int8_t x376 = 54;
	volatile int32_t t69 = 109;

	t69 = (x373==(x374%(x375*x376)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 3734U;
	int32_t t70 = 130833;

	t70 = (x377==(x378%(x379*x380)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x381 = -46843;
	int16_t x382 = 55;
	int32_t x383 = 1;
	static int16_t x384 = INT16_MIN;
	int32_t t71 = 42372113;

	t71 = (x381==(x382%(x383*x384)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x387 = UINT64_MAX;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t72 = 8199331;

	t72 = (x385==(x386%(x387*x388)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x401 = INT16_MIN;
	uint16_t x402 = UINT16_MAX;
	uint64_t x403 = 3512748LLU;

	t73 = (x401==(x402%(x403*x404)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x410 = 23616939266556557LL;
	static int8_t x412 = INT8_MIN;
	static volatile int32_t t74 = 104140;

	t74 = (x409==(x410%(x411*x412)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = -1167LL;
	static uint64_t x419 = 3859LLU;
	static int64_t x420 = INT64_MIN;
	int32_t t75 = 870149855;

	t75 = (x417==(x418%(x419*x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t76 = -158203940;

	t76 = (x421==(x422%(x423*x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x429 = -1134277125LL;
	uint32_t x431 = UINT32_MAX;
	volatile int32_t x432 = INT32_MIN;
	static int32_t t77 = -1596;

	t77 = (x429==(x430%(x431*x432)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t t78 = 3943;

	t78 = (x441==(x442%(x443*x444)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x445 = INT32_MAX;
	volatile int64_t x446 = INT64_MAX;
	int32_t x448 = -18;
	static int32_t t79 = -452247115;

	t79 = (x445==(x446%(x447*x448)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x453 = UINT8_MAX;
	static int32_t x455 = 22;
	volatile uint32_t x456 = 297420U;
	int32_t t80 = 4135078;

	t80 = (x453==(x454%(x455*x456)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x457 = -1;
	static int8_t x458 = INT8_MIN;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t81 = 1025;

	t81 = (x457==(x458%(x459*x460)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x461 = INT16_MIN;
	int16_t x463 = -78;
	uint8_t x464 = 2U;
	static int32_t t82 = 0;

	t82 = (x461==(x462%(x463*x464)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x470 = -2228953774154880LL;
	int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MIN;
	int32_t t83 = -34938148;

	t83 = (x469==(x470%(x471*x472)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x481 = UINT8_MAX;
	int32_t x482 = 352248387;
	volatile int32_t t84 = -43420827;

	t84 = (x481==(x482%(x483*x484)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	volatile uint8_t x495 = UINT8_MAX;
	uint64_t x496 = 7076642158553274190LLU;
	int32_t t85 = 1;

	t85 = (x493==(x494%(x495*x496)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x501 = -6262;
	volatile int64_t x502 = -1LL;
	uint64_t x503 = UINT64_MAX;
	static volatile int32_t t86 = -26950369;

	t86 = (x501==(x502%(x503*x504)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x505 = INT8_MIN;
	int8_t x507 = -1;
	volatile int32_t x508 = -342;
	int32_t t87 = -7174;

	t87 = (x505==(x506%(x507*x508)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x510 = 815034LLU;
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = -1;
	int32_t t88 = 16748;

	t88 = (x509==(x510%(x511*x512)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x513 = 9U;
	uint32_t x514 = 1U;
	int8_t x515 = INT8_MAX;
	volatile int32_t x516 = -12315498;
	volatile int32_t t89 = 1;

	t89 = (x513==(x514%(x515*x516)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x521 = INT64_MIN;
	uint64_t x522 = 655443190018951694LLU;
	volatile int64_t x523 = -1LL;
	uint64_t x524 = 420792284535723LLU;
	volatile int32_t t90 = -3453;

	t90 = (x521==(x522%(x523*x524)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x529 = -47;
	uint64_t x530 = UINT64_MAX;
	volatile uint16_t x531 = 8U;
	uint8_t x532 = UINT8_MAX;
	static int32_t t91 = 1;

	t91 = (x529==(x530%(x531*x532)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x533 = INT64_MAX;
	static uint64_t x535 = 78367554328LLU;
	static int32_t t92 = -554568817;

	t92 = (x533==(x534%(x535*x536)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x537 = 1776529332891156719LLU;
	static int64_t x538 = INT64_MAX;
	uint32_t x539 = 31890674U;
	uint8_t x540 = 26U;
	int32_t t93 = -9;

	t93 = (x537==(x538%(x539*x540)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x545 = INT32_MIN;
	int32_t x546 = INT32_MIN;
	uint16_t x547 = 1362U;
	int64_t x548 = 5307LL;
	volatile int32_t t94 = 268227;

	t94 = (x545==(x546%(x547*x548)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x550 = 1U;
	static uint32_t x551 = 129857705U;
	volatile uint32_t x552 = 7296491U;
	int32_t t95 = -6;

	t95 = (x549==(x550%(x551*x552)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x553 = 2732U;
	static uint32_t x555 = UINT32_MAX;
	static volatile int32_t t96 = 492131430;

	t96 = (x553==(x554%(x555*x556)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x561 = INT32_MIN;
	int64_t x562 = -254686584990324LL;
	int16_t x563 = -1;
	int32_t t97 = 451;

	t97 = (x561==(x562%(x563*x564)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x578 = 18452U;
	uint64_t x579 = UINT64_MAX;
	volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t98 = 1;

	t98 = (x577==(x578%(x579*x580)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x585 = INT32_MIN;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	uint16_t x588 = 323U;
	volatile int32_t t99 = -1520;

	t99 = (x585==(x586%(x587*x588)));

	if (t99 != 0) { NG(); } else { ; }
	
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

