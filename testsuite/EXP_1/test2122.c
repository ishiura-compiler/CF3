#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
volatile int64_t t0 = -743528506649672756LL;
int32_t t1 = 25961855;
uint16_t x17 = 4U;
volatile uint32_t x19 = UINT32_MAX;
volatile int32_t x20 = 1321724;
static int16_t x21 = 51;
uint16_t x29 = 0U;
static uint8_t x36 = 2U;
int8_t x37 = -1;
volatile int8_t x44 = INT8_MAX;
int32_t x50 = -1;
int16_t x52 = INT16_MIN;
int8_t x64 = INT8_MIN;
int32_t x69 = INT32_MIN;
int32_t x74 = -1;
static volatile int64_t x83 = INT64_MAX;
int32_t x88 = INT32_MIN;
int64_t x89 = 61LL;
uint32_t t23 = 3508U;
uint16_t x107 = UINT16_MAX;
int32_t x111 = INT32_MAX;
uint16_t x119 = 5574U;
int8_t x123 = -1;
volatile int32_t t30 = 345820435;
int64_t x127 = -1LL;
int64_t x128 = -1431349206LL;
volatile int64_t t31 = -640947869957LL;
int32_t x132 = INT32_MIN;
uint32_t x142 = UINT32_MAX;
int16_t x145 = INT16_MIN;
int16_t x146 = 5738;
volatile uint64_t x147 = 180LLU;
int32_t t37 = 7476295;
int16_t x154 = -4;
int32_t x171 = INT32_MIN;
uint16_t x176 = 105U;
int64_t x189 = 12610838LL;
uint16_t x193 = UINT16_MAX;
int64_t x196 = -1LL;
volatile int32_t x203 = INT32_MAX;
int8_t x206 = 24;
int8_t x209 = -1;
volatile uint16_t x215 = 2U;
static uint64_t x220 = 4842280840559LLU;
uint32_t x229 = 1U;
volatile int32_t x233 = -1493;
int64_t x241 = -1LL;
uint8_t x249 = 15U;
int32_t x253 = INT32_MAX;
static int64_t x254 = -1LL;
volatile uint16_t x256 = 15U;
static int8_t x268 = INT8_MIN;
volatile uint8_t x270 = 14U;
int32_t t67 = -1972812;
static uint8_t x274 = 0U;
uint32_t x277 = 0U;
int32_t x283 = 80;
int64_t t70 = -88915275353511072LL;
static volatile int32_t t72 = -1;
volatile int32_t t74 = 147891;
volatile int16_t x303 = -2911;
volatile uint32_t x308 = UINT32_MAX;
uint16_t x317 = 3351U;
volatile uint64_t x320 = 9475LLU;
static int64_t x331 = INT64_MIN;
int8_t x342 = INT8_MIN;
int32_t x343 = -1;
int64_t x347 = 78LL;
int32_t t87 = 1;
int32_t x353 = INT32_MIN;
volatile int32_t x366 = -644903874;
int32_t t92 = -7;
int32_t x375 = 1;
volatile int32_t t95 = 2883;
int64_t x388 = INT64_MAX;
static uint64_t x394 = 64191302443377118LLU;
int64_t x396 = 256330LL;
int16_t x400 = 1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int32_t x2 = INT32_MIN;
	volatile int64_t x4 = INT64_MIN;

	t0 = (((x1^x2)==x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 540413105LLU;
	int8_t x6 = -1;
	int8_t x7 = -1;
	int32_t x8 = 8456425;

	t1 = (((x5^x6)==x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 89167997U;
	int32_t x10 = INT32_MIN;
	static int16_t x11 = -9;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 7973529U;

	t2 = (((x9^x10)==x11)*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	uint16_t x14 = 0U;
	uint8_t x15 = 70U;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 519726LL;

	t3 = (((x13^x14)==x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int32_t t4 = 199714681;

	t4 = (((x17^x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int16_t x23 = -134;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -3275576;

	t5 = (((x21^x22)==x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = -5;
	volatile int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -3952749346LL;

	t6 = (((x25^x26)==x27)*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -318;
	int64_t x31 = -1LL;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 69274664;

	t7 = (((x29^x30)==x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = -1;
	static int16_t x34 = -1;
	int64_t x35 = -354LL;
	volatile int32_t t8 = 18060454;

	t8 = (((x33^x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -208;
	static uint32_t x39 = 18619463U;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t9 = -23;

	t9 = (((x37^x38)==x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -7339619;
	int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	int32_t t10 = 3;

	t10 = (((x41^x42)==x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 116U;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = UINT16_MAX;
	static int8_t x48 = -1;
	int32_t t11 = -2486;

	t11 = (((x45^x46)==x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 93710;
	volatile uint16_t x51 = 12159U;
	volatile int32_t t12 = -25398;

	t12 = (((x49^x50)==x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 27;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = 355319427799LL;
	volatile int64_t t13 = -884452462935LL;

	t13 = (((x53^x54)==x55)*x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 48U;
	static volatile uint32_t x59 = 0U;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 21LL;

	t14 = (((x57^x58)==x59)*x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	int32_t t15 = 28;

	t15 = (((x61^x62)==x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 5172U;
	int8_t x66 = INT8_MIN;
	volatile uint8_t x67 = UINT8_MAX;
	int32_t x68 = 473785469;
	int32_t t16 = 62663962;

	t16 = (((x65^x66)==x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = -810;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 997086185427520186LLU;

	t17 = (((x69^x70)==x71)*x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	volatile int32_t x75 = -806510;
	int16_t x76 = -1;
	volatile int32_t t18 = -13;

	t18 = (((x73^x74)==x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	volatile int32_t x78 = INT32_MIN;
	int16_t x79 = -17;
	static int16_t x80 = INT16_MIN;
	static int32_t t19 = 2386;

	t19 = (((x77^x78)==x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 4;
	volatile int32_t x82 = INT32_MIN;
	volatile uint32_t x84 = 10372U;
	volatile uint32_t t20 = 45550U;

	t20 = (((x81^x82)==x83)*x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MAX;
	int64_t x86 = -34LL;
	volatile int32_t x87 = INT32_MIN;
	volatile int32_t t21 = -209526614;

	t21 = (((x85^x86)==x87)*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = -122918;
	static volatile uint64_t x91 = UINT64_MAX;
	static int8_t x92 = INT8_MAX;
	static volatile int32_t t22 = -658;

	t22 = (((x89^x90)==x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = -629967LL;
	static uint8_t x95 = 1U;
	uint32_t x96 = 4486191U;

	t23 = (((x93^x94)==x95)*x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 0U;
	int64_t x98 = -1LL;
	uint32_t x99 = 519396880U;
	int16_t x100 = -12314;
	volatile int32_t t24 = -37;

	t24 = (((x97^x98)==x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	static int16_t x102 = -1;
	volatile uint32_t x103 = 3U;
	int16_t x104 = -13789;
	int32_t t25 = 1534;

	t25 = (((x101^x102)==x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	uint64_t x108 = 2018254LLU;
	volatile uint64_t t26 = 63928056LLU;

	t26 = (((x105^x106)==x107)*x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = 58LL;
	uint32_t x110 = 57186476U;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -133094317;

	t27 = (((x109^x110)==x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 669810597072996LLU;
	static volatile int8_t x116 = 0;
	static volatile int32_t t28 = 1;

	t28 = (((x113^x114)==x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	static int16_t x120 = INT16_MAX;
	int32_t t29 = -30;

	t29 = (((x117^x118)==x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x122 = -21;
	static int8_t x124 = -1;

	t30 = (((x121^x122)==x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 42U;
	static int8_t x126 = INT8_MAX;

	t31 = (((x125^x126)==x127)*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 136503;
	int64_t x130 = -30LL;
	int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -28656;

	t32 = (((x129^x130)==x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 7U;
	int64_t x134 = -1LL;
	int64_t x135 = 1014399833803817LL;
	static uint32_t x136 = 120155780U;
	uint32_t t33 = 0U;

	t33 = (((x133^x134)==x135)*x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = 1253829;
	int64_t x139 = -128LL;
	volatile int16_t x140 = 1510;
	int32_t t34 = 502419078;

	t34 = (((x137^x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MAX;
	int32_t t35 = 11214735;

	t35 = (((x141^x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x148 = 0;
	volatile int32_t t36 = 0;

	t36 = (((x145^x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = -1;
	volatile int16_t x152 = -7793;

	t37 = (((x149^x150)==x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 3;
	uint8_t x155 = UINT8_MAX;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 37138LL;

	t38 = (((x153^x154)==x155)*x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1661562LLU;
	int8_t x158 = -1;
	volatile int64_t x159 = INT64_MAX;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t39 = 4548U;

	t39 = (((x157^x158)==x159)*x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint16_t x162 = 6860U;
	int64_t x163 = 715612LL;
	uint8_t x164 = 7U;
	int32_t t40 = 166905307;

	t40 = (((x161^x162)==x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -5884316;
	static int64_t x166 = INT64_MIN;
	volatile int64_t x167 = 6LL;
	int8_t x168 = -27;
	static int32_t t41 = -598;

	t41 = (((x165^x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 37061U;
	uint32_t x172 = 16030767U;
	uint32_t t42 = 184111260U;

	t42 = (((x169^x170)==x171)*x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 9U;
	int8_t x174 = -1;
	volatile int64_t x175 = INT64_MAX;
	int32_t t43 = 1243970;

	t43 = (((x173^x174)==x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = 14342336LL;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 22;

	t44 = (((x177^x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	uint16_t x182 = 2U;
	static uint32_t x183 = UINT32_MAX;
	int8_t x184 = -17;
	int32_t t45 = 8653545;

	t45 = (((x181^x182)==x183)*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 14U;
	int32_t x186 = INT32_MAX;
	static int16_t x187 = INT16_MAX;
	volatile uint32_t x188 = 74U;
	static uint32_t t46 = 374889U;

	t46 = (((x185^x186)==x187)*x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x190 = -43;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 556563117LLU;
	uint64_t t47 = 4416322991746718LLU;

	t47 = (((x189^x190)==x191)*x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int64_t t48 = 448266964334752LL;

	t48 = (((x193^x194)==x195)*x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 6U;
	uint32_t x198 = UINT32_MAX;
	uint64_t x199 = 680835301333LLU;
	volatile uint8_t x200 = 5U;
	int32_t t49 = 0;

	t49 = (((x197^x198)==x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 24U;
	static int8_t x202 = 1;
	static int64_t x204 = -93727781875LL;
	int64_t t50 = 189373168763662006LL;

	t50 = (((x201^x202)==x203)*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x207 = INT64_MIN;
	static uint32_t x208 = UINT32_MAX;
	uint32_t t51 = 29712647U;

	t51 = (((x205^x206)==x207)*x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	static int8_t x212 = -1;
	static int32_t t52 = -4717440;

	t52 = (((x209^x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MAX;
	static uint64_t x216 = 38LLU;
	uint64_t t53 = 409389828970375214LLU;

	t53 = (((x213^x214)==x215)*x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 63U;
	static uint8_t x218 = 0U;
	volatile int64_t x219 = 4969512834LL;
	volatile uint64_t t54 = 2075683LLU;

	t54 = (((x217^x218)==x219)*x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	int8_t x223 = -1;
	volatile int8_t x224 = -5;
	volatile int32_t t55 = 2;

	t55 = (((x221^x222)==x223)*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = 0;
	static int64_t x227 = -46142LL;
	uint16_t x228 = 9U;
	int32_t t56 = -96452897;

	t56 = (((x225^x226)==x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 59U;
	uint64_t x231 = 386234LLU;
	uint16_t x232 = 10U;
	static int32_t t57 = -102;

	t57 = (((x229^x230)==x231)*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = -9342;
	int8_t x235 = -1;
	int32_t x236 = -31787;
	static volatile int32_t t58 = -1;

	t58 = (((x233^x234)==x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static int16_t x238 = -1;
	uint8_t x239 = 14U;
	static int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 265107;

	t59 = (((x237^x238)==x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -27;
	volatile int32_t t60 = -5;

	t60 = (((x241^x242)==x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	static int64_t x246 = INT64_MIN;
	int16_t x247 = -572;
	static int32_t x248 = -196153420;
	int32_t t61 = -685;

	t61 = (((x245^x246)==x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	int16_t x251 = -2;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 370851;

	t62 = (((x249^x250)==x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x255 = 183358181LL;
	volatile int32_t t63 = 128778888;

	t63 = (((x253^x254)==x255)*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 113U;
	uint32_t x258 = 14891784U;
	uint32_t x259 = 1U;
	int32_t x260 = -41858;
	volatile int32_t t64 = 103752;

	t64 = (((x257^x258)==x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 797;
	static int8_t x262 = -1;
	volatile uint32_t x263 = 19846029U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -3;

	t65 = (((x261^x262)==x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = -45022294798LL;
	int8_t x267 = INT8_MAX;
	volatile int32_t t66 = 0;

	t66 = (((x265^x266)==x267)*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;

	t67 = (((x269^x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int16_t x275 = -194;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 49768018;

	t68 = (((x273^x274)==x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = -32;
	int8_t x279 = 1;
	uint16_t x280 = 30337U;
	volatile int32_t t69 = -185;

	t69 = (((x277^x278)==x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -241990651811066LL;
	static int16_t x282 = INT16_MAX;
	int64_t x284 = 216000322930LL;

	t70 = (((x281^x282)==x283)*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	int32_t x287 = 2830;
	static int16_t x288 = -31;
	int32_t t71 = -1;

	t71 = (((x285^x286)==x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -1LL;
	int32_t x290 = -1;
	volatile uint32_t x291 = 311U;
	int8_t x292 = -1;

	t72 = (((x289^x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = -1564;
	static int16_t x294 = INT16_MAX;
	volatile int8_t x295 = 1;
	static uint64_t x296 = 23515435454912LLU;
	uint64_t t73 = 4262752982685735LLU;

	t73 = (((x293^x294)==x295)*x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint32_t x298 = 3538133U;
	volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = 37U;

	t74 = (((x297^x298)==x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -372030;
	int64_t x302 = -1LL;
	static uint8_t x304 = UINT8_MAX;
	int32_t t75 = -1217286;

	t75 = (((x301^x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 2075622503LLU;
	uint32_t t76 = 186841986U;

	t76 = (((x305^x306)==x307)*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -466;
	int64_t x312 = INT64_MAX;
	int64_t t77 = -264036409096707LL;

	t77 = (((x309^x310)==x311)*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MAX;
	static int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	static uint8_t x316 = UINT8_MAX;
	int32_t t78 = 14098;

	t78 = (((x313^x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = 5156485819604636LL;
	uint64_t t79 = 292910535525LLU;

	t79 = (((x317^x318)==x319)*x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -2;
	static volatile int64_t x322 = -82LL;
	uint8_t x323 = UINT8_MAX;
	static int16_t x324 = -3;
	volatile int32_t t80 = 1043737400;

	t80 = (((x321^x322)==x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 2547617963718LLU;
	uint32_t x326 = 69143186U;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t81 = 3LLU;

	t81 = (((x325^x326)==x327)*x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 82U;
	volatile uint8_t x330 = UINT8_MAX;
	static volatile uint64_t x332 = UINT64_MAX;
	uint64_t t82 = 877144641892236LLU;

	t82 = (((x329^x330)==x331)*x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int32_t x334 = INT32_MAX;
	static uint64_t x335 = 1277336704706LLU;
	int8_t x336 = -7;
	int32_t t83 = 10211267;

	t83 = (((x333^x334)==x335)*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;
	int64_t t84 = -9471674LL;

	t84 = (((x337^x338)==x339)*x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 373085694U;
	volatile int16_t x344 = INT16_MIN;
	int32_t t85 = 408238;

	t85 = (((x341^x342)==x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MAX;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t86 = -10;

	t86 = (((x345^x346)==x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	static uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -1;

	t87 = (((x349^x350)==x351)*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x354 = -2;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t88 = 11U;

	t88 = (((x353^x354)==x355)*x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 11U;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MAX;
	int32_t x360 = -1547345;
	static int32_t t89 = 3;

	t89 = (((x357^x358)==x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = -65124779329LL;
	uint8_t x362 = 18U;
	uint16_t x363 = 0U;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -5846;

	t90 = (((x361^x362)==x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 11LL;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 58;

	t91 = (((x365^x366)==x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = -2388;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;

	t92 = (((x369^x370)==x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 447672427U;
	static int16_t x374 = 8;
	static uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t93 = 12LLU;

	t93 = (((x373^x374)==x375)*x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = UINT64_MAX;
	static int16_t x380 = 2;
	static volatile int32_t t94 = 268386076;

	t94 = (((x377^x378)==x379)*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 8U;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = 0U;
	int16_t x384 = INT16_MAX;

	t95 = (((x381^x382)==x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	static uint64_t x386 = 2LLU;
	int8_t x387 = -1;
	int64_t t96 = -281328140868LL;

	t96 = (((x385^x386)==x387)*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int8_t x390 = -31;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 221893199404723639LLU;
	uint64_t t97 = 3811182736LLU;

	t97 = (((x389^x390)==x391)*x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x393 = -379;
	static int8_t x395 = INT8_MAX;
	static volatile int64_t t98 = 3087457536837526773LL;

	t98 = (((x393^x394)==x395)*x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = -1;
	volatile int64_t x399 = 21065144162LL;
	volatile int32_t t99 = -249;

	t99 = (((x397^x398)==x399)*x400);

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
