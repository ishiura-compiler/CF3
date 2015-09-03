#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
static int64_t x4 = 3012LL;
int32_t x5 = -1;
int16_t x10 = INT16_MIN;
int32_t x11 = INT32_MIN;
volatile int32_t t3 = -243718330;
int32_t x25 = -1;
uint64_t x31 = UINT64_MAX;
static int32_t x32 = -352866187;
int32_t x33 = INT32_MIN;
volatile int32_t t8 = 1708;
uint8_t x44 = UINT8_MAX;
int32_t t9 = -3;
uint16_t x48 = 1442U;
static int64_t x59 = 62LL;
volatile int32_t t12 = 10676;
volatile int64_t x61 = INT64_MIN;
volatile int32_t t13 = -48325;
int32_t t14 = -175226971;
volatile int8_t x71 = INT8_MIN;
uint32_t x79 = UINT32_MAX;
uint64_t x81 = UINT64_MAX;
volatile int32_t t18 = 84617964;
int32_t t19 = 2052581;
int32_t t24 = 950;
volatile int32_t t25 = 7;
int32_t x131 = 1663;
volatile int16_t x139 = INT16_MIN;
volatile int64_t x141 = -1LL;
volatile int32_t t30 = -5648624;
uint16_t x146 = 20U;
int16_t x156 = INT16_MAX;
uint32_t x159 = UINT32_MAX;
int8_t x163 = -5;
volatile int32_t t35 = 101;
volatile int16_t x166 = -12;
int16_t x169 = INT16_MIN;
uint32_t x172 = UINT32_MAX;
static int64_t x174 = INT64_MAX;
int64_t x183 = -2297244949102940LL;
int64_t x186 = 910819LL;
static int8_t x187 = -39;
uint16_t x196 = 10U;
volatile int32_t t44 = -13;
int16_t x220 = -524;
int8_t x223 = INT8_MAX;
int8_t x224 = 1;
static int16_t x227 = INT16_MIN;
int8_t x242 = -20;
static int64_t x246 = INT64_MIN;
int16_t x247 = INT16_MIN;
uint32_t x248 = 0U;
volatile uint64_t x250 = 8137168728687059307LLU;
static int32_t x253 = INT32_MIN;
int8_t x254 = -1;
int32_t x260 = -1;
volatile int32_t t56 = -8;
int16_t x265 = INT16_MAX;
volatile int16_t x271 = -1;
volatile int8_t x276 = INT8_MIN;
uint32_t x279 = 206671U;
int32_t t62 = -1538;
static int32_t t63 = 53;
static int16_t x308 = INT16_MAX;
int8_t x310 = INT8_MIN;
uint32_t x311 = 165U;
int16_t x312 = INT16_MAX;
static int64_t x321 = INT64_MIN;
static int64_t x325 = 493702142697LL;
uint8_t x329 = 13U;
int8_t x356 = INT8_MIN;
uint32_t x358 = 16740011U;
uint64_t x359 = UINT64_MAX;
static uint16_t x383 = 850U;
static int8_t x389 = INT8_MIN;
int16_t x395 = INT16_MAX;
int16_t x396 = -3;
static int32_t t83 = -223752;
int32_t x399 = INT32_MAX;
static int64_t x400 = INT64_MIN;
static int8_t x401 = INT8_MIN;
int8_t x402 = INT8_MAX;
uint64_t x403 = 605142247212LLU;
volatile int32_t t86 = -4593;
int8_t x413 = INT8_MIN;
static volatile int32_t t89 = 402303480;
static int8_t x437 = INT8_MIN;
volatile uint16_t x441 = 2U;
static int8_t x442 = 51;
int8_t x445 = INT8_MIN;
uint16_t x456 = 3586U;
volatile int32_t t98 = 18976496;
uint32_t x459 = 23157455U;


