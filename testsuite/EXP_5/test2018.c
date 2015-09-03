#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = -95707LL;
volatile int64_t t3 = -74LL;
uint8_t x20 = 0U;
uint8_t x30 = UINT8_MAX;
volatile int32_t x34 = -1;
static int32_t x39 = INT32_MAX;
int16_t x42 = INT16_MAX;
volatile uint64_t t10 = 1143363385831243LLU;
static volatile uint8_t x50 = 25U;
int32_t x58 = -1;
static volatile uint64_t t13 = 27047321LLU;
int16_t x65 = 61;
uint32_t x66 = UINT32_MAX;
int16_t x67 = -1587;
int16_t x72 = 0;
int64_t t16 = -1677558427923397LL;
uint16_t x77 = UINT16_MAX;
int8_t x79 = -1;
uint32_t x80 = 2519969U;
int64_t x86 = 111LL;
static uint8_t x93 = 56U;
int8_t x94 = -1;
volatile uint16_t x96 = UINT16_MAX;
volatile int32_t x115 = INT32_MIN;
volatile uint8_t x116 = 3U;
static int64_t x122 = -1825073607LL;
static int16_t x124 = -1;
int8_t x127 = INT8_MAX;
static uint32_t x147 = UINT32_MAX;
int32_t x150 = INT32_MIN;
static int32_t x167 = INT32_MIN;
int64_t x168 = -1LL;
volatile int64_t t33 = -7953761LL;
int32_t t38 = 8046;
int64_t x202 = INT64_MIN;
int8_t x203 = -1;
volatile int64_t t39 = -18LL;
volatile uint8_t x220 = 0U;
uint64_t t41 = 5984627208168LLU;
volatile int8_t x222 = 0;
volatile uint64_t t42 = 5144046LLU;
static int8_t x227 = 1;
int8_t x232 = INT8_MIN;
static int16_t x239 = INT16_MAX;
int8_t x246 = 0;
uint32_t x250 = 398U;
int32_t x257 = -21;
int8_t x258 = 0;
volatile uint32_t t49 = 2276994U;
int16_t x263 = 269;
static uint64_t x264 = 16903765536LLU;
uint64_t t51 = 15LLU;
uint64_t x273 = UINT64_MAX;
int64_t x284 = 484LL;
volatile int64_t t53 = -1LL;
int32_t x287 = -1;
int32_t t54 = 64698;
int8_t x291 = -2;
volatile int64_t t55 = -4365395LL;
volatile uint64_t t59 = 1492LLU;
uint32_t t60 = 279581U;
volatile int32_t x320 = -1;
static int64_t t61 = -82800649909LL;
int64_t x325 = -1LL;
uint8_t x350 = 1U;
static int32_t x351 = -1;
int64_t x356 = -1LL;
volatile uint16_t x365 = 141U;
int16_t x369 = INT16_MAX;
volatile uint32_t x374 = 114853036U;
uint64_t t72 = 31LLU;
uint64_t x385 = UINT64_MAX;
int32_t x393 = -1;
static uint8_t x406 = UINT8_MAX;
int8_t x409 = INT8_MAX;
static volatile uint16_t x410 = UINT16_MAX;
static int8_t x417 = 1;
uint16_t x419 = 70U;
int8_t x430 = INT8_MIN;
int64_t x434 = -1LL;
static int16_t x436 = INT16_MIN;
static volatile int64_t t85 = -78LL;
static uint64_t x439 = UINT64_MAX;
uint16_t x440 = UINT16_MAX;
static uint64_t t86 = 44108LLU;
volatile uint64_t x442 = UINT64_MAX;
int32_t t88 = 36552109;
uint16_t x450 = UINT16_MAX;
int64_t t89 = 241557275507817LL;
static int16_t x453 = -2046;
static uint16_t x456 = 891U;
volatile int64_t x475 = 77798267LL;
static uint32_t x477 = 3127780U;
uint16_t x479 = UINT16_MAX;
int8_t x482 = INT8_MIN;
uint8_t x483 = UINT8_MAX;
uint64_t x487 = UINT64_MAX;
volatile uint32_t x496 = 33214292U;
uint32_t t97 = 147U;
static volatile int32_t x498 = INT32_MAX;
int8_t x500 = INT8_MIN;
static volatile uint16_t x504 = 1U;
volatile int64_t t99 = -17825198716543LL;


