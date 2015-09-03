#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = UINT16_MAX;
int64_t x3 = -435193093363038LL;
int8_t x11 = INT8_MAX;
uint64_t x12 = 30136LLU;
int32_t x18 = -75675;
int64_t x29 = -8374535740834LL;
int16_t x31 = 1165;
int8_t x33 = INT8_MIN;
int16_t x38 = INT16_MIN;
int32_t x40 = 12;
int64_t t8 = -65558146LL;
int32_t x48 = 17;
volatile int32_t x55 = INT32_MIN;
static int64_t t12 = -799698205LL;
volatile uint64_t t13 = 2LLU;
int16_t x65 = INT16_MIN;
int16_t x68 = INT16_MAX;
int16_t x73 = INT16_MIN;
int32_t x76 = 31248142;
uint64_t x77 = 6058018LLU;
static int8_t x85 = -1;
static uint8_t x91 = 0U;
static int64_t x95 = 11LL;
int8_t x106 = INT8_MIN;
static uint32_t x127 = 23942U;
uint8_t x138 = 0U;
volatile int64_t t29 = -56645881LL;
int8_t x142 = INT8_MAX;
int16_t x143 = -1;
int64_t x144 = INT64_MIN;
static uint32_t x161 = UINT32_MAX;
int64_t x165 = INT64_MAX;
int64_t x170 = INT64_MIN;
int8_t x172 = INT8_MIN;
int32_t x176 = INT32_MAX;
static int32_t t38 = 2855578;
static uint64_t x188 = 341LLU;
int32_t x192 = INT32_MIN;
int32_t x199 = 953;
int8_t x203 = 1;
volatile int64_t t45 = INT64_MAX;
int16_t x209 = INT16_MAX;
uint32_t x211 = UINT32_MAX;
uint64_t t47 = 1957734414LLU;
volatile int8_t x223 = INT8_MIN;
int8_t x231 = INT8_MIN;
int32_t t51 = 15978707;
int16_t x237 = -2;
int64_t x243 = INT64_MAX;
uint16_t x248 = 1987U;
uint64_t t54 = 17712157680885778LLU;
int8_t x252 = INT8_MIN;
int8_t x255 = -3;
static int64_t x259 = INT64_MIN;
int64_t x260 = INT64_MAX;
int32_t x265 = INT32_MIN;
uint64_t t60 = 5913383798LLU;
int16_t x277 = INT16_MAX;
uint32_t t62 = 12781058U;
int64_t x284 = INT64_MIN;
uint16_t x290 = 4U;
uint32_t x291 = UINT32_MAX;
uint64_t x303 = 102066313LLU;
volatile uint64_t t68 = 10845235355170LLU;
uint64_t x307 = 2244977459644687074LLU;
int64_t x308 = 9184662711333490LL;
uint64_t t69 = 61767LLU;
int64_t t70 = 67631773247LL;
volatile int64_t x314 = INT64_MAX;
int32_t t74 = -10895;
volatile uint16_t x330 = 17U;
static int64_t x333 = INT64_MAX;
volatile int8_t x334 = -1;
static int16_t x335 = INT16_MIN;
int16_t x338 = INT16_MIN;
uint16_t x341 = UINT16_MAX;
static uint64_t x345 = 1709402398206588247LLU;
int32_t x352 = -91433143;
int64_t x354 = -1LL;
volatile uint64_t t82 = 129330LLU;
int64_t x370 = -460869835LL;
int64_t x380 = 1732722317139LL;
uint8_t x383 = 23U;
int64_t x389 = 104344844424LL;
int8_t x396 = -1;
uint16_t x397 = 1625U;
int64_t t90 = -3717347872634LL;
volatile int8_t x405 = INT8_MIN;
int16_t x408 = INT16_MIN;
int64_t t91 = 5620937390138736LL;
static uint64_t t92 = 989450891349754LLU;
int32_t t93 = 15122;
int8_t x418 = -3;
volatile uint32_t t94 = 274U;
int32_t x422 = 2;
uint16_t x431 = 636U;
int32_t x435 = -25360;
int32_t x436 = INT32_MIN;
static int8_t x440 = 9;
volatile uint32_t t99 = 1823595U;


