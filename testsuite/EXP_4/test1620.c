#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -112480;
volatile int64_t x9 = 3086LL;
int32_t t2 = 160129366;
int16_t x16 = INT16_MIN;
volatile int32_t t3 = 1885;
int8_t x17 = -1;
uint32_t x20 = UINT32_MAX;
volatile int32_t t4 = -6982039;
volatile int32_t t6 = 0;
int8_t x30 = INT8_MIN;
int64_t x32 = -1LL;
volatile uint8_t x33 = UINT8_MAX;
static int32_t x36 = INT32_MIN;
volatile int32_t t8 = -3;
static uint32_t x40 = UINT32_MAX;
int16_t x42 = INT16_MIN;
int32_t t10 = 1264;
static int64_t x46 = INT64_MIN;
static uint8_t x53 = UINT8_MAX;
volatile int64_t x57 = -6095LL;
volatile int16_t x59 = INT16_MIN;
volatile int64_t x65 = -1LL;
volatile int64_t x67 = INT64_MIN;
int8_t x74 = INT8_MIN;
volatile int32_t t18 = -193;
volatile int8_t x77 = INT8_MIN;
static int32_t t19 = -1;
int16_t x81 = -1;
uint8_t x83 = 1U;
int64_t x86 = -9LL;
static int16_t x91 = INT16_MIN;
volatile int32_t t23 = -85016510;
int16_t x98 = 6486;
uint32_t x99 = UINT32_MAX;
volatile int32_t t24 = -1;
volatile int16_t x103 = INT16_MIN;
static uint64_t x105 = 44505248432LLU;
uint16_t x118 = 112U;
int32_t t30 = -674;
uint16_t x126 = 25U;
static int16_t x127 = INT16_MIN;
int32_t x132 = INT32_MIN;
int32_t t33 = -206;
int32_t x137 = -10990655;
volatile int32_t t34 = 12;
int8_t x143 = -1;
int64_t x155 = -4473338312235732LL;
int16_t x156 = INT16_MAX;
static uint64_t x158 = 3905116787LLU;
uint8_t x164 = 4U;
volatile int32_t t40 = 984;
uint32_t x171 = UINT32_MAX;
int32_t t42 = 0;
static uint32_t x187 = UINT32_MAX;
int64_t x192 = 19397549LL;
int32_t t47 = -6875;
int16_t x197 = -555;
uint8_t x198 = 20U;
static int64_t x201 = INT64_MAX;
int16_t x203 = 24;
volatile int64_t x204 = 491LL;
int64_t x207 = INT64_MAX;
static int64_t x212 = -16174688517LL;
uint64_t x216 = 5587170351091979LLU;
volatile int16_t x226 = INT16_MAX;
int8_t x227 = -1;
volatile uint32_t x230 = 220560057U;
int16_t x232 = INT16_MAX;
uint32_t x235 = 1538659U;
uint32_t x240 = 2U;
volatile int32_t t61 = 141577579;
int16_t x253 = INT16_MAX;
int16_t x255 = 307;
int16_t x260 = INT16_MIN;
int64_t x262 = -1138650669234387914LL;
static int8_t x264 = 23;
static uint64_t x268 = 30LLU;
volatile int32_t t67 = 1;
int64_t x279 = INT64_MAX;
volatile int32_t t70 = 3;
static volatile int64_t x290 = -163710479LL;
uint32_t x292 = 53950U;
static volatile int8_t x293 = 28;
int32_t x299 = -5822;
int16_t x304 = INT16_MIN;
int64_t x305 = INT64_MAX;
int32_t t77 = 98;
volatile int16_t x314 = INT16_MIN;
static int32_t t78 = 688777;
static int16_t x321 = INT16_MIN;
static int32_t x330 = INT32_MIN;
uint16_t x338 = 1445U;
volatile int32_t t84 = -228180704;
int32_t x341 = INT32_MIN;
uint32_t x363 = 8899U;
uint32_t x368 = UINT32_MAX;
static volatile int32_t t93 = -232471;
int8_t x386 = -1;
static uint16_t x387 = 11144U;
static int64_t x389 = INT64_MIN;
static int32_t x391 = INT32_MIN;
int32_t t97 = -210785;
uint32_t x393 = UINT32_MAX;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MIN;
	static volatile int64_t x4 = INT64_MAX;
	int32_t t0 = -41228011;

	t0 = (x1==(x2==(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = -1;
	volatile int32_t x7 = INT32_MIN;
	int32_t x8 = -6325764;
	static volatile int32_t t1 = 0;

	t1 = (x5==(x6==(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	int8_t x11 = -22;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9==(x10==(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MAX;
	static int16_t x15 = INT16_MAX;

	t3 = (x13==(x14==(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 1U;
	int32_t x19 = INT32_MIN;

	t4 = (x17==(x18==(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int64_t x22 = 96073958022064423LL;
	int8_t x23 = 0;
	static int16_t x24 = -1;
	int32_t t5 = 123431275;

	t5 = (x21==(x22==(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint64_t x26 = 7LLU;
	uint32_t x27 = 64520898U;
	uint64_t x28 = UINT64_MAX;

	t6 = (x25==(x26==(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	static int16_t x31 = INT16_MAX;
	int32_t t7 = -680501;

	t7 = (x29==(x30==(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;

	t8 = (x33==(x34==(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 599LLU;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -12119;
	int32_t t9 = 0;

	t9 = (x37==(x38==(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	uint16_t x43 = 17U;
	int64_t x44 = -1LL;

	t10 = (x41==(x42==(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 31U;
	uint16_t x47 = 554U;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 564516061;

	t11 = (x45==(x46==(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 15U;
	int16_t x50 = 10;
	volatile int8_t x51 = -54;
	int32_t x52 = INT32_MIN;
	static int32_t t12 = 1553095;

	t12 = (x49==(x50==(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x54 = 50016U;
	int32_t x55 = INT32_MIN;
	static int32_t x56 = -1;
	int32_t t13 = 90194;

	t13 = (x53==(x54==(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = -2067999493217044658LL;
	int64_t x60 = -1LL;
	int32_t t14 = 262236;

	t14 = (x57==(x58==(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 3639026008870474LL;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -5858;

	t15 = (x61==(x62==(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 2U;
	uint64_t x68 = 15398LLU;
	static volatile int32_t t16 = -490;

	t16 = (x65==(x66==(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 1;
	uint32_t x70 = UINT32_MAX;
	static uint32_t x71 = UINT32_MAX;
	uint32_t x72 = 1U;
	volatile int32_t t17 = -17689769;

	t17 = (x69==(x70==(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;

	t18 = (x73==(x74==(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = INT64_MAX;
	int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;

	t19 = (x77==(x78==(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	volatile int32_t t20 = -477;

	t20 = (x81==(x82==(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	int8_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 0;

	t21 = (x85==(x86==(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static int32_t x90 = INT32_MAX;
	uint16_t x92 = 2U;
	int32_t t22 = 78583408;

	t22 = (x89==(x90==(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 40079166433LL;
	int32_t x94 = -1;
	int32_t x95 = INT32_MAX;
	int16_t x96 = INT16_MIN;

	t23 = (x93==(x94==(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int32_t x100 = INT32_MIN;

	t24 = (x97==(x98==(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = INT32_MIN;
	uint64_t x102 = 3LLU;
	uint64_t x104 = UINT64_MAX;
	int32_t t25 = -55789791;

	t25 = (x101==(x102==(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x106 = INT16_MAX;
	int64_t x107 = -1LL;
	volatile uint16_t x108 = UINT16_MAX;
	static volatile int32_t t26 = 2693955;

	t26 = (x105==(x106==(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint16_t x110 = 3U;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 88;

	t27 = (x109==(x110==(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -49;
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = 1988963U;
	uint8_t x116 = 84U;
	volatile int32_t t28 = 2;

	t28 = (x113==(x114==(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 1;

	t29 = (x117==(x118==(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 22405LLU;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	static volatile int64_t x124 = INT64_MIN;

	t30 = (x121==(x122==(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 127;
	uint64_t x128 = 8860649581759046062LLU;
	int32_t t31 = -13;

	t31 = (x125==(x126==(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = 100291LL;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 6970U;
	static int32_t t32 = 200406;

	t32 = (x129==(x130==(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile int32_t x134 = INT32_MIN;
	volatile uint32_t x135 = 2U;
	uint16_t x136 = 805U;

	t33 = (x133==(x134==(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = UINT32_MAX;

	t34 = (x137==(x138==(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 154533U;
	static int8_t x142 = INT8_MAX;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = 0;

	t35 = (x141==(x142==(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -13054;
	volatile int32_t x146 = 224605;
	static int16_t x147 = INT16_MAX;
	static uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -33493024;

	t36 = (x145==(x146==(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	static int16_t x150 = -16;
	int8_t x151 = INT8_MAX;
	int8_t x152 = -4;
	volatile int32_t t37 = -250;

	t37 = (x149==(x150==(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static int16_t x154 = INT16_MIN;
	int32_t t38 = -4328;

	t38 = (x153==(x154==(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int32_t x159 = -1;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -1487;

	t39 = (x157==(x158==(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 117U;
	int32_t x162 = -68505132;
	int64_t x163 = -1LL;

	t40 = (x161==(x162==(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 26;
	uint64_t x166 = UINT64_MAX;
	static volatile int64_t x167 = -627405005309679LL;
	uint16_t x168 = 6U;
	volatile int32_t t41 = -3;

	t41 = (x165==(x166==(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint16_t x170 = 664U;
	int64_t x172 = INT64_MIN;

	t42 = (x169==(x170==(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 1;
	volatile uint8_t x174 = 106U;
	int32_t x175 = INT32_MAX;
	volatile uint64_t x176 = UINT64_MAX;
	volatile int32_t t43 = -600760;

	t43 = (x173==(x174==(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MAX;
	int32_t x179 = 181;
	int16_t x180 = -1;
	volatile int32_t t44 = -238;

	t44 = (x177==(x178==(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MAX;
	int64_t x182 = 345417709934092LL;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = 2U;
	volatile int32_t t45 = 6506038;

	t45 = (x181==(x182==(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -2482280LL;
	uint64_t x186 = 1401799LLU;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -123694963;

	t46 = (x185==(x186==(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = 0U;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;

	t47 = (x189==(x190==(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	static volatile int16_t x194 = INT16_MIN;
	uint16_t x195 = 3997U;
	static int64_t x196 = -963372883LL;
	volatile int32_t t48 = -426;

	t48 = (x193==(x194==(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x199 = -3585;
	uint16_t x200 = 440U;
	volatile int32_t t49 = -7;

	t49 = (x197==(x198==(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x202 = 33U;
	static volatile int32_t t50 = -29453249;

	t50 = (x201==(x202==(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	volatile int8_t x206 = -24;
	int64_t x208 = -1045089415LL;
	static int32_t t51 = 432567;

	t51 = (x205==(x206==(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	static uint32_t x210 = 502079393U;
	int8_t x211 = INT8_MIN;
	int32_t t52 = 346;

	t52 = (x209==(x210==(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -12;
	uint8_t x214 = UINT8_MAX;
	static uint32_t x215 = 3U;
	int32_t t53 = -2852344;

	t53 = (x213==(x214==(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	uint64_t x218 = 7LLU;
	volatile uint16_t x219 = 39U;
	volatile int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -122575;

	t54 = (x217==(x218==(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 96627U;
	volatile int32_t t55 = -126092;

	t55 = (x221==(x222==(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int32_t x228 = 47404017;
	int32_t t56 = -55982352;

	t56 = (x225==(x226==(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	static uint8_t x231 = 24U;
	volatile int32_t t57 = 0;

	t57 = (x229==(x230==(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	volatile int32_t x234 = INT32_MAX;
	uint8_t x236 = 91U;
	static int32_t t58 = 110;

	t58 = (x233==(x234==(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 26687699U;
	int16_t x238 = -1;
	uint8_t x239 = 13U;
	int32_t t59 = -2059;

	t59 = (x237==(x238==(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -1;
	static uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 9082466;

	t60 = (x241==(x242==(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;

	t61 = (x245==(x246==(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x249 = INT64_MAX;
	int16_t x250 = -26;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -102;

	t62 = (x249==(x250==(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = -1LL;
	static int64_t x256 = INT64_MIN;
	int32_t t63 = -7959594;

	t63 = (x253==(x254==(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 84U;
	volatile uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 156591U;
	volatile int32_t t64 = -973572180;

	t64 = (x257==(x258==(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	int16_t x263 = INT16_MIN;
	volatile int32_t t65 = -1316087;

	t65 = (x261==(x262==(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 1U;
	static int64_t x266 = -1LL;
	uint8_t x267 = 44U;
	int32_t t66 = -33128024;

	t66 = (x265==(x266==(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = 2;
	int8_t x271 = INT8_MAX;
	uint32_t x272 = UINT32_MAX;

	t67 = (x269==(x270==(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 19U;
	static uint32_t x274 = UINT32_MAX;
	volatile int16_t x275 = -1;
	uint32_t x276 = 1U;
	static volatile int32_t t68 = -38821;

	t68 = (x273==(x274==(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	uint64_t x278 = 1144834LLU;
	static int16_t x280 = -50;
	int32_t t69 = 2559633;

	t69 = (x277==(x278==(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -1;
	uint64_t x284 = UINT64_MAX;

	t70 = (x281==(x282==(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x285 = 1964U;
	static int8_t x286 = INT8_MIN;
	static int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -262761;

	t71 = (x285==(x286==(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x289 = UINT16_MAX;
	static uint8_t x291 = 1U;
	int32_t t72 = -116475;

	t72 = (x289==(x290==(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = 214380418742533LL;
	uint8_t x295 = 1U;
	int16_t x296 = -1;
	volatile int32_t t73 = 12518;

	t73 = (x293==(x294==(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -8892104932315LL;
	volatile uint16_t x298 = 8U;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 37167720;

	t74 = (x297==(x298==(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 11284673U;
	volatile int32_t t75 = -2634;

	t75 = (x301==(x302==(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 121255907210937LLU;
	uint32_t x308 = 6456U;
	volatile int32_t t76 = -33868430;

	t76 = (x305==(x306==(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 0;
	uint64_t x312 = UINT64_MAX;

	t77 = (x309==(x310==(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;

	t78 = (x313==(x314==(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 3LL;
	uint64_t x318 = 844LLU;
	int64_t x319 = INT64_MIN;
	volatile int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -30789176;

	t79 = (x317==(x318==(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 35469254U;
	volatile uint16_t x323 = 2693U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 86388;

	t80 = (x321==(x322==(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	volatile uint16_t x326 = 1014U;
	uint32_t x327 = 7755U;
	static volatile int32_t x328 = INT32_MAX;
	volatile int32_t t81 = 29;

	t81 = (x325==(x326==(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 249482;
	int16_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	static volatile int32_t t82 = -171803;

	t82 = (x329==(x330==(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 77U;
	static volatile int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = -307;

	t83 = (x333==(x334==(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 2;
	int64_t x339 = 22388805LL;
	int64_t x340 = INT64_MIN;

	t84 = (x337==(x338==(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 15900030942LLU;
	int16_t x343 = 304;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = 50;

	t85 = (x341==(x342==(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 11057933639283797LL;
	uint64_t x346 = 88691585472916530LLU;
	int32_t x347 = -1;
	uint8_t x348 = 7U;
	int32_t t86 = -1741;

	t86 = (x345==(x346==(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -2186;
	int8_t x350 = INT8_MIN;
	int8_t x351 = 0;
	int32_t x352 = INT32_MIN;
	int32_t t87 = -34;

	t87 = (x349==(x350==(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 1618;
	volatile int32_t x354 = 22325713;
	uint8_t x355 = 3U;
	volatile int64_t x356 = 53065215300LL;
	volatile int32_t t88 = -15;

	t88 = (x353==(x354==(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = -969383437693515144LL;
	uint8_t x358 = 20U;
	static volatile int16_t x359 = INT16_MIN;
	uint32_t x360 = 5823970U;
	int32_t t89 = 0;

	t89 = (x357==(x358==(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 3;
	int64_t x362 = 680904LL;
	volatile int16_t x364 = -4;
	static int32_t t90 = 20788386;

	t90 = (x361==(x362==(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	int64_t x367 = 9071347907LL;
	int32_t t91 = 94;

	t91 = (x365==(x366==(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int32_t x370 = -1;
	volatile int32_t x371 = INT32_MIN;
	uint16_t x372 = 255U;
	volatile int32_t t92 = 19;

	t92 = (x369==(x370==(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	volatile uint64_t x376 = 822669694086LLU;

	t93 = (x373==(x374==(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = 0;
	uint32_t x378 = 808029U;
	int32_t x379 = INT32_MIN;
	volatile int64_t x380 = INT64_MIN;
	static int32_t t94 = -64106643;

	t94 = (x377==(x378==(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x381 = 1006680462LLU;
	volatile int8_t x382 = -1;
	volatile uint32_t x383 = 1497643U;
	int64_t x384 = -1LL;
	volatile int32_t t95 = -47;

	t95 = (x381==(x382==(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 5;

	t96 = (x385==(x386==(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = INT32_MIN;
	volatile int16_t x392 = -1;

	t97 = (x389==(x390==(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 285541272440948231LLU;
	static int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -3013404;

	t98 = (x393==(x394==(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = 22662312289841LL;
	int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	static uint64_t x400 = 3LLU;
	volatile int32_t t99 = 28239073;

	t99 = (x397==(x398==(x399<=x400)));

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

