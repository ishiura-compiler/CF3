#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x11 = 8U;
volatile int64_t t2 = 20787LL;
volatile int8_t x21 = INT8_MAX;
uint64_t x24 = UINT64_MAX;
static volatile uint64_t x28 = 14LLU;
volatile uint64_t t6 = 690154944263033677LLU;
volatile uint64_t t8 = 51611645995130867LLU;
uint64_t x38 = 536720911181878198LLU;
int64_t x39 = -1LL;
volatile int64_t t12 = 163847858963576595LL;
int32_t x53 = INT32_MAX;
volatile int32_t t13 = 334;
static uint16_t x57 = 249U;
uint32_t x58 = UINT32_MAX;
int8_t x60 = INT8_MIN;
int64_t x65 = INT64_MIN;
int16_t x72 = INT16_MIN;
uint32_t t17 = 5U;
int32_t t18 = -104892;
int8_t x85 = INT8_MAX;
uint16_t x88 = 112U;
static int64_t x89 = -1LL;
static uint64_t t21 = 108034959433282490LLU;
volatile int16_t x99 = 93;
int16_t x102 = INT16_MAX;
int32_t x110 = INT32_MIN;
static int8_t x116 = -8;
int32_t x118 = INT32_MIN;
static uint32_t x124 = UINT32_MAX;
static volatile uint16_t x126 = 1U;
int32_t x130 = -1;
uint16_t x131 = UINT16_MAX;
uint16_t x136 = 4U;
uint8_t x137 = 3U;
static uint16_t x149 = UINT16_MAX;
int8_t x155 = INT8_MIN;
volatile uint32_t t37 = 819020U;
int16_t x159 = -55;
int8_t x172 = 7;
int64_t x177 = INT64_MIN;
static int64_t t42 = 36672LL;
static int64_t t45 = 408947039LL;
volatile int64_t x193 = INT64_MAX;
int64_t t46 = -130222LL;
volatile int16_t x197 = -62;
int32_t x198 = 0;
int64_t x204 = 4LL;
int16_t x206 = 2467;
int8_t x207 = 1;
int32_t x218 = INT32_MIN;
volatile int8_t x219 = 1;
int32_t t50 = -1308283;
volatile int32_t t53 = 4;
int64_t t55 = 120LL;
volatile int64_t t56 = 8913016953180168LL;
int32_t x245 = INT32_MAX;
static volatile int32_t x250 = -1;
int32_t x251 = INT32_MIN;
uint16_t x252 = UINT16_MAX;
static int16_t x253 = INT16_MIN;
int64_t x257 = INT64_MIN;
static volatile int32_t x258 = -1;
int32_t x259 = INT32_MIN;
static int32_t x260 = INT32_MIN;
int16_t x264 = -45;
static int32_t x268 = INT32_MIN;
volatile int8_t x269 = -19;
int8_t x270 = -1;
int32_t x274 = INT32_MAX;
int8_t x275 = INT8_MIN;
static volatile int32_t t64 = -9289;
int64_t t65 = 5826561271485LL;
static int64_t x284 = -1LL;
static uint64_t t67 = 9LLU;
int64_t x291 = -1LL;
int64_t t68 = -697258249246151LL;
uint8_t x294 = UINT8_MAX;
uint16_t x301 = 0U;
volatile int32_t t71 = 75;
uint8_t x308 = 13U;
uint32_t x313 = 78U;
int16_t x318 = -3;
int32_t x327 = 215274;
int16_t x329 = -1;
uint32_t x331 = UINT32_MAX;
uint32_t t78 = 6746945U;
int64_t x337 = INT64_MIN;
static uint32_t x338 = UINT32_MAX;
uint64_t x347 = UINT64_MAX;
int16_t x349 = INT16_MIN;
uint32_t x366 = UINT32_MAX;
int32_t x367 = INT32_MAX;
int32_t x368 = 3756;
volatile uint8_t x370 = UINT8_MAX;
static int64_t x372 = INT64_MAX;
static int16_t x379 = 21;
static int16_t x380 = INT16_MIN;
volatile uint64_t t90 = 2715014115129LLU;
volatile uint8_t x381 = 1U;
static int8_t x384 = INT8_MAX;
int16_t x389 = -1;
int16_t x395 = INT16_MIN;
int8_t x405 = -1;
volatile uint32_t t95 = 0U;
int32_t x413 = INT32_MIN;
volatile int8_t x421 = 0;
int32_t t99 = 52161;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static uint16_t x2 = 14U;
	int64_t x3 = INT64_MIN;
	static int8_t x4 = INT8_MIN;
	int64_t t0 = 456805101652674LL;

	t0 = ((x1^(x2%x3))/x4);

	if (t0 != -16777215LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	static uint64_t x6 = 3060489927LLU;
	int64_t x7 = -65619687484911789LL;
	uint32_t x8 = 2U;
	uint64_t t1 = 123908394480LLU;

	t1 = ((x5^(x6%x7))/x8);

	if (t1 != 9223372035163795299LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int64_t x10 = 1LL;
	static int16_t x12 = INT16_MIN;

	t2 = ((x9^(x10%x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3119;
	uint64_t x14 = 7720771332266353483LLU;
	int8_t x15 = -1;
	uint8_t x16 = 51U;
	static uint64_t t3 = 7236338920611764548LLU;

	t3 = ((x13^(x14%x15))/x16);

	if (t3 != 210313191008690098LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 95U;
	static int16_t x18 = -1393;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -984655185;

	t4 = ((x17^(x18%x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	volatile uint64_t t5 = 879886512935099495LLU;

	t5 = ((x21^(x22%x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = 419U;

	t6 = ((x25^(x26%x27))/x28);

	if (t6 != 1317624576693539366LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static int8_t x30 = INT8_MIN;
	int8_t x31 = -2;
	int8_t x32 = -1;
	volatile int64_t t7 = -117225300704012LL;

	t7 = ((x29^(x30%x31))/x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 0LLU;
	static uint8_t x34 = 1U;
	volatile int16_t x35 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;

	t8 = ((x33^(x34%x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 964290LLU;

	t9 = ((x37^(x38%x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 373304U;
	uint16_t x43 = 838U;
	int32_t x44 = INT32_MIN;
	static volatile uint32_t t10 = 105678511U;

	t10 = ((x41^(x42%x43))/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MIN;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -62;

	t11 = ((x45^(x46%x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1LL;
	static int16_t x50 = -8;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = 9070U;

	t12 = ((x49^(x50%x51))/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -85230;
	volatile int8_t x55 = 7;
	volatile int16_t x56 = INT16_MAX;

	t13 = ((x53^(x54%x55))/x56);

	if (t13 != -65537) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x59 = 135352421913238982LLU;
	uint64_t t14 = 59746101LLU;

	t14 = ((x57^(x58%x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MAX;
	volatile int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;
	static volatile int64_t t15 = -417713LL;

	t15 = ((x61^(x62%x63))/x64);

	if (t15 != 16776960LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	int64_t t16 = 9LL;

	t16 = ((x65^(x66%x67))/x68);

	if (t16 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	uint32_t x70 = 11904U;
	uint16_t x71 = UINT16_MAX;

	t17 = ((x69^(x70%x71))/x72);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int16_t x75 = 427;
	static int32_t x76 = -1;

	t18 = ((x73^(x74%x75))/x76);

	if (t18 != -302) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 117U;
	static uint64_t x82 = 1LLU;
	uint32_t x83 = 2657U;
	static uint16_t x84 = UINT16_MAX;
	volatile uint64_t t19 = 217432LLU;

	t19 = ((x81^(x82%x83))/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x86 = 12U;
	int32_t x87 = INT32_MAX;
	int32_t t20 = -1;

	t20 = ((x85^(x86%x87))/x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = INT8_MIN;
	int32_t x91 = 75897;
	uint64_t x92 = 24625096784727LLU;

	t21 = ((x89^(x90%x91))/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = 0LLU;
	int16_t x94 = -1;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	uint64_t t22 = 15308450593078LLU;

	t22 = ((x93^(x94%x95))/x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 54703602209724LL;
	uint64_t x98 = 17081790LLU;
	volatile uint8_t x100 = UINT8_MAX;
	uint64_t t23 = 84LLU;

	t23 = ((x97^(x98%x99))/x100);

	if (t23 != 214523930234LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -301;
	uint32_t x103 = 38515U;
	static uint64_t x104 = 639781011415857LLU;
	uint64_t t24 = 33LLU;

	t24 = ((x101^(x102%x103))/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -21963091;
	int64_t x106 = -1795036946LL;
	volatile int32_t x107 = -1;
	uint16_t x108 = 9U;
	volatile int64_t t25 = -479532690LL;

	t25 = ((x105^(x106%x107))/x108);

	if (t25 != -2440343LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int8_t x111 = INT8_MIN;
	static int32_t x112 = 650442119;
	static volatile int32_t t26 = -5390;

	t26 = ((x109^(x110%x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = 1;
	static int64_t x114 = -76135063043LL;
	int16_t x115 = -3141;
	static int64_t t27 = -667582818867348114LL;

	t27 = ((x113^(x114%x115))/x116);

	if (t27 != 353LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 345035257LL;
	uint32_t x119 = 1U;
	int32_t x120 = -1;
	volatile int64_t t28 = -283929069962076326LL;

	t28 = ((x117^(x118%x119))/x120);

	if (t28 != -345035257LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	volatile uint32_t t29 = 42869096U;

	t29 = ((x121^(x122%x123))/x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	static volatile uint32_t x127 = UINT32_MAX;
	static uint32_t x128 = 694U;
	static volatile uint32_t t30 = 0U;

	t30 = ((x125^(x126%x127))/x128);

	if (t30 != 6188666U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = UINT8_MAX;
	uint8_t x132 = 12U;
	volatile int32_t t31 = 10509;

	t31 = ((x129^(x130%x131))/x132);

	if (t31 != -21) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 16709381543633797LLU;
	static volatile int8_t x134 = INT8_MIN;
	uint64_t x135 = 55886989719240LLU;
	static volatile uint64_t t32 = 1261655LLU;

	t32 = ((x133^(x134%x135))/x136);

	if (t32 != 4174097490264145LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = -1;
	volatile int64_t x139 = INT64_MIN;
	int64_t x140 = -66901694563025LL;
	static volatile int64_t t33 = -1070202573659502LL;

	t33 = ((x137^(x138%x139))/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = UINT8_MAX;
	int64_t x142 = INT64_MIN;
	volatile int8_t x143 = INT8_MAX;
	int64_t x144 = 811075790555975651LL;
	volatile int64_t t34 = -399LL;

	t34 = ((x141^(x142%x143))/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 3914042219LLU;
	uint32_t x146 = UINT32_MAX;
	static uint64_t x147 = UINT64_MAX;
	int16_t x148 = -1;
	volatile uint64_t t35 = 5023995812LLU;

	t35 = ((x145^(x146%x147))/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x150 = 0U;
	uint8_t x151 = 2U;
	int16_t x152 = INT16_MIN;
	int32_t t36 = -375526;

	t36 = ((x149^(x150%x151))/x152);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 7U;
	uint16_t x154 = UINT16_MAX;
	uint32_t x156 = 1619U;

	t37 = ((x153^(x154%x155))/x156);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x157 = INT8_MAX;
	static uint64_t x158 = 4LLU;
	volatile int32_t x160 = -221;
	static uint64_t t38 = 3280LLU;

	t38 = ((x157^(x158%x159))/x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = UINT32_MAX;
	uint64_t x163 = 2034LLU;
	uint64_t x164 = 33537LLU;
	static volatile uint64_t t39 = 1134462457LLU;

	t39 = ((x161^(x162%x163))/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 12;
	uint8_t x166 = 23U;
	int32_t x167 = 21485768;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t40 = -120704651;

	t40 = ((x165^(x166%x167))/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -385856393382799621LL;
	uint64_t t41 = 3346389336885469229LLU;

	t41 = ((x169^(x170%x171))/x172);

	if (t41 != 2580126811695248274LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;

	t42 = ((x177^(x178%x179))/x180);

	if (t42 != -4294967298LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = UINT64_MAX;
	volatile uint32_t x182 = 254U;
	static volatile int16_t x183 = INT16_MIN;
	volatile int32_t x184 = INT32_MIN;
	uint64_t t43 = 1LLU;

	t43 = ((x181^(x182%x183))/x184);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -2;
	volatile int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t44 = 343781923857248318LLU;

	t44 = ((x185^(x186%x187))/x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -959966LL;
	int64_t x190 = 86739LL;
	static int8_t x191 = INT8_MAX;
	int8_t x192 = -1;

	t45 = ((x189^(x190%x191))/x192);

	if (t45 != 959905LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x194 = 60U;
	int16_t x195 = INT16_MIN;
	volatile int64_t x196 = 679588680556693234LL;

	t46 = ((x193^(x194%x195))/x196);

	if (t46 != 13LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x199 = INT8_MAX;
	int64_t x200 = 3353779LL;
	int64_t t47 = 115218611199645436LL;

	t47 = ((x197^(x198%x199))/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = -31;
	uint32_t x202 = 743U;
	uint64_t x203 = 329631627724LLU;
	volatile uint64_t t48 = 364606866981034897LLU;

	t48 = ((x201^(x202%x203))/x204);

	if (t48 != 4611686018427387713LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = 1799;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = 101985572;

	t49 = ((x205^(x206%x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -1301;
	static int16_t x220 = INT16_MIN;

	t50 = ((x217^(x218%x219))/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	volatile int16_t x223 = -401;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t51 = 8301257524411211LLU;

	t51 = ((x221^(x222%x223))/x224);

	if (t51 != 72340172838076671LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x225 = 7147U;
	uint8_t x226 = 87U;
	static int16_t x227 = INT16_MIN;
	static int8_t x228 = INT8_MIN;
	static volatile uint32_t t52 = 1015118844U;

	t52 = ((x225^(x226%x227))/x228);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -6;
	static volatile int32_t x230 = INT32_MIN;
	uint8_t x231 = 2U;
	static int16_t x232 = -1;

	t53 = ((x229^(x230%x231))/x232);

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 8661904;
	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = 43U;
	volatile int8_t x236 = 3;
	volatile int32_t t54 = 6;

	t54 = ((x233^(x234%x235))/x236);

	if (t54 != 2887314) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x237 = UINT32_MAX;
	static volatile int16_t x238 = -61;
	static volatile int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;

	t55 = ((x237^(x238%x239))/x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	int32_t x244 = -733913000;

	t56 = ((x241^(x242%x243))/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x246 = INT16_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t57 = 46382U;

	t57 = ((x245^(x246%x247))/x248);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MAX;
	volatile int32_t t58 = 2165;

	t58 = ((x249^(x250%x251))/x252);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x254 = 4U;
	int64_t x255 = -440554LL;
	volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t59 = 1LLU;

	t59 = ((x253^(x254%x255))/x256);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t t60 = 183032504247450412LL;

	t60 = ((x257^(x258%x259))/x260);

	if (t60 != -4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 17U;
	int16_t x262 = -1;
	static uint16_t x263 = 2U;
	volatile int32_t t61 = -623441152;

	t61 = ((x261^(x262%x263))/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	static int32_t x266 = -1;
	int16_t x267 = 90;
	static volatile int64_t t62 = 2611LL;

	t62 = ((x265^(x266%x267))/x268);

	if (t62 != -4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x271 = INT16_MAX;
	volatile int64_t x272 = -1LL;
	static int64_t t63 = -111668253721163543LL;

	t63 = ((x269^(x270%x271))/x272);

	if (t63 != -18LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 266376589;
	int32_t x276 = 234;

	t64 = ((x273^(x274%x275))/x276);

	if (t64 != 1138361) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = 44572372LL;
	static int16_t x278 = 4;
	static int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MAX;

	t65 = ((x277^(x278%x279))/x280);

	if (t65 != 350963LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t x282 = 279214294;
	volatile uint32_t x283 = 6026208U;
	volatile int64_t t66 = -1335818478787619LL;

	t66 = ((x281^(x282%x283))/x284);

	if (t66 != 9223372036852767082LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	static int16_t x286 = INT16_MIN;
	static volatile int64_t x287 = -47LL;
	static uint64_t x288 = UINT64_MAX;

	t67 = ((x285^(x286%x287))/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1157908LL;
	uint16_t x290 = 11933U;
	uint32_t x292 = 3299165U;

	t68 = ((x289^(x290%x291))/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 2076646417U;
	int32_t x295 = INT32_MIN;
	static volatile int16_t x296 = -50;
	static uint32_t t69 = 1560U;

	t69 = ((x293^(x294%x295))/x296);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x299 = 13U;
	volatile int32_t x300 = INT32_MIN;
	uint32_t t70 = 1614792U;

	t70 = ((x297^(x298%x299))/x300);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = -1;
	int8_t x304 = INT8_MIN;

	t71 = ((x301^(x302%x303))/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = 12;
	uint32_t x306 = 28U;
	volatile int64_t x307 = INT64_MIN;
	int64_t t72 = -568742220709379LL;

	t72 = ((x305^(x306%x307))/x308);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 1U;
	int32_t x310 = INT32_MIN;
	static volatile int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	int64_t t73 = 3505097684589605LL;

	t73 = ((x309^(x310%x311))/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1LL;
	volatile uint16_t x316 = 12U;
	int64_t t74 = 12149262021406718LL;

	t74 = ((x313^(x314%x315))/x316);

	if (t74 != 6LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	uint32_t x319 = 765U;
	int32_t x320 = 1;
	static volatile uint32_t t75 = 709U;

	t75 = ((x317^(x318%x319))/x320);

	if (t75 != 4294967042U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -1LL;
	int64_t x322 = -3736LL;
	int32_t x323 = INT32_MIN;
	int16_t x324 = -1;
	volatile int64_t t76 = 2794481677265910208LL;

	t76 = ((x321^(x322%x323))/x324);

	if (t76 != -3735LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	static volatile uint64_t t77 = 28LLU;

	t77 = ((x325^(x326%x327))/x328);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x330 = 63;
	int32_t x332 = -3799;

	t78 = ((x329^(x330%x331))/x332);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	static int64_t x334 = INT64_MIN;
	static volatile int64_t x335 = INT64_MIN;
	static volatile int8_t x336 = INT8_MIN;
	static int64_t t79 = 394168306395LL;

	t79 = ((x333^(x334%x335))/x336);

	if (t79 != 16777216LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x339 = INT64_MIN;
	int16_t x340 = -1;
	volatile int64_t t80 = 3877309290LL;

	t80 = ((x337^(x338%x339))/x340);

	if (t80 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = UINT32_MAX;
	static int32_t x342 = INT32_MIN;
	uint8_t x343 = 11U;
	volatile uint64_t x344 = 6979516556338LLU;
	uint64_t t81 = 17913792971534150LLU;

	t81 = ((x341^(x342%x343))/x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -27;
	uint8_t x346 = UINT8_MAX;
	static int32_t x348 = INT32_MIN;
	volatile uint64_t t82 = 4343819300816LLU;

	t82 = ((x345^(x346%x347))/x348);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x350 = 12548;
	static uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t83 = 64761621240604433LLU;

	t83 = ((x349^(x350%x351))/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = 10525U;
	int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;
	static volatile uint32_t t84 = 116583425U;

	t84 = ((x353^(x354%x355))/x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	static int32_t x360 = INT32_MIN;
	static int32_t t85 = 118043;

	t85 = ((x357^(x358%x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	static uint32_t x363 = 839U;
	volatile int16_t x364 = INT16_MAX;
	int64_t t86 = 1988LL;

	t86 = ((x361^(x362%x363))/x364);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	uint32_t t87 = 419398U;

	t87 = ((x365^(x366%x367))/x368);

	if (t87 != 8U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x371 = 3;
	volatile int64_t t88 = -50103064876LL;

	t88 = ((x369^(x370%x371))/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = 100317;
	volatile int8_t x375 = INT8_MIN;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t89 = 0U;

	t89 = ((x373^(x374%x375))/x376);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 2LLU;
	int16_t x378 = INT16_MIN;

	t90 = ((x377^(x378%x379))/x380);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x382 = 1875U;
	uint32_t x383 = UINT32_MAX;
	volatile uint32_t t91 = 165U;

	t91 = ((x381^(x382%x383))/x384);

	if (t91 != 14U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x390 = 28555075U;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -1;
	static uint32_t t92 = 5791428U;

	t92 = ((x389^(x390%x391))/x392);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = -1111216;
	volatile int32_t x394 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t93 = 16;

	t93 = ((x393^(x394%x395))/x396);

	if (t93 != -4251) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -1;
	uint64_t x398 = 15512220225LLU;
	static volatile uint16_t x399 = 106U;
	int8_t x400 = 44;
	volatile uint64_t t94 = 464367076621233587LLU;

	t94 = ((x397^(x398%x399))/x400);

	if (t94 != 419244183493398899LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x406 = -1;
	uint8_t x407 = 3U;
	uint32_t x408 = UINT32_MAX;

	t95 = ((x405^(x406%x407))/x408);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = UINT64_MAX;
	static int64_t x410 = -1LL;
	int8_t x411 = -1;
	uint64_t x412 = 2020LLU;
	static volatile uint64_t t96 = 5688211161190406785LLU;

	t96 = ((x409^(x410%x411))/x412);

	if (t96 != 9132051521638391LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x414 = 3;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MAX;
	int64_t t97 = 47834863893014LL;

	t97 = ((x413^(x414%x415))/x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = -5;
	static uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = 16300U;
	int32_t x420 = INT32_MIN;
	volatile uint32_t t98 = 55U;

	t98 = ((x417^(x418%x419))/x420);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x422 = INT16_MAX;
	int16_t x423 = -10;
	volatile int16_t x424 = 1;

	t99 = ((x421^(x422%x423))/x424);

	if (t99 != 7) { NG(); } else { ; }
	
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