void f0(void) {
	int8_t x2 = INT8_MIN;
	static uint16_t x4 = 1970U;
	volatile int64_t t0 = 834228647LL;

	t0 = (((x1|x2)-x3)-x4);

	if (t0 != 435193093361067LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 58U;
	uint16_t x6 = 466U;
	uint16_t x7 = 478U;
	int8_t x8 = 3;
	static int32_t t1 = 75667300;

	t1 = (((x5|x6)-x7)-x8);

	if (t1 != 25) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint8_t x10 = UINT8_MAX;
	uint64_t t2 = 93414063097LLU;

	t2 = (((x9|x10)-x11)-x12);

	if (t2 != 9223372036854745544LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile int32_t x14 = INT32_MIN;
	uint16_t x15 = 393U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 16379657713347LLU;

	t3 = (((x13|x14)-x15)-x16);

	if (t3 != 18446744073709518456LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x19 = INT16_MAX;
	static int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -955;

	t4 = (((x17|x18)-x19)-x20);

	if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = INT64_MIN;
	static int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = -7936243359LL;

	t5 = (((x25|x26)-x27)-x28);

	if (t5 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MIN;
	int8_t x32 = 0;
	int64_t t6 = 2658413LL;

	t6 = (((x29|x30)-x31)-x32);

	if (t6 != -8374535741999LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = 13U;
	int32_t x35 = INT32_MAX;
	static uint32_t x36 = 0U;
	volatile uint32_t t7 = 4U;

	t7 = (((x33|x34)-x35)-x36);

	if (t7 != 2147483534U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int64_t x39 = -235743LL;

	t8 = (((x37|x38)-x39)-x40);

	if (t8 != 202963LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 15U;
	uint16_t x42 = 24687U;
	int32_t x43 = INT32_MAX;
	uint32_t x44 = 9U;
	uint32_t t9 = 100011357U;

	t9 = (((x41|x42)-x43)-x44);

	if (t9 != 2147508327U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = 66749829;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 50526;
	int32_t t10 = 7;

	t10 = (((x45|x46)-x47)-x48);

	if (t10 != -81898) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -3;
	uint8_t x50 = 2U;
	uint64_t x51 = 30313700215737125LLU;
	int64_t x52 = INT64_MIN;
	uint64_t t11 = 2381939LLU;

	t11 = (((x49|x50)-x51)-x52);

	if (t11 != 9193058336639038682LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MAX;
	uint16_t x56 = 31U;

	t12 = (((x53|x54)-x55)-x56);

	if (t12 != -9223372034707292064LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	uint64_t x58 = 6031594010166299000LLU;
	int32_t x59 = -17960835;
	int8_t x60 = -1;

	t13 = (((x57|x58)-x59)-x60);

	if (t13 != 9223372036872736643LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 231502419U;
	static int64_t t14 = -366LL;

	t14 = (((x65|x66)-x67)-x68);

	if (t14 != -231567954LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	uint64_t x70 = 1805LLU;
	volatile int16_t x71 = INT16_MAX;
	static uint16_t x72 = 4U;
	static volatile uint64_t t15 = 335480959LLU;

	t15 = (((x69|x70)-x71)-x72);

	if (t15 != 18446744073709520764LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x74 = 8U;
	uint16_t x75 = 1U;
	volatile uint32_t t16 = 1479760U;

	t16 = (((x73|x74)-x75)-x76);

	if (t16 != 4263686393U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x78 = UINT64_MAX;
	int16_t x79 = INT16_MAX;
	uint32_t x80 = 89646U;
	uint64_t t17 = 2821515392762LLU;

	t17 = (((x77|x78)-x79)-x80);

	if (t17 != 18446744073709429202LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x86 = 220798845U;
	int32_t x87 = INT32_MIN;
	static int64_t x88 = INT64_MAX;
	static volatile int64_t t18 = -51232289595677079LL;

	t18 = (((x85|x86)-x87)-x88);

	if (t18 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	static int16_t x92 = INT16_MIN;
	int32_t t19 = 365;

	t19 = (((x89|x90)-x91)-x92);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -13345138LL;
	volatile int64_t x94 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	volatile int64_t t20 = -55872LL;

	t20 = (((x93|x94)-x95)-x96);

	if (t20 != 9223372036841430659LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = UINT64_MAX;
	int64_t x98 = 74781LL;
	static int8_t x99 = INT8_MIN;
	uint32_t x100 = UINT32_MAX;
	volatile uint64_t t21 = 65628322677045068LLU;

	t21 = (((x97|x98)-x99)-x100);

	if (t21 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = -96;
	static uint16_t x102 = 2053U;
	uint32_t x103 = 505U;
	uint64_t x104 = 963LLU;
	volatile uint64_t t22 = 188267753LLU;

	t22 = (((x101|x102)-x103)-x104);

	if (t22 != 4294965737LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x107 = 2947690689237830LLU;
	int16_t x108 = -1;
	static uint64_t t23 = 65734777257LLU;

	t23 = (((x105|x106)-x107)-x108);

	if (t23 != 18443796383020313659LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static int64_t x111 = -1LL;
	static int32_t x112 = -1;
	volatile int64_t t24 = -10426041213646437LL;

	t24 = (((x109|x110)-x111)-x112);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MAX;
	int8_t x114 = -1;
	uint32_t x115 = 5861378U;
	int64_t x116 = 1943LL;
	static volatile int64_t t25 = -725219629730815LL;

	t25 = (((x113|x114)-x115)-x116);

	if (t25 != 4289103974LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -37;
	static uint32_t x118 = UINT32_MAX;
	volatile int64_t x119 = -1LL;
	int8_t x120 = -1;
	int64_t t26 = -9414LL;

	t26 = (((x117|x118)-x119)-x120);

	if (t26 != 4294967297LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 4146289307LLU;
	int64_t x126 = 16906436006LL;
	int8_t x128 = 0;
	uint64_t t27 = 27334034541LLU;

	t27 = (((x125|x126)-x127)-x128);

	if (t27 != 17174864441LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	volatile int8_t x135 = INT8_MIN;
	int8_t x136 = -1;
	int64_t t28 = -490LL;

	t28 = (((x133|x134)-x135)-x136);

	if (t28 != 128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;

	t29 = (((x137|x138)-x139)-x140);

	if (t29 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int64_t t30 = 4266668111224259LL;

	t30 = (((x141|x142)-x143)-x144);

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x145 = 3U;
	int8_t x146 = 3;
	volatile int8_t x147 = INT8_MIN;
	static int64_t x148 = INT64_MAX;
	int64_t t31 = -4019983304767LL;

	t31 = (((x145|x146)-x147)-x148);

	if (t31 != -9223372036854775676LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	uint8_t x151 = 1U;
	int64_t x152 = 9823611197LL;
	int64_t t32 = 502203191419499LL;

	t32 = (((x149|x150)-x151)-x152);

	if (t32 != -9823611199LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = INT64_MAX;
	int64_t x158 = -50LL;
	int16_t x159 = INT16_MIN;
	int16_t x160 = -3360;
	int64_t t33 = 265208387530720LL;

	t33 = (((x157|x158)-x159)-x160);

	if (t33 != 36127LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x162 = INT8_MIN;
	int16_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	uint32_t t34 = 3992U;

	t34 = (((x161|x162)-x163)-x164);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x166 = 6187U;
	uint64_t x167 = 1024551867609031LLU;
	static int64_t x168 = INT64_MAX;
	uint64_t t35 = 203485886274783270LLU;

	t35 = (((x165|x166)-x167)-x168);

	if (t35 != 18445719521841942585LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x169 = 706U;
	int8_t x171 = INT8_MIN;
	static volatile int64_t t36 = -121296039LL;

	t36 = (((x169|x170)-x171)-x172);

	if (t36 != -9223372036854774846LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -115LL;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = 88U;
	int64_t t37 = 6LL;

	t37 = (((x173|x174)-x175)-x176);

	if (t37 != -2147483850LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 0;
	static int32_t x178 = -210305682;
	uint8_t x179 = 0U;
	volatile int16_t x180 = INT16_MAX;

	t38 = (((x177|x178)-x179)-x180);

	if (t38 != -210338449) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MAX;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	int64_t t39 = -292034843128548LL;

	t39 = (((x181|x182)-x183)-x184);

	if (t39 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	static int16_t x186 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	uint64_t t40 = 35155412805LLU;

	t40 = (((x185|x186)-x187)-x188);

	if (t40 != 18446744073709551275LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = 3950223669706681540LLU;
	static volatile int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -16144LL;
	static volatile uint64_t t41 = 1218137LLU;

	t41 = (((x189|x190)-x191)-x192);

	if (t41 != 2147494868LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 1U;
	int32_t x194 = INT32_MAX;
	int32_t x195 = 10048653;
	uint8_t x196 = 52U;
	static int32_t t42 = -88853646;

	t42 = (((x193|x194)-x195)-x196);

	if (t42 != 2137434942) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x197 = 4;
	int64_t x198 = -1LL;
	int8_t x200 = INT8_MAX;
	int64_t t43 = 122614LL;

	t43 = (((x197|x198)-x199)-x200);

	if (t43 != -1081LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MAX;
	int16_t x204 = 0;
	volatile int64_t t44 = -105152030231731145LL;

	t44 = (((x201|x202)-x203)-x204);

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	volatile int16_t x207 = 0;
	static int64_t x208 = INT64_MIN;

	t45 = (((x205|x206)-x207)-x208);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x210 = 58;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t46 = 37610040643LLU;

	t46 = (((x209|x210)-x211)-x212);

	if (t46 != 32769LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x217 = 54383936062535LLU;
	volatile int32_t x218 = INT32_MIN;
	uint16_t x219 = 192U;
	int16_t x220 = 35;

	t47 = (((x217|x218)-x219)-x220);

	if (t47 != 18446744072622228324LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = 251;
	uint8_t x222 = UINT8_MAX;
	volatile int8_t x224 = INT8_MIN;
	int32_t t48 = -465907497;

	t48 = (((x221|x222)-x223)-x224);

	if (t48 != 511) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = 108811U;
	uint32_t x226 = 122U;
	int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MAX;
	volatile uint32_t t49 = 89243495U;

	t49 = (((x225|x226)-x227)-x228);

	if (t49 != 43389U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = -1LL;
	int8_t x230 = -1;
	volatile int16_t x232 = INT16_MIN;
	volatile int64_t t50 = 5773LL;

	t50 = (((x229|x230)-x231)-x232);

	if (t50 != 32895LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MAX;
	uint8_t x234 = UINT8_MAX;
	uint16_t x235 = 122U;
	static int16_t x236 = INT16_MAX;

	t51 = (((x233|x234)-x235)-x236);

	if (t51 != -122) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x238 = 187U;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t52 = -3;

	t52 = (((x237|x238)-x239)-x240);

	if (t52 != 2147483392) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = -388LL;
	static volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t53 = 1721627995103023LLU;

	t53 = (((x241|x242)-x243)-x244);

	if (t53 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -10921;
	uint64_t x246 = 1780186LLU;
	static volatile int64_t x247 = -12285989138LL;

	t54 = (((x245|x246)-x247)-x248);

	if (t54 != 12285986606LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -76;
	int64_t x250 = INT64_MAX;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int64_t t55 = -5762313343432532LL;

	t55 = (((x249|x250)-x251)-x252);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = -1567;
	static volatile uint64_t x254 = 1LLU;
	int64_t x256 = INT64_MAX;
	uint64_t t56 = 28971657980395LLU;

	t56 = (((x253|x254)-x255)-x256);

	if (t56 != 9223372036854774245LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x257 = INT32_MIN;
	int8_t x258 = 44;
	static volatile int64_t t57 = -1LL;

	t57 = (((x257|x258)-x259)-x260);

	if (t57 != -2147483603LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x261 = INT64_MIN;
	uint64_t x262 = 546982735753408881LLU;
	static volatile int16_t x263 = 4;
	volatile uint8_t x264 = 1U;
	volatile uint64_t t58 = 53573007954637402LLU;

	t58 = (((x261|x262)-x263)-x264);

	if (t58 != 9770354772608184684LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	static uint32_t x268 = 118847U;
	volatile int64_t t59 = -53482475LL;

	t59 = (((x265|x266)-x267)-x268);

	if (t59 != -2147569727LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = 54808774835703LLU;
	int8_t x270 = INT8_MIN;
	static uint8_t x271 = 89U;
	static uint32_t x272 = 213U;

	t60 = (((x269|x270)-x271)-x272);

	if (t60 != 18446744073709551305LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = INT64_MIN;
	volatile uint8_t x274 = 14U;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 0;
	int64_t t61 = -1018740725LL;

	t61 = (((x273|x274)-x275)-x276);

	if (t61 != -9223372036854775666LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	static int32_t x280 = -1;

	t62 = (((x277|x278)-x279)-x280);

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x281 = -29224638516189LL;
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MAX;
	int64_t t63 = 388550235945LL;

	t63 = (((x281|x282)-x283)-x284);

	if (t63 != 9223342812216262528LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MAX;
	static int16_t x286 = 233;
	int32_t x287 = INT32_MAX;
	uint8_t x288 = UINT8_MAX;
	static int32_t t64 = 76;

	t64 = (((x285|x286)-x287)-x288);

	if (t64 != -255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 6U;
	int8_t x292 = 11;
	static volatile uint32_t t65 = 20073278U;

	t65 = (((x289|x290)-x291)-x292);

	if (t65 != 4294967292U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MAX;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = -1;
	int32_t t66 = -8485;

	t66 = (((x293|x294)-x295)-x296);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MAX;
	volatile uint8_t x300 = 1U;
	uint64_t t67 = 26LLU;

	t67 = (((x297|x298)-x299)-x300);

	if (t67 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint64_t x302 = UINT64_MAX;
	int8_t x304 = -58;

	t68 = (((x301|x302)-x303)-x304);

	if (t68 != 18446744073607485360LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 102244205U;
	uint32_t x306 = 12U;

	t69 = (((x305|x306)-x307)-x308);

	if (t69 != 16192581951455775257LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = 19;
	int64_t x310 = 537232022436LL;
	volatile int8_t x311 = -52;
	int64_t x312 = INT64_MAX;

	t70 = (((x309|x310)-x311)-x312);

	if (t70 != -9223371499622753300LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x313 = 6618379U;
	volatile int16_t x315 = INT16_MAX;
	uint32_t x316 = UINT32_MAX;
	int64_t t71 = -1115821LL;

	t71 = (((x313|x314)-x315)-x316);

	if (t71 != 9223372032559775745LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x317 = -1;
	static volatile int32_t x318 = -218;
	int8_t x319 = -21;
	uint64_t x320 = 732228875LLU;
	static uint64_t t72 = 4198290098607548243LLU;

	t72 = (((x317|x318)-x319)-x320);

	if (t72 != 18446744072977322761LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x321 = -1LL;
	static int8_t x322 = 1;
	volatile int8_t x323 = INT8_MAX;
	volatile uint64_t x324 = 7508491999154169332LLU;
	uint64_t t73 = 652282828172271288LLU;

	t73 = (((x321|x322)-x323)-x324);

	if (t73 != 10938252074555382156LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x325 = -1;
	static volatile int32_t x326 = INT32_MIN;
	int16_t x327 = -1;
	int8_t x328 = INT8_MAX;

	t74 = (((x325|x326)-x327)-x328);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x329 = 6050;
	uint32_t x331 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t75 = 20727246416LLU;

	t75 = (((x329|x330)-x331)-x332);

	if (t75 != 6069LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x336 = INT32_MIN;
	int64_t t76 = -1943478756LL;

	t76 = (((x333|x334)-x335)-x336);

	if (t76 != 2147516415LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MIN;
	static uint64_t t77 = 418510LLU;

	t77 = (((x337|x338)-x339)-x340);

	if (t77 != 9223372036854743296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x342 = 154;
	int8_t x343 = INT8_MAX;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t78 = -318;

	t78 = (((x341|x342)-x343)-x344);

	if (t78 != 98176) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x346 = 3U;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = UINT64_MAX;
	static uint64_t t79 = 2132583479LLU;

	t79 = (((x345|x346)-x347)-x348);

	if (t79 != 1709402396059104601LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = INT64_MIN;
	uint16_t x351 = 1489U;
	int64_t t80 = 420LL;

	t80 = (((x349|x350)-x351)-x352);

	if (t80 != -9223372032468376859LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 5543149110836LL;
	int64_t x355 = 107412407931720182LL;
	int32_t x356 = INT32_MAX;
	int64_t t81 = 232066473629020006LL;

	t81 = (((x353|x354)-x355)-x356);

	if (t81 != -107412410079203830LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = 717343159291395253LLU;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MAX;
	static int16_t x360 = -1;

	t82 = (((x357|x358)-x359)-x360);

	if (t82 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x369 = -1;
	uint32_t x371 = 474682U;
	int8_t x372 = INT8_MAX;
	int64_t t83 = 23685091LL;

	t83 = (((x369|x370)-x371)-x372);

	if (t83 != -474810LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MIN;
	static uint64_t x374 = 3825542105LLU;
	static uint8_t x375 = UINT8_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t84 = 103453225LLU;

	t84 = (((x373|x374)-x375)-x376);

	if (t84 != 18446744069414560475LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x377 = -636;
	int64_t x378 = INT64_MIN;
	int64_t x379 = 1210385629LL;
	int64_t t85 = 6LL;

	t85 = (((x377|x378)-x379)-x380);

	if (t85 != -1733932703404LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x381 = 81871567590916706LL;
	int32_t x382 = 2;
	uint16_t x384 = 108U;
	volatile int64_t t86 = 44855LL;

	t86 = (((x381|x382)-x383)-x384);

	if (t86 != 81871567590916575LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x390 = INT16_MIN;
	int32_t x391 = 338;
	uint16_t x392 = UINT16_MAX;
	volatile int64_t t87 = 5242325103165217LL;

	t87 = (((x389|x390)-x391)-x392);

	if (t87 != -67785LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = 25675117110540875LLU;
	int64_t x395 = INT64_MIN;
	static uint64_t t88 = 90873LLU;

	t88 = (((x393|x394)-x395)-x396);

	if (t88 != 9223372036854775756LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x398 = UINT8_MAX;
	static uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t89 = -1218824;

	t89 = (((x397|x398)-x399)-x400);

	if (t89 != -30976) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MIN;
	static int8_t x402 = INT8_MIN;
	int16_t x403 = -1;
	volatile int8_t x404 = INT8_MAX;

	t90 = (((x401|x402)-x403)-x404);

	if (t90 != -254LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x406 = 17150068741936378LL;
	int8_t x407 = -5;

	t91 = (((x405|x406)-x407)-x408);

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int64_t x410 = -1LL;
	volatile int8_t x411 = 2;
	static uint8_t x412 = UINT8_MAX;

	t92 = (((x409|x410)-x411)-x412);

	if (t92 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 29U;
	int16_t x414 = -1;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;

	t93 = (((x413|x414)-x415)-x416);

	if (t93 != 2147483392) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = -1;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -1;

	t94 = (((x417|x418)-x419)-x420);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = -10;
	uint32_t x423 = 1021448U;
	int8_t x424 = INT8_MIN;
	volatile uint32_t t95 = 572374725U;

	t95 = (((x421|x422)-x423)-x424);

	if (t95 != 4293945966U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = INT64_MAX;
	int64_t x430 = -1LL;
	static uint8_t x432 = UINT8_MAX;
	volatile int64_t t96 = -13230672LL;

	t96 = (((x429|x430)-x431)-x432);

	if (t96 != -892LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x433 = 1U;
	int32_t x434 = -19155531;
	int32_t t97 = -90;

	t97 = (((x433|x434)-x435)-x436);

	if (t97 != 2128353477) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -41881LL;
	static int32_t x438 = -38;
	int8_t x439 = 0;
	volatile int64_t t98 = -982096LL;

	t98 = (((x437|x438)-x439)-x440);

	if (t98 != -10LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 18U;
	static volatile uint16_t x442 = 10U;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = 32791102U;

	t99 = (((x441|x442)-x443)-x444);

	if (t99 != 4262208988U) { NG(); } else { ; }
	
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

