#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int32_t t2 = -13367870;
int16_t x19 = INT16_MIN;
static int32_t x22 = 61816;
uint16_t x27 = UINT16_MAX;
int64_t x31 = INT64_MIN;
static int64_t x35 = INT64_MIN;
static volatile int32_t t10 = -989345;
volatile int16_t x49 = INT16_MIN;
int8_t x51 = INT8_MAX;
int32_t x56 = -1;
int32_t x59 = INT32_MIN;
int8_t x60 = INT8_MAX;
int64_t x61 = INT64_MAX;
uint64_t x63 = UINT64_MAX;
volatile uint16_t x73 = 0U;
volatile int64_t x77 = -1LL;
int8_t x88 = INT8_MIN;
int32_t t21 = -37868996;
uint32_t x95 = 212U;
int32_t x99 = 7;
static int8_t x106 = 1;
volatile int16_t x111 = -1;
int16_t x115 = INT16_MIN;
int32_t t28 = 549034710;
int64_t x121 = -1LL;
static int32_t x123 = -1;
volatile int32_t t30 = 27;
int8_t x125 = 0;
int8_t x126 = -1;
volatile int32_t t31 = -1927793;
uint64_t x143 = 157747LLU;
uint8_t x149 = 43U;
static volatile int16_t x150 = 0;
int64_t x151 = -287938608LL;
uint64_t x152 = UINT64_MAX;
static volatile int32_t t37 = -1176;
int32_t x168 = INT32_MIN;
static int8_t x169 = INT8_MIN;
int16_t x170 = INT16_MIN;
static int16_t x173 = INT16_MAX;
uint32_t x175 = UINT32_MAX;
static int32_t x181 = -1;
int64_t x187 = 220579173LL;
uint8_t x189 = 109U;
int8_t x191 = -1;
int32_t t48 = -33733424;
volatile int32_t t49 = 2687;
int32_t x204 = 0;
volatile int8_t x212 = INT8_MIN;
static volatile uint8_t x215 = 12U;
static uint64_t x218 = UINT64_MAX;
static int32_t x222 = INT32_MAX;
int16_t x225 = INT16_MIN;
uint16_t x229 = 0U;
static int32_t t57 = -11425;
int16_t x234 = INT16_MAX;
static int32_t x239 = INT32_MIN;
volatile int64_t x255 = -29564743446051375LL;
int32_t t63 = -2;
int64_t x264 = -1LL;
int32_t t67 = 4486804;
static int32_t x283 = -1;
volatile int32_t t72 = -131392;
volatile int32_t x293 = -1;
uint8_t x298 = 1U;
volatile int16_t x301 = INT16_MAX;
static volatile int32_t x302 = INT32_MIN;
int32_t t75 = 1424805;
int32_t x310 = 973180095;
uint64_t x315 = UINT64_MAX;
volatile int32_t t78 = -398454971;
int64_t x318 = INT64_MIN;
volatile int32_t t79 = -142;
static volatile int8_t x327 = INT8_MIN;
volatile int64_t x344 = -1LL;
volatile int32_t t85 = -660165;
static volatile int64_t x346 = INT64_MAX;
int8_t x347 = 1;
int64_t x351 = INT64_MAX;
static int32_t t87 = 73137;
uint64_t x368 = 62427944155141455LLU;
int32_t t91 = -424;
int32_t t92 = 271;
volatile int32_t t93 = -348;
int64_t x383 = INT64_MAX;
static uint8_t x394 = 118U;
int8_t x397 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = UINT32_MAX;
	volatile int64_t x3 = INT64_MAX;
	int32_t t0 = 1;

	t0 = ((x1|x2)<(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	uint8_t x6 = 0U;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 17;

	t1 = ((x5|x6)<(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint32_t x10 = 877839U;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MIN;

	t2 = ((x9|x10)<(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = 556LL;
	int32_t x15 = -34920;
	int32_t x16 = -40896;
	volatile int32_t t3 = 0;

	t3 = ((x13|x14)<(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	uint64_t x20 = 1237994054489LLU;
	volatile int32_t t4 = 930491;

	t4 = ((x17|x18)<(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint16_t x23 = 6U;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = 1;

	t5 = ((x21|x22)<(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile int8_t x26 = INT8_MIN;
	uint8_t x28 = 3U;
	volatile int32_t t6 = -5;

	t6 = ((x25|x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 18;
	uint64_t x30 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 234975019;

	t7 = ((x29|x30)<(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 15U;
	int64_t x34 = INT64_MIN;
	int8_t x36 = -13;
	static volatile int32_t t8 = 7;

	t8 = ((x33|x34)<(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 2279075087490709448LLU;
	uint64_t x38 = 48215LLU;
	volatile int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -422819;

	t9 = ((x37|x38)<(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = -1;
	static uint8_t x43 = 5U;
	uint32_t x44 = 11963U;

	t10 = ((x41|x42)<(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 15;
	int16_t x46 = -1;
	int64_t x47 = -1LL;
	int64_t x48 = -2306023629894374LL;
	volatile int32_t t11 = -379527;

	t11 = ((x45|x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x50 = UINT64_MAX;
	int64_t x52 = -1LL;
	volatile int32_t t12 = -1;

	t12 = ((x49|x50)<(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int16_t x54 = -2215;
	uint32_t x55 = 0U;
	volatile int32_t t13 = 148084216;

	t13 = ((x53|x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	static int32_t t14 = -1689883;

	t14 = ((x57|x58)<(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 483007478U;
	static volatile uint32_t x64 = 19221U;
	volatile int32_t t15 = -5799;

	t15 = ((x61|x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -14;

	t16 = ((x65|x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	int8_t x71 = 9;
	int8_t x72 = INT8_MAX;
	int32_t t17 = -420;

	t17 = ((x69|x70)<(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 2U;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 3212U;
	volatile int32_t t18 = 455169298;

	t18 = ((x73|x74)<(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 118U;
	int8_t x79 = INT8_MAX;
	uint8_t x80 = 115U;
	volatile int32_t t19 = 35693;

	t19 = ((x77|x78)<(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 4692766883LLU;
	volatile uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 1968U;
	static int16_t x84 = 311;
	static int32_t t20 = -70985835;

	t20 = ((x81|x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	volatile int8_t x86 = INT8_MIN;
	volatile int8_t x87 = -38;

	t21 = ((x85|x86)<(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 19;
	static volatile int32_t x90 = INT32_MAX;
	int16_t x91 = 1;
	int64_t x92 = INT64_MAX;
	int32_t t22 = -18;

	t22 = ((x89|x90)<(x91^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	static int16_t x94 = INT16_MIN;
	uint64_t x96 = 1655232748221614LLU;
	int32_t t23 = 378459668;

	t23 = ((x93|x94)<(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -1;
	uint16_t x98 = 468U;
	volatile int64_t x100 = -1LL;
	static int32_t t24 = -2625849;

	t24 = ((x97|x98)<(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int8_t x102 = INT8_MAX;
	volatile uint16_t x103 = UINT16_MAX;
	int16_t x104 = -1;
	int32_t t25 = -1184;

	t25 = ((x101|x102)<(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	int16_t x107 = INT16_MAX;
	volatile int16_t x108 = -9;
	int32_t t26 = -5;

	t26 = ((x105|x106)<(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 241345001LLU;
	volatile uint64_t x110 = UINT64_MAX;
	int32_t x112 = -1;
	int32_t t27 = 62603522;

	t27 = ((x109|x110)<(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -4;
	int32_t x114 = 1022427161;
	uint16_t x116 = 13U;

	t28 = ((x113|x114)<(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -2;
	static int32_t x118 = INT32_MIN;
	volatile int8_t x119 = -29;
	uint8_t x120 = 1U;
	static int32_t t29 = 0;

	t29 = ((x117|x118)<(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	int64_t x124 = -1LL;

	t30 = ((x121|x122)<(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x127 = UINT8_MAX;
	static uint64_t x128 = 59618LLU;

	t31 = ((x125|x126)<(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 5531273U;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	uint32_t x132 = 4732U;
	int32_t t32 = -39596179;

	t32 = ((x129|x130)<(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 303355396781451LLU;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int8_t x135 = 0;
	int8_t x136 = -1;
	int32_t t33 = 121518072;

	t33 = ((x133|x134)<(x135^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -407045874;

	t34 = ((x137|x138)<(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = 172281960;
	static uint64_t x144 = 873978951LLU;
	volatile int32_t t35 = 1014341;

	t35 = ((x141|x142)<(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 279158273U;
	int64_t x146 = INT64_MAX;
	volatile uint8_t x147 = 48U;
	uint64_t x148 = 15505LLU;
	volatile int32_t t36 = 876883195;

	t36 = ((x145|x146)<(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {


	t37 = ((x149|x150)<(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	volatile int8_t x154 = INT8_MAX;
	uint8_t x155 = 1U;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 123924;

	t38 = ((x153|x154)<(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	volatile int64_t x158 = -1LL;
	volatile uint64_t x159 = 102700759LLU;
	volatile int32_t x160 = INT32_MIN;
	static int32_t t39 = 435369251;

	t39 = ((x157|x158)<(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static int64_t x164 = INT64_MIN;
	int32_t t40 = -1;

	t40 = ((x161|x162)<(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MAX;
	volatile int64_t x166 = INT64_MIN;
	volatile int32_t x167 = -3390;
	static int32_t t41 = -1504330;

	t41 = ((x165|x166)<(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x171 = 37265U;
	volatile int16_t x172 = 8297;
	static int32_t t42 = -281;

	t42 = ((x169|x170)<(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	int32_t x176 = INT32_MAX;
	int32_t t43 = 14313317;

	t43 = ((x173|x174)<(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	static int8_t x178 = 2;
	int32_t x179 = -1;
	int64_t x180 = 7037905839857LL;
	int32_t t44 = -3572;

	t44 = ((x177|x178)<(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	int8_t x183 = -12;
	static volatile int8_t x184 = INT8_MAX;
	static int32_t t45 = 5649;

	t45 = ((x181|x182)<(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	uint8_t x186 = 1U;
	volatile int64_t x188 = INT64_MAX;
	int32_t t46 = -5578806;

	t46 = ((x185|x186)<(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = UINT16_MAX;
	static uint32_t x192 = UINT32_MAX;
	int32_t t47 = -93;

	t47 = ((x189|x190)<(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int16_t x194 = INT16_MAX;
	volatile int32_t x195 = -1754526;
	volatile int64_t x196 = INT64_MIN;

	t48 = ((x193|x194)<(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -12964;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -1;
	uint8_t x200 = UINT8_MAX;

	t49 = ((x197|x198)<(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MAX;
	int8_t x202 = 0;
	volatile int64_t x203 = -1LL;
	volatile int32_t t50 = 1;

	t50 = ((x201|x202)<(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -6560659;
	int8_t x206 = INT8_MAX;
	static int8_t x207 = -1;
	uint64_t x208 = 65343017751815325LLU;
	volatile int32_t t51 = -657565079;

	t51 = ((x205|x206)<(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int8_t x210 = 1;
	int64_t x211 = 23LL;
	int32_t t52 = 3580;

	t52 = ((x209|x210)<(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	int64_t x216 = 3572588302623062140LL;
	int32_t t53 = 95369;

	t53 = ((x213|x214)<(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 14943U;
	static uint32_t x219 = 0U;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t54 = 1;

	t54 = ((x217|x218)<(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	uint64_t x223 = 1011773LLU;
	static uint64_t x224 = 43LLU;
	int32_t t55 = 56772;

	t55 = ((x221|x222)<(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -22;
	int64_t x227 = -3626LL;
	int64_t x228 = -1LL;
	volatile int32_t t56 = 154;

	t56 = ((x225|x226)<(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 12U;
	int8_t x231 = 0;
	int32_t x232 = INT32_MIN;

	t57 = ((x229|x230)<(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 4281U;
	volatile uint32_t x235 = UINT32_MAX;
	static uint16_t x236 = 595U;
	static int32_t t58 = 1140521;

	t58 = ((x233|x234)<(x235^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	static uint16_t x238 = 741U;
	int16_t x240 = 1;
	int32_t t59 = 145985146;

	t59 = ((x237|x238)<(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 208425998;
	static volatile int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -5848;

	t60 = ((x241|x242)<(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -63;
	uint8_t x246 = 63U;
	int32_t x247 = -1692014;
	static int32_t x248 = 11042;
	volatile int32_t t61 = -7234117;

	t61 = ((x245|x246)<(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = UINT32_MAX;
	static int8_t x252 = INT8_MIN;
	static volatile int32_t t62 = 14864234;

	t62 = ((x249|x250)<(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = INT32_MIN;
	volatile int8_t x256 = INT8_MIN;

	t63 = ((x253|x254)<(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	volatile int32_t x258 = INT32_MIN;
	uint64_t x259 = 2612275209LLU;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 77811;

	t64 = ((x257|x258)<(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 681;
	int64_t x262 = -28988448941185LL;
	static int8_t x263 = INT8_MAX;
	int32_t t65 = 7;

	t65 = ((x261|x262)<(x263^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	volatile int8_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	static int8_t x268 = -12;
	volatile int32_t t66 = 2;

	t66 = ((x265|x266)<(x267^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 10827372300899LL;
	int32_t x270 = -1;
	uint16_t x271 = 5U;
	int64_t x272 = 0LL;

	t67 = ((x269|x270)<(x271^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1408U;
	int64_t x274 = 18242LL;
	volatile uint64_t x275 = 25821LLU;
	static uint16_t x276 = 192U;
	int32_t t68 = -1;

	t68 = ((x273|x274)<(x275^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	int8_t x280 = 7;
	int32_t t69 = 25;

	t69 = ((x277|x278)<(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static volatile int32_t x282 = INT32_MIN;
	int16_t x284 = INT16_MAX;
	static int32_t t70 = -5007287;

	t70 = ((x281|x282)<(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 6U;
	int32_t x286 = INT32_MIN;
	static int32_t x287 = -1;
	uint64_t x288 = 32LLU;
	volatile int32_t t71 = -240037452;

	t71 = ((x285|x286)<(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	uint8_t x290 = 11U;
	int16_t x291 = -1;
	int8_t x292 = INT8_MIN;

	t72 = ((x289|x290)<(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x294 = 0U;
	int32_t x295 = INT32_MAX;
	uint64_t x296 = 220007614397016675LLU;
	int32_t t73 = -8674866;

	t73 = ((x293|x294)<(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int64_t x299 = -1LL;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = 842381469;

	t74 = ((x297|x298)<(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;

	t75 = ((x301|x302)<(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	static uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 1U;
	int32_t t76 = 85619;

	t76 = ((x305|x306)<(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 108058819303LLU;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -1;
	volatile int32_t t77 = 3;

	t77 = ((x309|x310)<(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 1;
	int64_t x314 = INT64_MIN;
	uint64_t x316 = UINT64_MAX;

	t78 = ((x313|x314)<(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	int8_t x319 = -43;
	int8_t x320 = -1;

	t79 = ((x317|x318)<(x319^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 0LL;
	int64_t x322 = -1LL;
	uint64_t x323 = 413249950993LLU;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 5;

	t80 = ((x321|x322)<(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 511U;
	int32_t x326 = INT32_MIN;
	int16_t x328 = INT16_MAX;
	int32_t t81 = 1;

	t81 = ((x325|x326)<(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 411009846LL;
	int32_t x330 = -15;
	int64_t x331 = -505271657843447616LL;
	uint32_t x332 = UINT32_MAX;
	static volatile int32_t t82 = 69;

	t82 = ((x329|x330)<(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 17182171350261370LLU;
	volatile int8_t x334 = -3;
	uint16_t x335 = 1U;
	int64_t x336 = -1LL;
	volatile int32_t t83 = 202;

	t83 = ((x333|x334)<(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	uint64_t x338 = 286078127LLU;
	static uint64_t x339 = 1LLU;
	int8_t x340 = -1;
	int32_t t84 = 344;

	t84 = ((x337|x338)<(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -58419;

	t85 = ((x341|x342)<(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 840U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 10134;

	t86 = ((x345|x346)<(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MAX;
	uint32_t x352 = 59106U;

	t87 = ((x349|x350)<(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = 5;
	volatile uint8_t x355 = 66U;
	int16_t x356 = 177;
	static volatile int32_t t88 = -4;

	t88 = ((x353|x354)<(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = -1;
	int64_t x360 = -11LL;
	volatile int32_t t89 = 5780;

	t89 = ((x357|x358)<(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -23;
	uint16_t x362 = UINT16_MAX;
	static uint16_t x363 = UINT16_MAX;
	int64_t x364 = INT64_MAX;
	int32_t t90 = -19672;

	t90 = ((x361|x362)<(x363^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	volatile int16_t x366 = -1;
	int32_t x367 = 0;

	t91 = ((x365|x366)<(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = INT8_MIN;
	static int16_t x370 = INT16_MAX;
	uint32_t x371 = 284913U;
	uint64_t x372 = 575181891390LLU;

	t92 = ((x369|x370)<(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile uint16_t x374 = 156U;
	static uint16_t x375 = 14U;
	static int16_t x376 = 129;

	t93 = ((x373|x374)<(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	static uint32_t x378 = UINT32_MAX;
	int32_t x379 = -13382105;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -186;

	t94 = ((x377|x378)<(x379^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -55807;
	volatile uint64_t x382 = UINT64_MAX;
	uint32_t x384 = 948U;
	int32_t t95 = -1;

	t95 = ((x381|x382)<(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -40;
	static int64_t x386 = INT64_MIN;
	volatile uint8_t x387 = 112U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x385|x386)<(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	static int8_t x391 = INT8_MIN;
	volatile uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = 88;

	t97 = ((x389|x390)<(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int32_t x395 = -12778395;
	volatile int8_t x396 = -38;
	int32_t t98 = -12697;

	t98 = ((x393|x394)<(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -1;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -12467528;
	int32_t t99 = 903;

	t99 = ((x397|x398)<(x399^x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