void f0(void) {
	int32_t x1 = 0;
	uint8_t x2 = UINT8_MAX;
	static int64_t x3 = -6818260988601051LL;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = 1LL;

	t0 = (x1*((x2|x3)^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = INT16_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	volatile int8_t x8 = -1;
	volatile int32_t t1 = 74905;

	t1 = (x5*((x6|x7)^x8));

	if (t1 != -32512) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	static uint16_t x11 = 395U;
	uint16_t x12 = UINT16_MAX;
	int64_t t2 = -144LL;

	t2 = (x9*((x10|x11)^x12));

	if (t2 != -6223251968LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 11904U;
	static int64_t x14 = -2823258LL;
	volatile int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MAX;

	t3 = (x13*((x14|x15)^x16));

	if (t3 != -328062336LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int16_t x18 = -4756;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t t4 = 2480LL;

	t4 = (x17*((x18|x19)^x20));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	int32_t x26 = INT32_MAX;
	static volatile int8_t x27 = INT8_MIN;
	static int32_t x28 = -1;
	static int32_t t5 = -11686108;

	t5 = (x25*((x26|x27)^x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 127083472413925LLU;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -1;
	static uint64_t t6 = 185LLU;

	t6 = (x29*((x30|x31)^x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	volatile int64_t x36 = -10749859LL;
	int64_t t7 = -143473LL;

	t7 = (x33*((x34|x35)^x36));

	if (t7 != -1375981824LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = INT16_MIN;
	volatile int16_t x38 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 0U;

	t8 = (x37*((x38|x39)^x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 5;
	volatile uint16_t x43 = 111U;
	uint8_t x44 = 17U;
	static int32_t t9 = 1;

	t9 = (x41*((x42|x43)^x44));

	if (t9 != 163750) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 451U;
	volatile uint64_t x46 = UINT64_MAX;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MAX;

	t10 = (x45*((x46|x47)^x48));

	if (t10 != 18446744073694773248LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = 1;
	int16_t x51 = -1;
	static volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = -6496051;

	t11 = (x49*((x50|x51)^x52));

	if (t11 != -65536) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 246U;
	static uint32_t x54 = 16U;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 6U;
	static volatile uint32_t t12 = 120733055U;

	t12 = (x53*((x54|x55)^x56));

	if (t12 != 61254U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint16_t x59 = 782U;
	static uint64_t x60 = 42165LLU;

	t13 = (x57*((x58|x59)^x60));

	if (t13 != 18446744073698799286LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t14 = 1170LLU;

	t14 = (x65*((x66|x67)^x68));

	if (t14 != 18446743811716546560LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	uint16_t x70 = 2U;
	int16_t x71 = -15;
	int64_t t15 = -472203398439532270LL;

	t15 = (x69*((x70|x71)^x72));

	if (t15 != 13LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MAX;
	uint32_t x76 = 3299992U;

	t16 = (x73*((x74|x75)^x76));

	if (t16 != 3299993LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = -1;
	uint32_t t17 = 55998U;

	t17 = (x77*((x78|x79)^x80));

	if (t17 != 2357490594U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 184U;
	static uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MAX;
	volatile uint16_t x84 = UINT16_MAX;
	volatile uint32_t t18 = 7U;

	t18 = (x81*((x82|x83)^x84));

	if (t18 != 12011520U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	int16_t x87 = 1;
	volatile int16_t x88 = -3240;
	int64_t t19 = 11862590545LL;

	t19 = (x85*((x86|x87)^x88));

	if (t19 != 7028713979904LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x95 = 300966400890674057LL;
	int64_t t20 = -2704312726965819LL;

	t20 = (x93*((x94|x95)^x96));

	if (t20 != -3670016LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = -2944;
	int64_t x103 = -141328577603LL;
	uint64_t x104 = 472420815535LLU;
	volatile uint64_t t21 = 5038792915LLU;

	t21 = (x101*((x102|x103)^x104));

	if (t21 != 472420815598LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = INT32_MIN;
	static int8_t x106 = -1;
	static int64_t x107 = -1LL;
	int64_t x108 = -1LL;
	static volatile int64_t t22 = -1LL;

	t22 = (x105*((x106|x107)^x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	int32_t t23 = -3435;

	t23 = (x113*((x114|x115)^x116));

	if (t23 != 16000) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MAX;
	int64_t x123 = INT64_MIN;
	static int64_t t24 = 15LL;

	t24 = (x121*((x122|x123)^x124));

	if (t24 != 3919315723456321082LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	int64_t t25 = -126642588855847LL;

	t25 = (x125*((x126|x127)^x128));

	if (t25 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = -7;
	int32_t t26 = -94577;

	t26 = (x129*((x130|x131)^x132));

	if (t26 != -6) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x133 = 1U;
	volatile int32_t x134 = -1;
	volatile uint64_t x135 = UINT64_MAX;
	static int16_t x136 = 66;
	uint64_t t27 = 539252838754LLU;

	t27 = (x133*((x134|x135)^x136));

	if (t27 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 452482LLU;
	int32_t x138 = -62997044;
	uint8_t x139 = 1U;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t28 = 2405742921477793LLU;

	t28 = (x137*((x138|x139)^x140));

	if (t28 != 18446715568681540890LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x146 = 6U;
	int32_t x148 = 217596;
	volatile uint32_t t29 = 1712652U;

	t29 = (x145*((x146|x147)^x148));

	if (t29 != 2835251200U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x149 = 483619597U;
	uint32_t x151 = 894371020U;
	int64_t x152 = -124313526LL;
	int64_t t30 = -89962983LL;

	t30 = (x149*((x150|x151)^x152));

	if (t30 != -1445517956358075186LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = -6902;
	static uint64_t x154 = 283511214612784667LLU;
	int16_t x155 = 0;
	int64_t x156 = -1LL;
	volatile uint64_t t31 = 1844619998047LLU;

	t31 = (x153*((x154|x155)^x156));

	if (t31 != 1439531444227307240LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = 0;
	volatile uint64_t x158 = 194093622LLU;
	int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t32 = 194278193533843483LLU;

	t32 = (x157*((x158|x159)^x160));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x165 = INT16_MAX;
	static int32_t x166 = INT32_MAX;

	t33 = (x165*((x166|x167)^x168));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x169 = -1LL;
	static uint8_t x170 = 3U;
	volatile int16_t x171 = INT16_MIN;
	static int16_t x172 = -7;
	static volatile int64_t t34 = -2394172358773LL;

	t34 = (x169*((x170|x171)^x172));

	if (t34 != -32762LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = -17569846241LL;
	int8_t x174 = INT8_MIN;
	static volatile int16_t x175 = -1;
	int16_t x176 = -2120;
	volatile int64_t t35 = 157LL;

	t35 = (x173*((x174|x175)^x176));

	if (t35 != -37230504184679LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = INT16_MIN;
	uint32_t x178 = 4587U;
	static uint16_t x179 = 1U;
	volatile uint64_t x180 = 190LLU;
	volatile uint64_t t36 = 258586LLU;

	t36 = (x177*((x178|x179)^x180));

	if (t36 != 18446744073564160000LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = -1;
	uint8_t x184 = 0U;
	int32_t t37 = 0;

	t37 = (x181*((x182|x183)^x184));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	static int8_t x199 = -1;
	int16_t x200 = -1;

	t38 = (x197*((x198|x199)^x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MAX;
	volatile int16_t x204 = INT16_MAX;

	t39 = (x201*((x202|x203)^x204));

	if (t39 != -1073709056LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MIN;
	static uint16_t x207 = 25803U;
	static int16_t x208 = 0;
	int32_t t40 = -244;

	t40 = (x205*((x206|x207)^x208));

	if (t40 != 1736704) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = 347168815480001LL;
	uint64_t x218 = 24152714LLU;
	int16_t x219 = 50;

	t41 = (x217*((x218|x219)^x220));

	if (t41 != 10263964646243479098LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MAX;
	static int64_t x223 = 151546961LL;
	uint64_t x224 = 6224055729711LLU;

	t42 = (x221*((x222|x223)^x224));

	if (t42 != 790474317114498LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x225 = 8787;
	int32_t x226 = -1;
	uint16_t x228 = 5U;
	int32_t t43 = -140279;

	t43 = (x225*((x226|x227)^x228));

	if (t43 != -52722) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x229 = 58;
	uint16_t x230 = 5437U;
	static int16_t x231 = INT16_MAX;
	static volatile int32_t t44 = 4;

	t44 = (x229*((x230|x231)^x232));

	if (t44 != -1893178) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x233 = 36552894355LLU;
	int64_t x234 = INT64_MIN;
	int32_t x235 = 252557;
	static int64_t x236 = -77LL;
	uint64_t t45 = 9LLU;

	t45 = (x233*((x234|x235)^x236));

	if (t45 != 9214138410211759258LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x237 = 16U;
	volatile int8_t x238 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t46 = 11311265;

	t46 = (x237*((x238|x239)^x240));

	if (t46 != -16) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x245 = 1LLU;
	static int64_t x247 = -284LL;
	volatile int32_t x248 = 1;
	volatile uint64_t t47 = 486717613085220LLU;

	t47 = (x245*((x246|x247)^x248));

	if (t47 != 18446744073709551333LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x249 = INT8_MIN;
	int32_t x251 = -1024997395;
	int32_t x252 = INT32_MAX;
	volatile uint32_t t48 = 1896058U;

	t48 = (x249*((x250|x251)^x252));

	if (t48 != 1944320000U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x259 = 268628912U;
	volatile int16_t x260 = 1063;

	t49 = (x257*((x258|x259)^x260));

	if (t49 != 2948706461U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MAX;
	static uint64_t t50 = 2235470702335LLU;

	t50 = (x261*((x262|x263)^x264));

	if (t50 != 2163681988736LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x265 = 180LLU;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;
	int32_t x268 = -107;

	t51 = (x265*((x266|x267)^x268));

	if (t51 != 19080LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x274 = INT32_MIN;
	volatile int32_t x275 = INT32_MAX;
	int32_t x276 = INT32_MAX;
	uint64_t t52 = 6533556444LLU;

	t52 = (x273*((x274|x275)^x276));

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x281 = 24426649700LL;
	int16_t x282 = INT16_MIN;
	int64_t x283 = 6159217478LL;

	t53 = (x281*((x282|x283)^x284));

	if (t53 != -483794223958200LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x285 = -44855;
	volatile uint16_t x286 = 4591U;
	uint16_t x288 = 168U;

	t54 = (x285*((x286|x287)^x288));

	if (t54 != 7580495) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int16_t x292 = INT16_MIN;

	t55 = (x289*((x290|x291)^x292));

	if (t55 != -32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MAX;
	uint64_t x295 = 195026016LLU;
	static uint64_t x296 = UINT64_MAX;
	volatile uint64_t t56 = 39782964732525876LLU;

	t56 = (x293*((x294|x295)^x296));

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x297 = UINT32_MAX;
	volatile int16_t x298 = -977;
	static int64_t x299 = -1LL;
	volatile int16_t x300 = 994;
	static volatile int64_t t57 = -2LL;

	t57 = (x297*((x298|x299)^x300));

	if (t57 != -4273492458525LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x301 = INT64_MIN;
	static volatile uint32_t x302 = 58871U;
	volatile uint16_t x303 = UINT16_MAX;
	uint64_t x304 = UINT64_MAX;
	uint64_t t58 = 358207LLU;

	t58 = (x301*((x302|x303)^x304));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = -1LL;
	static int64_t x310 = INT64_MIN;
	int32_t x311 = -1;
	uint64_t x312 = 1308620365815720880LLU;

	t59 = (x309*((x310|x311)^x312));

	if (t59 != 1308620365815720881LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x313 = 1;
	volatile uint32_t x314 = 1001U;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;

	t60 = (x313*((x314|x315)^x316));

	if (t60 != 4294901887U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x317 = INT32_MIN;
	static volatile int64_t x318 = -1LL;
	uint16_t x319 = UINT16_MAX;

	t61 = (x317*((x318|x319)^x320));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x326 = UINT8_MAX;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = -1;
	int64_t t62 = 1475286222LL;

	t62 = (x325*((x326|x327)^x328));

	if (t62 != -2147483392LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x329 = 303110617U;
	static volatile int64_t x330 = INT64_MAX;
	volatile int32_t x331 = INT32_MAX;
	static uint64_t x332 = 1013991080076053570LLU;
	static volatile uint64_t t63 = 4202481927LLU;

	t63 = (x329*((x330|x331)^x332));

	if (t63 != 6710802854008786997LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = 0U;
	volatile int32_t t64 = -1;

	t64 = (x337*((x338|x339)^x340));

	if (t64 != 4161664) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x349 = -1;
	volatile int16_t x352 = INT16_MIN;
	int32_t t65 = 3;

	t65 = (x349*((x350|x351)^x352));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x353 = -9215;
	int8_t x354 = -1;
	volatile int16_t x355 = -1;
	volatile int64_t t66 = -252LL;

	t66 = (x353*((x354|x355)^x356));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x357 = 1;
	int8_t x358 = 2;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t67 = 74156;

	t67 = (x357*((x358|x359)^x360));

	if (t67 != -65409) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x361 = INT8_MIN;
	static uint64_t x362 = 328537946718938015LLU;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1;
	uint64_t t68 = 43086344LLU;

	t68 = (x361*((x362|x363)^x364));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x366 = INT32_MIN;
	volatile uint32_t x367 = 25645U;
	volatile int64_t x368 = -1LL;
	int64_t t69 = 1087661774975LL;

	t69 = (x365*((x366|x367)^x368));

	if (t69 != -302798810454LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x370 = INT16_MIN;
	int16_t x371 = 81;
	int16_t x372 = INT16_MAX;
	int32_t t70 = 34886300;

	t70 = (x369*((x370|x371)^x372));

	if (t70 != -2686894) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x373 = 181U;
	int8_t x375 = 1;
	uint64_t x376 = 503560LLU;
	volatile uint64_t t71 = 1157341085731LLU;

	t71 = (x373*((x374|x375)^x376));

	if (t71 != 20867308457LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x381 = 874;
	uint64_t x382 = UINT64_MAX;
	volatile uint8_t x383 = 9U;
	int64_t x384 = -1LL;

	t72 = (x381*((x382|x383)^x384));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x386 = -27;
	int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t73 = 22149331375652LLU;

	t73 = (x385*((x386|x387)^x388));

	if (t73 != 32742LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	int64_t t74 = -1LL;

	t74 = (x389*((x390|x391)^x392));

	if (t74 != 549755813888LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x394 = INT16_MAX;
	uint8_t x395 = 2U;
	int16_t x396 = -1;
	volatile int32_t t75 = 1616;

	t75 = (x393*((x394|x395)^x396));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x397 = -1;
	volatile int8_t x398 = INT8_MIN;
	static volatile int16_t x399 = 5;
	int64_t x400 = 9LL;
	volatile int64_t t76 = 8720371LL;

	t76 = (x397*((x398|x399)^x400));

	if (t76 != 116LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x401 = -1;
	uint8_t x402 = 1U;
	uint8_t x403 = 0U;
	static uint16_t x404 = 292U;
	volatile int32_t t77 = 2663;

	t77 = (x401*((x402|x403)^x404));

	if (t77 != -293) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x405 = INT16_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	int8_t x408 = 52;
	int32_t t78 = -1;

	t78 = (x405*((x406|x407)^x408));

	if (t78 != -2145746944) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x411 = 16U;
	int32_t x412 = -1;
	volatile int32_t t79 = 0;

	t79 = (x409*((x410|x411)^x412));

	if (t79 != -8323072) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = -499LL;
	uint8_t x414 = 62U;
	int8_t x415 = INT8_MAX;
	uint32_t x416 = 3012294U;
	int64_t t80 = -256810359492721855LL;

	t80 = (x413*((x414|x415)^x416));

	if (t80 != -1503128219LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x418 = -1;
	int8_t x420 = -1;
	int32_t t81 = 435;

	t81 = (x417*((x418|x419)^x420));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x421 = 39U;
	int8_t x422 = 1;
	int64_t x423 = -3132LL;
	static int16_t x424 = -13;
	static volatile int64_t t82 = 1878LL;

	t82 = (x421*((x422|x423)^x424));

	if (t82 != 121914LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = -1;
	int64_t x426 = -1LL;
	static int32_t x427 = -18843770;
	static volatile int64_t x428 = -1LL;
	volatile int64_t t83 = -147976878036802LL;

	t83 = (x425*((x426|x427)^x428));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x429 = 3316349141LLU;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = UINT64_MAX;
	uint64_t t84 = 6LLU;

	t84 = (x429*((x430|x431)^x432));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x433 = 0U;
	int32_t x435 = 7892234;

	t85 = (x433*((x434|x435)^x436));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x437 = -1;
	int16_t x438 = -86;

	t86 = (x437*((x438|x439)^x440));

	if (t86 != 65536LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x441 = INT16_MIN;
	uint16_t x443 = 13U;
	int64_t x444 = INT64_MAX;
	volatile uint64_t t87 = 623842638LLU;

	t87 = (x441*((x442|x443)^x444));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x445 = 411U;
	int16_t x446 = -1;
	int32_t x447 = 149052;
	int16_t x448 = INT16_MIN;

	t88 = (x445*((x446|x447)^x448));

	if (t88 != 13467237) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = -3113412LL;
	int8_t x451 = -54;
	uint16_t x452 = UINT16_MAX;

	t89 = (x449*((x450|x451)^x452));

	if (t89 != 204040568832LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x454 = 779U;
	int8_t x455 = INT8_MIN;
	static volatile int32_t t90 = 160465;

	t90 = (x453*((x454|x455)^x456));

	if (t90 != 1604064) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x461 = -1;
	volatile uint8_t x462 = UINT8_MAX;
	volatile uint32_t x463 = 2U;
	volatile int8_t x464 = INT8_MIN;
	volatile uint32_t t91 = 398851571U;

	t91 = (x461*((x462|x463)^x464));

	if (t91 != 129U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x469 = UINT8_MAX;
	uint64_t x470 = UINT64_MAX;
	int32_t x471 = -1;
	int8_t x472 = INT8_MIN;
	uint64_t t92 = 9582200064619751LLU;

	t92 = (x469*((x470|x471)^x472));

	if (t92 != 32385LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x473 = 2U;
	uint64_t x474 = UINT64_MAX;
	int64_t x476 = -1LL;
	static volatile uint64_t t93 = 121852539586888120LLU;

	t93 = (x473*((x474|x475)^x476));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x478 = -96151LL;
	static int32_t x480 = INT32_MIN;
	volatile int64_t t94 = -966LL;

	t94 = (x477*((x478|x479)^x480));

	if (t94 != 6716651419223580LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x481 = 1539LLU;
	int64_t x484 = INT64_MIN;
	uint64_t t95 = 2145LLU;

	t95 = (x481*((x482|x483)^x484));

	if (t95 != 9223372036854774269LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = -1LL;
	int16_t x486 = INT16_MIN;
	int64_t x488 = INT64_MIN;
	static uint64_t t96 = 205642187LLU;

	t96 = (x485*((x486|x487)^x488));

	if (t96 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x493 = -1;
	int8_t x494 = INT8_MIN;
	int8_t x495 = 3;

	t97 = (x493*((x494|x495)^x496));

	if (t97 != 33214249U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x497 = 0U;
	static uint32_t x499 = 0U;
	volatile uint32_t t98 = 42U;

	t98 = (x497*((x498|x499)^x500));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x501 = -157;
	int64_t x502 = 1081883529LL;
	uint16_t x503 = UINT16_MAX;

	t99 = (x501*((x502|x503)^x504));

	if (t99 != -169863610054LL) { NG(); } else { ; }
	
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

