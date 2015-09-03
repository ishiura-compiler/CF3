#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int64_t x9 = -100615LL;
int64_t x11 = INT64_MIN;
volatile uint8_t x13 = UINT8_MAX;
uint16_t x16 = UINT16_MAX;
uint32_t x22 = 0U;
int32_t x39 = INT32_MIN;
volatile int64_t x40 = INT64_MIN;
int32_t t9 = 1474;
uint64_t x41 = 31432152LLU;
volatile int64_t x43 = INT64_MIN;
int64_t x52 = INT64_MIN;
uint8_t x57 = 1U;
int16_t x64 = -6292;
static int32_t x69 = INT32_MIN;
volatile uint16_t x72 = 888U;
int16_t x73 = 263;
int16_t x81 = INT16_MIN;
int16_t x82 = INT16_MIN;
static volatile uint16_t x83 = 681U;
int32_t t20 = 31648881;
int32_t x86 = -5;
int16_t x88 = INT16_MIN;
volatile int32_t t21 = -26303;
uint8_t x93 = UINT8_MAX;
static int64_t x97 = -1LL;
static uint8_t x98 = UINT8_MAX;
int64_t x107 = INT64_MIN;
static int32_t t26 = -26;
uint32_t x113 = UINT32_MAX;
static uint8_t x127 = 5U;
volatile int32_t x129 = -1;
volatile int32_t t32 = -68;
volatile int16_t x133 = INT16_MIN;
int32_t t34 = -17416433;
volatile int16_t x141 = -1;
int32_t t35 = 5244;
uint32_t x150 = 333U;
volatile int8_t x154 = INT8_MIN;
uint32_t x155 = 29336U;
int8_t x180 = 0;
volatile uint8_t x182 = UINT8_MAX;
static int64_t x186 = INT64_MIN;
int32_t t46 = -13662936;
int32_t x192 = -12;
volatile int32_t x193 = -1;
static uint8_t x195 = 2U;
volatile int32_t t49 = -7019217;
int8_t x203 = -1;
volatile int64_t x205 = 191292193LL;
int32_t t53 = 22;
int32_t x217 = INT32_MAX;
int32_t x220 = -1;
volatile int32_t t55 = -26353174;
volatile int64_t x226 = INT64_MIN;
uint32_t x229 = 170325U;
int16_t x248 = INT16_MIN;
int32_t x256 = 57;
volatile int32_t x257 = INT32_MIN;
volatile int8_t x260 = INT8_MAX;
volatile int32_t t65 = -1;
int64_t x265 = -1LL;
int32_t x268 = -1;
static int32_t t66 = -14;
uint16_t x269 = 21696U;
uint8_t x271 = 0U;
volatile int64_t x275 = -1LL;
volatile int16_t x280 = INT16_MIN;
int32_t x287 = INT32_MIN;
uint64_t x289 = UINT64_MAX;
uint8_t x291 = UINT8_MAX;
int32_t x296 = INT32_MIN;
int32_t t73 = 1;
uint64_t x301 = 781016780022LLU;
volatile int32_t t75 = -16;
static uint8_t x309 = UINT8_MAX;
int8_t x310 = INT8_MAX;
int16_t x311 = 410;
int64_t x314 = -1LL;
int16_t x316 = -1;
int8_t x318 = -1;
uint64_t x320 = UINT64_MAX;
int16_t x326 = -30;
int16_t x327 = -13;
int32_t t82 = 12777108;
int64_t x333 = INT64_MIN;
int16_t x339 = 3;
static volatile int32_t t84 = -11472794;
uint64_t x341 = UINT64_MAX;
int64_t x342 = -2830270816300LL;
uint16_t x345 = 2U;
volatile uint64_t x349 = 547461380419964LLU;
uint64_t x355 = 152602LLU;
volatile int32_t t88 = -77;
uint16_t x360 = UINT16_MAX;
uint32_t x363 = 48174U;
volatile int16_t x366 = INT16_MAX;
int16_t x367 = INT16_MIN;
uint16_t x372 = 275U;
volatile int16_t x373 = -1;
int32_t x378 = INT32_MAX;
int32_t t95 = -110;
volatile int8_t x386 = 1;
int32_t t97 = -319813821;
volatile int32_t t98 = 166850;
uint32_t x400 = 5334U;
volatile int32_t t99 = 314820;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	uint8_t x3 = 98U;
	volatile int32_t t0 = 1969;

	t0 = (((x1&x2)|x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	static volatile int8_t x7 = 26;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = -657762258;

	t1 = (((x5&x6)|x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -67;

	t2 = (((x9&x10)|x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -11439;
	static uint32_t x15 = 6224117U;
	int32_t t3 = -2935;

	t3 = (((x13&x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 477U;
	static volatile uint16_t x18 = UINT16_MAX;
	int16_t x19 = -1;
	static uint64_t x20 = UINT64_MAX;
	int32_t t4 = 0;

	t4 = (((x17&x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int16_t x23 = 1;
	volatile int8_t x24 = 2;
	static volatile int32_t t5 = 364;

	t5 = (((x21&x22)|x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 7202U;
	int32_t x26 = -1;
	static int64_t x27 = -1LL;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -7;

	t6 = (((x25&x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = -25388;
	static uint64_t x32 = 235535078928LLU;
	int32_t t7 = -146;

	t7 = (((x29&x30)|x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = UINT32_MAX;
	static int32_t x35 = -4777289;
	int16_t x36 = 32;
	volatile int32_t t8 = 4747;

	t8 = (((x33&x34)|x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 8U;
	int64_t x38 = 32918128155369362LL;

	t9 = (((x37&x38)|x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 227635464LLU;
	uint32_t x44 = 1U;
	volatile int32_t t10 = -103509928;

	t10 = (((x41&x42)|x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -6117958394650112LL;
	uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 64U;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 679740;

	t11 = (((x45&x46)|x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 0;
	int32_t x50 = -3874;
	int64_t x51 = INT64_MIN;
	static int32_t t12 = 1033922;

	t12 = (((x49&x50)|x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int8_t x54 = INT8_MIN;
	static uint32_t x55 = 1745U;
	int8_t x56 = 5;
	static volatile int32_t t13 = -23822;

	t13 = (((x53&x54)|x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = UINT8_MAX;
	static int32_t x59 = 12843;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 169;

	t14 = (((x57&x58)|x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MIN;
	int64_t x63 = 2329251932751LL;
	int32_t t15 = 0;

	t15 = (((x61&x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 1LL;
	volatile int8_t x66 = INT8_MAX;
	uint64_t x67 = 29372006546159LLU;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = -10;

	t16 = (((x65&x66)|x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	static volatile int16_t x71 = INT16_MAX;
	static int32_t t17 = 322496;

	t17 = (((x69&x70)|x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	int32_t x76 = 90358849;
	int32_t t18 = 129084;

	t18 = (((x73&x74)|x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = 290;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -2;
	static volatile int32_t t19 = 25300;

	t19 = (((x77&x78)|x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x84 = -1;

	t20 = (((x81&x82)|x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	uint8_t x87 = UINT8_MAX;

	t21 = (((x85&x86)|x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 56U;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -1282;

	t22 = (((x89&x90)|x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MAX;
	static int32_t x95 = 214171;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 45242663;

	t23 = (((x93&x94)|x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = 2;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = -2043;

	t24 = (((x97&x98)|x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 12U;
	volatile int32_t x102 = -289404381;
	static uint8_t x103 = UINT8_MAX;
	static int16_t x104 = 0;
	int32_t t25 = -912252179;

	t25 = (((x101&x102)|x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint32_t x106 = 1U;
	int64_t x108 = -1LL;

	t26 = (((x105&x106)|x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	static uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 1315U;
	uint16_t x112 = 1U;
	int32_t t27 = 676774;

	t27 = (((x109&x110)|x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = 6370;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -3;

	t28 = (((x113&x114)|x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 159552635;
	volatile int8_t x118 = INT8_MIN;
	static uint32_t x119 = 219647U;
	uint8_t x120 = 31U;
	int32_t t29 = -754033626;

	t29 = (((x117&x118)|x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = 43;
	int32_t x123 = INT32_MIN;
	int8_t x124 = 0;
	static volatile int32_t t30 = 0;

	t30 = (((x121&x122)|x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 2;
	uint16_t x126 = 4U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 176693;

	t31 = (((x125&x126)|x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int32_t x131 = -1;
	uint32_t x132 = 87194001U;

	t32 = (((x129&x130)|x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x134 = 3139U;
	int64_t x135 = 168LL;
	static uint64_t x136 = 3673341495610945LLU;
	volatile int32_t t33 = 1;

	t33 = (((x133&x134)|x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	volatile int8_t x138 = -1;
	int32_t x139 = -1;
	int16_t x140 = -1;

	t34 = (((x137&x138)|x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -24;

	t35 = (((x141&x142)|x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = -1;
	uint16_t x147 = 64U;
	int16_t x148 = -481;
	static volatile int32_t t36 = 4826;

	t36 = (((x145&x146)|x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = 12128;
	volatile int32_t t37 = -3123940;

	t37 = (((x149&x150)|x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	static uint8_t x156 = UINT8_MAX;
	int32_t t38 = -2889683;

	t38 = (((x153&x154)|x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 2327;
	volatile int8_t x158 = -11;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = 3612828;

	t39 = (((x157&x158)|x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 13;
	int16_t x162 = -978;
	static uint32_t x163 = UINT32_MAX;
	volatile int64_t x164 = INT64_MAX;
	int32_t t40 = 2;

	t40 = (((x161&x162)|x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	uint32_t x166 = UINT32_MAX;
	static int64_t x167 = INT64_MAX;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -7468799;

	t41 = (((x165&x166)|x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -2608;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 815338LLU;
	int32_t x172 = INT32_MIN;
	static int32_t t42 = 1353;

	t42 = (((x169&x170)|x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	volatile int64_t x174 = -14910296LL;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = -12;
	int32_t t43 = 27941816;

	t43 = (((x173&x174)|x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 47604;
	int32_t x178 = INT32_MAX;
	int32_t x179 = INT32_MAX;
	int32_t t44 = 262410;

	t44 = (((x177&x178)|x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MAX;
	int32_t x183 = -1;
	static int64_t x184 = -345847815LL;
	volatile int32_t t45 = -87;

	t45 = (((x181&x182)|x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int8_t x187 = INT8_MAX;
	int32_t x188 = 12;

	t46 = (((x185&x186)|x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = UINT64_MAX;
	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	static int32_t t47 = 226713641;

	t47 = (((x189&x190)|x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 0;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = -98942769;

	t48 = (((x193&x194)|x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = 2U;
	int8_t x200 = INT8_MIN;

	t49 = (((x197&x198)|x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 1014291254U;
	int16_t x202 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -10;

	t50 = (((x201&x202)|x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 4386864101399388315LLU;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -5LL;
	volatile int32_t t51 = 153;

	t51 = (((x205&x206)|x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 1;
	static uint8_t x210 = 39U;
	uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 63U;
	static volatile int32_t t52 = -10037560;

	t52 = (((x209&x210)|x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = -11107;
	volatile int32_t x215 = INT32_MIN;
	int8_t x216 = -1;

	t53 = (((x213&x214)|x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	volatile int32_t t54 = 13;

	t54 = (((x217&x218)|x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -22;
	static uint64_t x222 = 376367735LLU;
	int32_t x223 = -1;
	int16_t x224 = -847;

	t55 = (((x221&x222)|x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = -21;

	t56 = (((x225&x226)|x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t57 = -15708636;

	t57 = (((x229&x230)|x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	static int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	int64_t x236 = 8LL;
	int32_t t58 = 262;

	t58 = (((x233&x234)|x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -98945240874945117LL;
	volatile int8_t x238 = INT8_MIN;
	int8_t x239 = 56;
	uint32_t x240 = 8771903U;
	int32_t t59 = -162255872;

	t59 = (((x237&x238)|x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -494LL;
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MAX;
	uint64_t x244 = 183842986062442LLU;
	static volatile int32_t t60 = 218;

	t60 = (((x241&x242)|x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;
	volatile int16_t x247 = INT16_MIN;
	int32_t t61 = -836;

	t61 = (((x245&x246)|x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MAX;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = 1;
	volatile int32_t t62 = -38271343;

	t62 = (((x249&x250)|x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	int32_t t63 = 31843052;

	t63 = (((x253&x254)|x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -30845LL;
	static int32_t x259 = INT32_MAX;
	volatile int32_t t64 = -18182677;

	t64 = (((x257&x258)|x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 674032876LLU;
	uint32_t x264 = UINT32_MAX;

	t65 = (((x261&x262)|x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MAX;
	volatile uint16_t x267 = 7U;

	t66 = (((x265&x266)|x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x270 = UINT8_MAX;
	uint64_t x272 = UINT64_MAX;
	int32_t t67 = -50574;

	t67 = (((x269&x270)|x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -11334411;
	int8_t x274 = 3;
	static uint32_t x276 = 268U;
	int32_t t68 = -12414;

	t68 = (((x273&x274)|x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 1U;
	int64_t x278 = INT64_MAX;
	static uint16_t x279 = UINT16_MAX;
	static volatile int32_t t69 = -3;

	t69 = (((x277&x278)|x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 29400U;
	uint64_t x282 = 929509199146LLU;
	static uint8_t x283 = 1U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 9774817;

	t70 = (((x281&x282)|x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	volatile uint64_t x288 = 14726006522464LLU;
	volatile int32_t t71 = 13362988;

	t71 = (((x285&x286)|x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 10U;
	uint16_t x292 = 99U;
	volatile int32_t t72 = 5910;

	t72 = (((x289&x290)|x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 443331U;
	uint32_t x294 = 7785U;
	static int8_t x295 = INT8_MIN;

	t73 = (((x293&x294)|x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = -4593546;
	static uint16_t x298 = 112U;
	static volatile uint16_t x299 = UINT16_MAX;
	volatile int64_t x300 = -1LL;
	int32_t t74 = 1948626;

	t74 = (((x297&x298)|x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = INT16_MAX;
	static volatile int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MAX;

	t75 = (((x301&x302)|x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MAX;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = -1;
	int16_t x308 = -1;
	int32_t t76 = -2;

	t76 = (((x305&x306)|x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x312 = 7U;
	int32_t t77 = 110357;

	t77 = (((x309&x310)|x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	volatile uint16_t x315 = 2666U;
	volatile int32_t t78 = 7;

	t78 = (((x313&x314)|x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x319 = 6U;
	volatile int32_t t79 = -3;

	t79 = (((x317&x318)|x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint8_t x322 = 95U;
	volatile int8_t x323 = -1;
	uint16_t x324 = 9U;
	volatile int32_t t80 = 361;

	t80 = (((x321&x322)|x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 7618778;

	t81 = (((x325&x326)|x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 125568428563591LLU;
	volatile int16_t x330 = INT16_MAX;
	static int16_t x331 = 210;
	int32_t x332 = -409446;

	t82 = (((x329&x330)|x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x334 = 0;
	int32_t x335 = INT32_MIN;
	int8_t x336 = 1;
	int32_t t83 = 72463;

	t83 = (((x333&x334)|x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	static uint8_t x338 = UINT8_MAX;
	uint16_t x340 = 91U;

	t84 = (((x337&x338)|x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x343 = 36U;
	int32_t x344 = 3939;
	static int32_t t85 = 52199;

	t85 = (((x341&x342)|x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	int16_t x347 = INT16_MAX;
	int8_t x348 = -1;
	static volatile int32_t t86 = 34;

	t86 = (((x345&x346)|x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	static uint32_t x351 = 11U;
	volatile uint16_t x352 = 725U;
	int32_t t87 = -1;

	t87 = (((x349&x350)|x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static int8_t x354 = INT8_MIN;
	int8_t x356 = INT8_MIN;

	t88 = (((x353&x354)|x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	static int64_t x358 = INT64_MIN;
	uint32_t x359 = 250253U;
	int32_t t89 = -1;

	t89 = (((x357&x358)|x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static volatile int16_t x362 = -1;
	int64_t x364 = -1LL;
	volatile int32_t t90 = -183;

	t90 = (((x361&x362)|x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x368 = 62434077922LL;
	static int32_t t91 = -2050;

	t91 = (((x365&x366)|x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = 1;
	static int32_t x371 = INT32_MAX;
	int32_t t92 = 6181;

	t92 = (((x369&x370)|x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	static int64_t x375 = INT64_MIN;
	uint32_t x376 = 66439U;
	volatile int32_t t93 = 1;

	t93 = (((x373&x374)|x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int32_t x379 = 14;
	int64_t x380 = INT64_MIN;
	int32_t t94 = 0;

	t94 = (((x377&x378)|x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 12915U;
	int8_t x382 = 57;
	int16_t x383 = -1;
	uint64_t x384 = 170908124LLU;

	t95 = (((x381&x382)|x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 13U;
	int8_t x387 = -6;
	static uint64_t x388 = 6373865276031LLU;
	static int32_t t96 = -1393239;

	t96 = (((x385&x386)|x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = -314981296;
	static int64_t x391 = 1590630415928LL;
	int32_t x392 = INT32_MIN;

	t97 = (((x389&x390)|x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static int8_t x394 = INT8_MIN;
	int16_t x395 = 10049;
	int64_t x396 = INT64_MIN;

	t98 = (((x393&x394)|x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = 6454984LLU;
	uint16_t x398 = 392U;
	int32_t x399 = INT32_MIN;

	t99 = (((x397&x398)|x399)<x400);

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

