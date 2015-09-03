#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -27LL;
int16_t x6 = INT16_MIN;
static int16_t x10 = INT16_MAX;
uint16_t x19 = 2U;
uint16_t x24 = 2U;
volatile int64_t x25 = INT64_MAX;
int64_t x35 = -1LL;
static int32_t t8 = -6;
volatile int8_t x49 = INT8_MIN;
uint64_t x57 = 457888546847457LLU;
volatile int32_t t14 = -434365;
static int32_t t16 = -1;
int32_t x74 = INT32_MIN;
int64_t x77 = INT64_MIN;
uint64_t x84 = 4278971LLU;
int64_t x88 = INT64_MIN;
volatile int32_t t24 = 5244995;
volatile int32_t t26 = -2;
uint32_t x109 = 790567219U;
int64_t x110 = 23887477231977390LL;
uint16_t x111 = UINT16_MAX;
int16_t x124 = INT16_MAX;
int64_t x127 = -1LL;
int32_t x128 = INT32_MIN;
static int64_t x129 = INT64_MAX;
int32_t x132 = -1;
int32_t x136 = 235939;
uint8_t x142 = 10U;
volatile int16_t x144 = 1;
volatile int32_t t34 = -648932156;
volatile int16_t x149 = 5;
int32_t x150 = INT32_MAX;
int64_t x160 = -56703969493LL;
int32_t t38 = -3339453;
int32_t x163 = -1;
static volatile int32_t t39 = 1;
int16_t x171 = -2490;
int64_t x173 = INT64_MAX;
volatile int16_t x179 = -1;
int64_t x180 = INT64_MAX;
static int8_t x181 = INT8_MIN;
static uint64_t x187 = 219113118927151LLU;
uint8_t x189 = 2U;
uint32_t x193 = 34292095U;
int16_t x196 = INT16_MAX;
static int8_t x199 = INT8_MIN;
volatile int32_t t48 = 1271019;
int8_t x202 = INT8_MIN;
uint8_t x207 = 10U;
uint64_t x214 = UINT64_MAX;
static int16_t x215 = INT16_MIN;
volatile int32_t t52 = 1613730;
static volatile int32_t t54 = 3861;
int64_t x230 = 5454689399541LL;
volatile int32_t t57 = 806;
uint32_t x248 = 14671894U;
int32_t x259 = -109179;
volatile int32_t x264 = -14075101;
static volatile int16_t x267 = INT16_MIN;
static int64_t x268 = INT64_MAX;
int16_t x272 = INT16_MAX;
int32_t x277 = 1444;
int16_t x278 = -1;
static int8_t x280 = INT8_MIN;
int32_t t69 = -479345771;
uint16_t x291 = 5U;
volatile uint64_t x292 = UINT64_MAX;
volatile int8_t x294 = INT8_MAX;
static int32_t t73 = 58265;
uint32_t x307 = 20116523U;
int32_t t75 = 0;
int16_t x315 = -1291;
int8_t x316 = INT8_MAX;
int32_t t76 = 182;
static int32_t x321 = -1;
volatile int8_t x324 = INT8_MAX;
volatile int32_t t78 = 449;
uint32_t x333 = 1U;
uint32_t x334 = 72094U;
int32_t x335 = -50117;
static int8_t x338 = 1;
uint64_t x339 = UINT64_MAX;
int32_t x346 = -1;
static int64_t x350 = 133898003804763855LL;
int64_t x367 = INT64_MIN;
volatile uint16_t x368 = 13771U;
volatile int64_t x370 = INT64_MAX;
volatile int32_t t91 = 13171104;
volatile int32_t t92 = -624355;
volatile int64_t x409 = INT64_MIN;
volatile int8_t x412 = INT8_MAX;
volatile int16_t x413 = INT16_MAX;
int8_t x416 = INT8_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int16_t x3 = -101;
	static int16_t x4 = -8796;
	volatile int32_t t0 = -1;

	t0 = (((x1|x2)+x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int32_t x7 = -91;
	uint64_t x8 = UINT64_MAX;
	static volatile int32_t t1 = -26988;

	t1 = (((x5|x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MAX;
	int32_t t2 = -6462140;

	t2 = (((x9|x10)+x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MAX;
	volatile int8_t x16 = -1;
	volatile int32_t t3 = -265551;

	t3 = (((x13|x14)+x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 8194403LL;
	volatile int8_t x18 = -3;
	static int32_t x20 = -1679;
	int32_t t4 = -490643;

	t4 = (((x17|x18)+x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 2763520189189313319LLU;
	int64_t x22 = -1LL;
	int8_t x23 = INT8_MAX;
	int32_t t5 = -26152672;

	t5 = (((x21|x22)+x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 36;

	t6 = (((x25|x26)+x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 175651812910876LL;
	uint8_t x30 = 0U;
	int64_t x31 = -552310LL;
	int32_t x32 = 24335417;
	volatile int32_t t7 = 77433968;

	t7 = (((x29|x30)+x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	volatile int32_t x34 = INT32_MAX;
	static int8_t x36 = INT8_MIN;

	t8 = (((x33|x34)+x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 23U;
	int64_t x38 = -1LL;
	int32_t x39 = INT32_MAX;
	int8_t x40 = -1;
	int32_t t9 = -66251415;

	t9 = (((x37|x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 48;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = -1;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 8192488;

	t10 = (((x41|x42)+x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = 2305;
	static int64_t x47 = -10LL;
	uint16_t x48 = 324U;
	volatile int32_t t11 = 98;

	t11 = (((x45|x46)+x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -12;
	static int8_t x51 = -1;
	static volatile int8_t x52 = INT8_MIN;
	static int32_t t12 = 66182205;

	t12 = (((x49|x50)+x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 7U;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1828;
	volatile int32_t t13 = -476141677;

	t13 = (((x53|x54)+x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	volatile uint32_t x59 = UINT32_MAX;
	int32_t x60 = 401;

	t14 = (((x57|x58)+x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = 14U;
	int32_t t15 = -10852;

	t15 = (((x61|x62)+x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 5U;
	int64_t x66 = -463720194940587LL;
	static int8_t x67 = -3;
	volatile uint32_t x68 = UINT32_MAX;

	t16 = (((x65|x66)+x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -18;
	volatile uint64_t x70 = 13LLU;
	int8_t x71 = 4;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -369756908;

	t17 = (((x69|x70)+x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = 0;
	static int32_t t18 = 3867;

	t18 = (((x73|x74)+x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x78 = 246853U;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -38;
	int32_t t19 = -196546923;

	t19 = (((x77|x78)+x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 88090745U;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = INT8_MIN;
	int32_t t20 = 738204;

	t20 = (((x81|x82)+x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -7;
	int8_t x86 = INT8_MAX;
	int64_t x87 = -1LL;
	volatile int32_t t21 = -2351;

	t21 = (((x85|x86)+x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = 0U;
	static volatile int64_t x91 = 1005620785769224LL;
	uint32_t x92 = 1134U;
	int32_t t22 = -6;

	t22 = (((x89|x90)+x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 371U;
	static volatile int32_t x94 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = 52;

	t23 = (((x93|x94)+x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1366060855556582LL;
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 15LLU;
	volatile uint32_t x100 = 1U;

	t24 = (((x97|x98)+x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 433213352U;
	volatile uint64_t x102 = 77612764353997838LLU;
	volatile int16_t x103 = -938;
	volatile int8_t x104 = -1;
	static int32_t t25 = 2879;

	t25 = (((x101|x102)+x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	static volatile int64_t x106 = INT64_MIN;
	uint8_t x107 = 0U;
	uint64_t x108 = UINT64_MAX;

	t26 = (((x105|x106)+x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = -5;

	t27 = (((x109|x110)+x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	volatile uint32_t x118 = 17945U;
	uint8_t x119 = 56U;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t28 = 10;

	t28 = (((x117|x118)+x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	static int16_t x122 = -11421;
	static int64_t x123 = -18413294LL;
	int32_t t29 = 201660;

	t29 = (((x121|x122)+x123)<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	static int32_t x126 = 94;
	volatile int32_t t30 = 18645574;

	t30 = (((x125|x126)+x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x130 = 399861945U;
	volatile int8_t x131 = INT8_MIN;
	int32_t t31 = 61491;

	t31 = (((x129|x130)+x131)<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static int64_t x135 = INT64_MAX;
	volatile int32_t t32 = 1;

	t32 = (((x133|x134)+x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = INT8_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	uint8_t x139 = 11U;
	int8_t x140 = INT8_MIN;
	volatile int32_t t33 = -17514072;

	t33 = (((x137|x138)+x139)<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 61U;
	uint64_t x143 = 34312LLU;

	t34 = (((x141|x142)+x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int64_t x146 = -1151924LL;
	volatile uint32_t x147 = 2325U;
	int64_t x148 = -803399LL;
	static int32_t t35 = -6;

	t35 = (((x145|x146)+x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	static volatile int32_t t36 = 303592767;

	t36 = (((x149|x150)+x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 967012U;
	uint8_t x154 = 91U;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = -503627;

	t37 = (((x153|x154)+x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MAX;
	int32_t x159 = -594;

	t38 = (((x157|x158)+x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 2235788667296658271LL;
	uint64_t x162 = UINT64_MAX;
	uint64_t x164 = 6LLU;

	t39 = (((x161|x162)+x163)<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 61U;
	static int64_t x166 = 110202995613LL;
	uint32_t x167 = 713883U;
	uint32_t x168 = 4638U;
	volatile int32_t t40 = -130991;

	t40 = (((x165|x166)+x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MAX;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t41 = 33706872;

	t41 = (((x169|x170)+x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x174 = 1;
	volatile int16_t x175 = INT16_MIN;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 8972893;

	t42 = (((x173|x174)+x175)<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 3315949919541LLU;
	uint64_t x178 = UINT64_MAX;
	volatile int32_t t43 = 1516;

	t43 = (((x177|x178)+x179)<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x182 = UINT64_MAX;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = -1;
	volatile int32_t t44 = -1054976;

	t44 = (((x181|x182)+x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 10U;
	volatile int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MAX;
	int32_t t45 = 12911;

	t45 = (((x185|x186)+x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x190 = INT64_MIN;
	int64_t x191 = 93LL;
	int64_t x192 = -1LL;
	int32_t t46 = -1;

	t46 = (((x189|x190)+x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x194 = 16U;
	static uint32_t x195 = 1U;
	volatile int32_t t47 = 5;

	t47 = (((x193|x194)+x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -194405680232929LL;
	static uint32_t x198 = 513316U;
	int8_t x200 = -19;

	t48 = (((x197|x198)+x199)<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 11948U;
	volatile int32_t x203 = 14667504;
	uint16_t x204 = 158U;
	volatile int32_t t49 = 195991;

	t49 = (((x201|x202)+x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x205 = 829U;
	int64_t x206 = -1LL;
	volatile uint64_t x208 = UINT64_MAX;
	int32_t t50 = -21;

	t50 = (((x205|x206)+x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -3;
	int16_t x210 = 0;
	static uint16_t x211 = 2U;
	int32_t x212 = -1;
	volatile int32_t t51 = -2950;

	t51 = (((x209|x210)+x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = -162101043;
	uint8_t x216 = UINT8_MAX;

	t52 = (((x213|x214)+x215)<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	uint64_t x218 = 422LLU;
	int16_t x219 = -119;
	uint8_t x220 = UINT8_MAX;
	static int32_t t53 = 213196651;

	t53 = (((x217|x218)+x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = UINT32_MAX;
	static uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 86U;
	volatile uint32_t x224 = UINT32_MAX;

	t54 = (((x221|x222)+x223)<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MAX;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = 5U;
	int32_t t55 = 49809475;

	t55 = (((x229|x230)+x231)<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = 1LL;
	int32_t x235 = -64099;
	int64_t x236 = INT64_MIN;
	int32_t t56 = -49;

	t56 = (((x233|x234)+x235)<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = 421300181;
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = -130165890543412LL;
	int8_t x240 = INT8_MAX;

	t57 = (((x237|x238)+x239)<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	volatile int16_t x242 = -1;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = -1;
	int32_t t58 = 41274659;

	t58 = (((x241|x242)+x243)<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 338;
	uint16_t x246 = 18878U;
	int32_t x247 = -1;
	volatile int32_t t59 = -205334987;

	t59 = (((x245|x246)+x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x249 = 45007U;
	static volatile int32_t x250 = INT32_MAX;
	volatile int64_t x251 = -1LL;
	int16_t x252 = INT16_MIN;
	int32_t t60 = -23066730;

	t60 = (((x249|x250)+x251)<x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = -12239976470856LL;
	volatile int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t61 = -3782867;

	t61 = (((x253|x254)+x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	volatile int64_t x258 = -1LL;
	uint16_t x260 = UINT16_MAX;
	static int32_t t62 = -296614;

	t62 = (((x257|x258)+x259)<x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MIN;
	static int32_t x263 = -432613;
	volatile int32_t t63 = 36156;

	t63 = (((x261|x262)+x263)<x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x265 = INT8_MAX;
	static uint16_t x266 = 2607U;
	volatile int32_t t64 = -1756;

	t64 = (((x265|x266)+x267)<x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t t65 = 0;

	t65 = (((x269|x270)+x271)<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = -1;
	int8_t x275 = -1;
	int32_t x276 = 2093912;
	int32_t t66 = 100069961;

	t66 = (((x273|x274)+x275)<x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x279 = -1LL;
	volatile int32_t t67 = 76;

	t67 = (((x277|x278)+x279)<x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -1LL;
	int32_t x282 = -1485;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 6471854;
	int32_t t68 = -2993235;

	t68 = (((x281|x282)+x283)<x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 9;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = 9U;
	int64_t x288 = INT64_MIN;

	t69 = (((x285|x286)+x287)<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = INT8_MIN;
	int64_t x290 = -8310203492905LL;
	volatile int32_t t70 = 2;

	t70 = (((x289|x290)+x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x295 = 1U;
	int64_t x296 = INT64_MIN;
	int32_t t71 = 1351;

	t71 = (((x293|x294)+x295)<x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = INT8_MIN;
	uint8_t x298 = UINT8_MAX;
	uint64_t x299 = 1482896015034686228LLU;
	int16_t x300 = INT16_MIN;
	int32_t t72 = -27576;

	t72 = (((x297|x298)+x299)<x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x301 = 1U;
	static int16_t x302 = -20;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = -1;

	t73 = (((x301|x302)+x303)<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = 10U;
	int8_t x308 = INT8_MIN;
	int32_t t74 = 1143902;

	t74 = (((x305|x306)+x307)<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x309 = -1;
	static int32_t x310 = -1;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = 51;

	t75 = (((x309|x310)+x311)<x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = INT32_MIN;
	volatile int16_t x314 = INT16_MIN;

	t76 = (((x313|x314)+x315)<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = -7130;
	static volatile uint64_t x318 = 211064630045069989LLU;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t77 = -107835248;

	t77 = (((x317|x318)+x319)<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = 3;
	int32_t x323 = -419;

	t78 = (((x321|x322)+x323)<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 8518784379LLU;
	volatile int16_t x326 = INT16_MAX;
	static int8_t x327 = -21;
	static volatile uint16_t x328 = UINT16_MAX;
	int32_t t79 = 929;

	t79 = (((x325|x326)+x327)<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x336 = 236771421850623LL;
	int32_t t80 = 9798141;

	t80 = (((x333|x334)+x335)<x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = -1;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t81 = 870026725;

	t81 = (((x337|x338)+x339)<x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 155318U;
	uint64_t x342 = 103551531107285648LLU;
	int8_t x343 = INT8_MAX;
	int64_t x344 = 131775862788058LL;
	volatile int32_t t82 = 39480;

	t82 = (((x341|x342)+x343)<x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	int64_t x347 = -17362451958287458LL;
	volatile int16_t x348 = -19;
	static int32_t t83 = -2432930;

	t83 = (((x345|x346)+x347)<x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	static int16_t x352 = 930;
	int32_t t84 = -36064;

	t84 = (((x349|x350)+x351)<x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = 51LL;
	uint32_t x354 = 524609750U;
	uint64_t x355 = 606645940600946LLU;
	int32_t x356 = -1;
	volatile int32_t t85 = 408159502;

	t85 = (((x353|x354)+x355)<x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x357 = 1342U;
	int8_t x358 = 0;
	uint32_t x359 = UINT32_MAX;
	static uint64_t x360 = UINT64_MAX;
	int32_t t86 = -1928133;

	t86 = (((x357|x358)+x359)<x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x361 = 4U;
	uint32_t x362 = 3U;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t87 = 0;

	t87 = (((x361|x362)+x363)<x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = 12983049;
	uint8_t x366 = 19U;
	volatile int32_t t88 = -980790;

	t88 = (((x365|x366)+x367)<x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 141654969063212664LLU;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -2415;
	int32_t t89 = -403600668;

	t89 = (((x369|x370)+x371)<x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	static uint64_t x374 = 79109581321708LLU;
	static uint64_t x375 = 4953787723LLU;
	volatile int32_t x376 = INT32_MIN;
	int32_t t90 = -1;

	t90 = (((x373|x374)+x375)<x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = 724112079LL;
	uint8_t x378 = 74U;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;

	t91 = (((x377|x378)+x379)<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 520182LLU;
	volatile int16_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 72217735420544LLU;

	t92 = (((x381|x382)+x383)<x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = 381U;
	volatile int16_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int32_t t93 = -59111937;

	t93 = (((x389|x390)+x391)<x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t94 = 1;

	t94 = (((x393|x394)+x395)<x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -657;
	uint16_t x398 = 438U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int32_t t95 = -891770;

	t95 = (((x397|x398)+x399)<x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 878U;
	static uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = -550;
	int32_t t96 = -1051089152;

	t96 = (((x401|x402)+x403)<x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static int64_t x406 = INT64_MIN;
	int8_t x407 = -3;
	uint32_t x408 = 1895U;
	int32_t t97 = -1;

	t97 = (((x405|x406)+x407)<x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x410 = UINT64_MAX;
	volatile uint32_t x411 = 130U;
	volatile int32_t t98 = 0;

	t98 = (((x409|x410)+x411)<x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x414 = 2318239934693LL;
	uint8_t x415 = UINT8_MAX;
	int32_t t99 = 57;

	t99 = (((x413|x414)+x415)<x416);

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