void f0(void) {
	volatile int64_t x1 = -225059929LL;
	volatile uint64_t x3 = UINT64_MAX;
	volatile int32_t t0 = -48;

	t0 = (x1==(x2%(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	static uint32_t x7 = 261175390U;
	uint64_t x8 = UINT64_MAX;
	static int32_t t1 = -845255;

	t1 = (x5==(x6%(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -31;
	volatile uint8_t x12 = UINT8_MAX;
	int32_t t2 = -31;

	t2 = (x9==(x10%(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static int64_t x18 = -8101452262393701LL;
	int32_t x19 = INT32_MIN;
	int32_t x20 = 6892397;

	t3 = (x17==(x18%(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = 366857983593020LL;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t4 = -11739;

	t4 = (x21==(x22%(x23+x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 46361070U;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -1443315LL;
	volatile int32_t t5 = 289669;

	t5 = (x25==(x26%(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	volatile int64_t x30 = INT64_MIN;
	int32_t t6 = -1366706;

	t6 = (x29==(x30%(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -14;
	static int16_t x35 = -4;
	uint64_t x36 = 829995292706099LLU;
	volatile int32_t t7 = -57;

	t7 = (x33==(x34%(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = 39;
	uint8_t x39 = 0U;
	int16_t x40 = INT16_MIN;

	t8 = (x37==(x38%(x39+x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	static int16_t x42 = -19;
	int32_t x43 = INT32_MIN;

	t9 = (x41==(x42%(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile int32_t x46 = 7969199;
	int16_t x47 = INT16_MAX;
	volatile int32_t t10 = -7;

	t10 = (x45==(x46%(x47+x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 1049386228U;
	uint8_t x50 = 50U;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = 819U;
	volatile int32_t t11 = -3;

	t11 = (x49==(x50%(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MIN;
	int64_t x60 = -1LL;

	t12 = (x57==(x58%(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = UINT16_MAX;
	uint64_t x63 = 551480192651663LLU;
	int8_t x64 = -1;

	t13 = (x61==(x62%(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = 450;
	uint16_t x66 = UINT16_MAX;
	uint16_t x67 = 3U;
	int64_t x68 = INT64_MIN;

	t14 = (x65==(x66%(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = 20U;
	int64_t x70 = INT64_MIN;
	static volatile int32_t x72 = INT32_MAX;
	static volatile int32_t t15 = -4813218;

	t15 = (x69==(x70%(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = -7325155LL;
	static int64_t x74 = -9537244LL;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 155U;
	volatile int32_t t16 = -23589298;

	t16 = (x73==(x74%(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x77 = UINT16_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t17 = -37976908;

	t17 = (x77==(x78%(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x82 = -966244365535829LL;
	static uint32_t x83 = UINT32_MAX;
	uint64_t x84 = 356209LLU;

	t18 = (x81==(x82%(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x85 = 1568612U;
	volatile uint32_t x86 = 106984U;
	static uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;

	t19 = (x85==(x86%(x87+x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 1415898LLU;
	uint16_t x94 = 4U;
	int8_t x95 = -1;
	int32_t x96 = 972;
	volatile int32_t t20 = -953851;

	t20 = (x93==(x94%(x95+x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 84U;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MAX;
	static int64_t x100 = -11LL;
	volatile int32_t t21 = -62;

	t21 = (x97==(x98%(x99+x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	volatile int8_t x102 = INT8_MIN;
	static int64_t x103 = INT64_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t22 = 991;

	t22 = (x101==(x102%(x103+x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	volatile int32_t x106 = -1;
	volatile int64_t x107 = -265970LL;
	int32_t x108 = 3502;
	volatile int32_t t23 = -1;

	t23 = (x105==(x106%(x107+x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 15960570LLU;
	int32_t x110 = INT32_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;

	t24 = (x109==(x110%(x111+x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 69979941188555879LLU;
	uint16_t x114 = UINT16_MAX;
	static int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;

	t25 = (x113==(x114%(x115+x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	static int32_t x118 = -20862621;
	static volatile uint8_t x119 = 3U;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t26 = 54891425;

	t26 = (x117==(x118%(x119+x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	static uint32_t x124 = UINT32_MAX;
	static volatile int32_t t27 = -1;

	t27 = (x121==(x122%(x123+x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 5U;
	static int32_t x130 = 296;
	int16_t x132 = -8;
	static volatile int32_t t28 = -244968065;

	t28 = (x129==(x130%(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x137 = 5LLU;
	volatile int16_t x138 = INT16_MIN;
	uint32_t x140 = 14U;
	static int32_t t29 = -2616436;

	t29 = (x137==(x138%(x139+x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x142 = 9685153U;
	uint8_t x143 = UINT8_MAX;
	uint32_t x144 = 856911U;

	t30 = (x141==(x142%(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = INT64_MAX;
	uint16_t x147 = 8U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t31 = 236653;

	t31 = (x145==(x146%(x147+x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = -1;
	int32_t t32 = -487;

	t32 = (x149==(x150%(x151+x152)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = 32563;
	int32_t x154 = INT32_MIN;
	static int16_t x155 = -2;
	int32_t t33 = 2;

	t33 = (x153==(x154%(x155+x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x158 = 8821U;
	int32_t x160 = INT32_MIN;
	int32_t t34 = 70079055;

	t34 = (x157==(x158%(x159+x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -640278;
	int32_t x162 = -1;
	uint8_t x164 = UINT8_MAX;

	t35 = (x161==(x162%(x163+x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MIN;
	static uint16_t x167 = 7U;
	int16_t x168 = INT16_MIN;
	int32_t t36 = 2253;

	t36 = (x165==(x166%(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 14U;
	volatile int32_t t37 = -7331477;

	t37 = (x169==(x170%(x171+x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 29946U;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t38 = 1;

	t38 = (x173==(x174%(x175+x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x177 = -1;
	uint8_t x178 = 18U;
	uint32_t x179 = 119373U;
	uint64_t x180 = 527207365077688015LLU;
	int32_t t39 = 21;

	t39 = (x177==(x178%(x179+x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = 2432445869249461997LL;
	volatile uint8_t x182 = 0U;
	int32_t x184 = INT32_MAX;
	int32_t t40 = 31;

	t40 = (x181==(x182%(x183+x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = 30;
	int8_t x188 = -17;
	int32_t t41 = 6900;

	t41 = (x185==(x186%(x187+x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MIN;
	int32_t x194 = 2963;
	volatile int32_t x195 = INT32_MIN;
	volatile int32_t t42 = -558100139;

	t42 = (x193==(x194%(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x201 = 13LLU;
	int16_t x202 = 949;
	static int32_t x203 = -1;
	int64_t x204 = INT64_MAX;
	int32_t t43 = 32;

	t43 = (x201==(x202%(x203+x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MAX;
	static int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;

	t44 = (x209==(x210%(x211+x212)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = 3U;
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 61U;
	uint32_t x216 = UINT32_MAX;
	int32_t t45 = -46851;

	t45 = (x213==(x214%(x215+x216)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -3683206649LL;
	int64_t x218 = INT64_MIN;
	int64_t x219 = 3778712301454LL;
	static volatile int32_t t46 = -1;

	t46 = (x217==(x218%(x219+x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -1;
	static int8_t x222 = INT8_MAX;
	volatile int32_t t47 = 30173;

	t47 = (x221==(x222%(x223+x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	static int16_t x228 = -1;
	volatile int32_t t48 = 235434024;

	t48 = (x225==(x226%(x227+x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = -1;
	volatile uint16_t x231 = UINT16_MAX;
	volatile int8_t x232 = INT8_MIN;
	int32_t t49 = -8237;

	t49 = (x229==(x230%(x231+x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x233 = 20U;
	int16_t x234 = INT16_MAX;
	uint8_t x235 = 1U;
	volatile int64_t x236 = 534716633781LL;
	volatile int32_t t50 = -448122;

	t50 = (x233==(x234%(x235+x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	static int32_t x239 = 2;
	static volatile int32_t x240 = -1243358;
	int32_t t51 = 806949;

	t51 = (x237==(x238%(x239+x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x243 = 29537U;
	uint16_t x244 = UINT16_MAX;
	static int32_t t52 = 1;

	t52 = (x241==(x242%(x243+x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 26U;
	volatile int32_t t53 = 19248;

	t53 = (x245==(x246%(x247+x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = 0U;
	int16_t x251 = INT16_MIN;
	static volatile uint8_t x252 = 20U;
	volatile int32_t t54 = 751;

	t54 = (x249==(x250%(x251+x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MAX;
	int32_t t55 = 893682752;

	t55 = (x253==(x254%(x255+x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x257 = 2U;
	volatile uint64_t x258 = 111LLU;
	uint32_t x259 = UINT32_MAX;

	t56 = (x257==(x258%(x259+x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MAX;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t57 = -1459911;

	t57 = (x261==(x262%(x263+x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t58 = -175961;

	t58 = (x265==(x266%(x267+x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = 45LL;
	int16_t x270 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t59 = -245660612;

	t59 = (x269==(x270%(x271+x272)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = 782U;
	uint64_t x274 = 16683999275LLU;
	int8_t x275 = 6;
	volatile int32_t t60 = -233;

	t60 = (x273==(x274%(x275+x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = INT64_MAX;
	int64_t x278 = INT64_MAX;
	static int8_t x280 = INT8_MIN;
	int32_t t61 = 308837522;

	t61 = (x277==(x278%(x279+x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -53067885423093307LL;
	uint64_t x282 = 2LLU;
	int8_t x283 = -1;
	int16_t x284 = -1;

	t62 = (x281==(x282%(x283+x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x289 = -1LL;
	static int64_t x290 = INT64_MIN;
	volatile int32_t x291 = -1;
	volatile uint16_t x292 = 15U;

	t63 = (x289==(x290%(x291+x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x293 = -766;
	volatile int32_t x294 = 467;
	volatile uint32_t x295 = 3039U;
	int32_t x296 = 50;
	volatile int32_t t64 = 309619;

	t64 = (x293==(x294%(x295+x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 31U;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = 4U;
	int64_t x304 = -1LL;
	volatile int32_t t65 = 32354879;

	t65 = (x301==(x302%(x303+x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = INT32_MAX;
	int64_t x306 = 3793958682LL;
	int8_t x307 = -1;
	int32_t t66 = 151514594;

	t66 = (x305==(x306%(x307+x308)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = 29699U;
	volatile int32_t t67 = -1656141;

	t67 = (x309==(x310%(x311+x312)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x322 = 16LLU;
	static int8_t x323 = -4;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t68 = -155428205;

	t68 = (x321==(x322%(x323+x324)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x326 = -1;
	static int16_t x327 = 2;
	uint16_t x328 = 1465U;
	int32_t t69 = 0;

	t69 = (x325==(x326%(x327+x328)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x330 = INT8_MIN;
	static int64_t x331 = -5LL;
	uint8_t x332 = UINT8_MAX;
	int32_t t70 = -9797894;

	t70 = (x329==(x330%(x331+x332)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 116U;
	int32_t t71 = -1194382;

	t71 = (x333==(x334%(x335+x336)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = -1;
	volatile int8_t x339 = INT8_MIN;
	static int64_t x340 = -1LL;
	volatile int32_t t72 = 14375739;

	t72 = (x337==(x338%(x339+x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = 1987;
	uint32_t x342 = 67U;
	uint64_t x343 = 10744821955LLU;
	int8_t x344 = INT8_MIN;
	volatile int32_t t73 = 1;

	t73 = (x341==(x342%(x343+x344)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = UINT8_MAX;
	static int32_t x346 = -3454;
	volatile uint16_t x347 = UINT16_MAX;
	volatile uint64_t x348 = 34137136275LLU;
	volatile int32_t t74 = 2;

	t74 = (x345==(x346%(x347+x348)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	volatile int16_t x355 = -7884;
	volatile int32_t t75 = 5;

	t75 = (x353==(x354%(x355+x356)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	static int32_t t76 = 52003499;

	t76 = (x357==(x358%(x359+x360)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x361 = -1;
	int32_t x362 = 1;
	int16_t x363 = -2;
	int8_t x364 = INT8_MIN;
	int32_t t77 = 126242215;

	t77 = (x361==(x362%(x363+x364)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x365 = -12693;
	static int8_t x366 = INT8_MAX;
	volatile int64_t x367 = -1LL;
	int8_t x368 = INT8_MIN;
	static int32_t t78 = 2;

	t78 = (x365==(x366%(x367+x368)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = -7279877;
	static volatile int64_t x370 = -1LL;
	static int32_t x371 = 19;
	int8_t x372 = INT8_MAX;
	static int32_t t79 = -42663003;

	t79 = (x369==(x370%(x371+x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 80U;
	uint16_t x374 = UINT16_MAX;
	int32_t x375 = -325840;
	int64_t x376 = -1LL;
	volatile int32_t t80 = -35455;

	t80 = (x373==(x374%(x375+x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = -8;
	uint16_t x382 = 2109U;
	volatile int8_t x384 = -5;
	volatile int32_t t81 = 947;

	t81 = (x381==(x382%(x383+x384)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x390 = -1;
	int32_t x391 = -6087;
	int16_t x392 = 170;
	volatile int32_t t82 = -659387;

	t82 = (x389==(x390%(x391+x392)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x393 = 114585;
	static int64_t x394 = INT64_MIN;

	t83 = (x393==(x394%(x395+x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x397 = 22832570480LLU;
	uint8_t x398 = 0U;
	int32_t t84 = -958;

	t84 = (x397==(x398%(x399+x400)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x404 = 6472639;
	int32_t t85 = 31858586;

	t85 = (x401==(x402%(x403+x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x405 = UINT8_MAX;
	int16_t x406 = -9894;
	int32_t x407 = -32;
	int32_t x408 = -7981820;

	t86 = (x405==(x406%(x407+x408)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x409 = 1U;
	int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	uint32_t x412 = UINT32_MAX;
	static volatile int32_t t87 = -666;

	t87 = (x409==(x410%(x411+x412)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x414 = 0;
	int32_t x415 = INT32_MAX;
	uint32_t x416 = 755U;
	volatile int32_t t88 = 6059;

	t88 = (x413==(x414%(x415+x416)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MIN;
	static volatile uint32_t x418 = 368202181U;
	int64_t x419 = INT64_MIN;
	uint32_t x420 = 7U;

	t89 = (x417==(x418%(x419+x420)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x421 = -1LL;
	uint64_t x422 = 127781040317859893LLU;
	static int16_t x423 = -1;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t90 = 1;

	t90 = (x421==(x422%(x423+x424)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = 11709U;
	static int16_t x426 = 24;
	int64_t x427 = -33839870115841726LL;
	int64_t x428 = -1LL;
	volatile int32_t t91 = -17058;

	t91 = (x425==(x426%(x427+x428)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = 801;
	static int64_t x430 = -206872387LL;
	int8_t x431 = 0;
	uint16_t x432 = 3884U;
	volatile int32_t t92 = -30733;

	t92 = (x429==(x430%(x431+x432)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x433 = 8441177U;
	static int32_t x434 = 18580;
	int32_t x435 = -610;
	static int32_t x436 = -1;
	volatile int32_t t93 = -2931241;

	t93 = (x433==(x434%(x435+x436)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x438 = UINT8_MAX;
	static uint8_t x439 = 60U;
	static uint32_t x440 = 3774377U;
	volatile int32_t t94 = -51679129;

	t94 = (x437==(x438%(x439+x440)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x443 = -1412113;
	int8_t x444 = 1;
	static int32_t t95 = -24;

	t95 = (x441==(x442%(x443+x444)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x446 = INT64_MAX;
	uint16_t x447 = UINT16_MAX;
	static int64_t x448 = INT64_MIN;
	int32_t t96 = -7613711;

	t96 = (x445==(x446%(x447+x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = INT16_MIN;
	int32_t x450 = INT32_MIN;
	int16_t x451 = 2853;
	volatile int64_t x452 = -1LL;
	volatile int32_t t97 = 715;

	t97 = (x449==(x450%(x451+x452)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = 4663;
	int64_t x455 = 2848797595LL;

	t98 = (x453==(x454%(x455+x456)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = INT32_MIN;
	uint16_t x458 = UINT16_MAX;
	int16_t x460 = INT16_MIN;
	int32_t t99 = -20787;

	t99 = (x457==(x458%(x459+x460)));

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

