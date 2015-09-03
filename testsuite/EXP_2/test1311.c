#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = 170;
int32_t x8 = -1;
int8_t x11 = INT8_MIN;
int8_t x16 = 2;
static volatile int16_t x18 = 0;
int64_t x23 = -1026LL;
volatile uint16_t x27 = 0U;
uint32_t x28 = 145424U;
static int8_t x32 = -1;
volatile uint32_t x35 = 28231U;
uint8_t x37 = 15U;
int32_t x39 = INT32_MAX;
uint16_t x48 = 13U;
int32_t t11 = 146245938;
static int32_t x49 = INT32_MIN;
static int32_t x51 = INT32_MIN;
int8_t x54 = 14;
int64_t x56 = INT64_MIN;
int32_t x57 = INT32_MIN;
int64_t x68 = INT64_MIN;
volatile int16_t x71 = INT16_MIN;
static volatile int64_t x76 = -14666LL;
int32_t x77 = INT32_MAX;
int64_t x84 = INT64_MAX;
int16_t x86 = INT16_MAX;
int8_t x91 = 14;
int32_t x92 = INT32_MIN;
volatile int16_t x93 = INT16_MAX;
int16_t x97 = INT16_MIN;
static volatile int64_t x100 = 1LL;
int64_t x101 = 4LL;
static volatile uint16_t x102 = 1981U;
volatile int32_t t26 = -131253;
int8_t x111 = -1;
volatile int64_t x114 = INT64_MIN;
uint8_t x116 = 9U;
uint32_t x120 = UINT32_MAX;
volatile uint32_t t29 = 41101U;
static int32_t x130 = -36607;
uint8_t x139 = 17U;
int16_t x140 = -320;
int32_t x142 = 1;
volatile int8_t x144 = INT8_MIN;
volatile int32_t t36 = -594;
int16_t x157 = 1693;
int8_t x161 = -5;
uint64_t x162 = UINT64_MAX;
static uint16_t x164 = 169U;
static uint8_t x167 = 12U;
uint16_t x175 = 9U;
volatile int8_t x179 = INT8_MIN;
static int64_t x192 = 122982LL;
int16_t x195 = -1;
volatile int32_t x202 = INT32_MAX;
static int32_t t50 = 176540;
static volatile int32_t t51 = 3;
int64_t x209 = INT64_MAX;
int32_t x214 = -1;
int8_t x219 = -1;
uint8_t x224 = UINT8_MAX;
static int64_t x227 = -561772696344377LL;
volatile int8_t x228 = INT8_MIN;
int32_t t57 = 84505;
int32_t x240 = -133387788;
int16_t x254 = INT16_MIN;
static int64_t t63 = 13534336592900LL;
int8_t x274 = INT8_MIN;
static int16_t x275 = INT16_MIN;
static int32_t t68 = -77321917;
uint8_t x277 = UINT8_MAX;
volatile uint64_t x280 = 343251503124877LLU;
static volatile uint64_t t69 = 27513LLU;
static int64_t x286 = INT64_MAX;
static uint8_t x291 = 117U;
volatile int32_t t72 = -56;
int32_t x298 = -1;
volatile int32_t x302 = 22533;
uint8_t x304 = 45U;
static int32_t t76 = -69941114;
static int32_t x312 = 389;
int32_t x320 = INT32_MAX;
int16_t x321 = INT16_MIN;
static int16_t x323 = INT16_MIN;
static int64_t x328 = 20247873LL;
volatile int32_t x335 = -1;
uint8_t x341 = UINT8_MAX;
uint16_t x347 = UINT16_MAX;
volatile int64_t t86 = -456769237LL;
uint16_t x349 = 5U;
int32_t x350 = INT32_MIN;
int64_t t89 = -21885679851381955LL;
int16_t x364 = 5816;
uint64_t x376 = 3130593064856LLU;
int32_t x378 = 23;
uint32_t t94 = 159401U;
int32_t x387 = 94870;
static volatile int32_t t96 = -103;
uint8_t x389 = 37U;
static int8_t x392 = INT8_MIN;
static volatile int32_t t97 = -236829202;
uint8_t x396 = 7U;


void f0(void) {
	int32_t x1 = -2862;
	int8_t x2 = INT8_MIN;
	volatile uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 8404150860454143LLU;
	uint64_t t0 = 541319062LLU;

	t0 = ((x1<=(x2==x3))&x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int32_t x7 = -1;
	int32_t t1 = 493;

	t1 = ((x5<=(x6==x7))&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	static int16_t x10 = 0;
	uint16_t x12 = 14379U;
	static int32_t t2 = -10554497;

	t2 = ((x9<=(x10==x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x15 = 935925673026503LL;
	static volatile int32_t t3 = -3;

	t3 = ((x13<=(x14==x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint16_t x19 = 0U;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -58049782LL;

	t4 = ((x17<=(x18==x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	int8_t x24 = -2;
	volatile int32_t t5 = 111;

	t5 = ((x21<=(x22==x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -17268766483LL;
	volatile int64_t x26 = -161896914404LL;
	static uint32_t t6 = 25888U;

	t6 = ((x25<=(x26==x27))&x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = INT8_MIN;
	int8_t x31 = -1;
	static volatile int32_t t7 = -2544109;

	t7 = ((x29<=(x30==x31))&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1635021230526642961LLU;
	int32_t x34 = INT32_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 1624;

	t8 = ((x33<=(x34==x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = -54;
	static volatile uint8_t x40 = UINT8_MAX;
	int32_t t9 = -6470;

	t9 = ((x37<=(x38==x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 27;
	volatile int32_t x42 = 333809741;
	volatile uint16_t x43 = UINT16_MAX;
	int32_t x44 = 4189026;
	int32_t t10 = -29630;

	t10 = ((x41<=(x42==x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 17665U;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = -1LL;

	t11 = ((x45<=(x46==x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	static volatile int16_t x52 = 281;
	volatile int32_t t12 = -3;

	t12 = ((x49<=(x50==x51))&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	uint32_t x55 = 251258U;
	volatile int64_t t13 = -43390LL;

	t13 = ((x53<=(x54==x55))&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = 0;
	int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;
	static int32_t t14 = -29986171;

	t14 = ((x57<=(x58==x59))&x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	static int16_t x62 = 469;
	int32_t x63 = 3236160;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -257729;

	t15 = ((x61<=(x62==x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static int64_t x66 = INT64_MIN;
	int16_t x67 = 118;
	volatile int64_t t16 = -185LL;

	t16 = ((x65<=(x66==x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	int64_t x72 = 40214LL;
	volatile int64_t t17 = 191305279LL;

	t17 = ((x69<=(x70==x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -240065985181LL;
	int8_t x74 = 0;
	volatile uint32_t x75 = 379634193U;
	static volatile int64_t t18 = -174500237305927050LL;

	t18 = ((x73<=(x74==x75))&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 19440342332213409LLU;
	int64_t x79 = INT64_MIN;
	static volatile uint32_t x80 = 198489213U;
	static volatile uint32_t t19 = 98162U;

	t19 = ((x77<=(x78==x79))&x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = -1;
	uint64_t x83 = 27370240225598270LLU;
	int64_t t20 = 4273799847045594065LL;

	t20 = ((x81<=(x82==x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 12U;
	volatile int8_t x87 = -1;
	static uint16_t x88 = 60U;
	volatile int32_t t21 = -2016;

	t21 = ((x85<=(x86==x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	static int32_t x90 = INT32_MIN;
	volatile int32_t t22 = -57894056;

	t22 = ((x89<=(x90==x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;
	static uint32_t x95 = 2109311500U;
	int32_t x96 = INT32_MAX;
	int32_t t23 = 1681124;

	t23 = ((x93<=(x94==x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	static int64_t x99 = INT64_MIN;
	int64_t t24 = 18697LL;

	t24 = ((x97<=(x98==x99))&x100);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = -18LL;
	int64_t t25 = 169891710843200206LL;

	t25 = ((x101<=(x102==x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x106 = 5U;
	volatile int16_t x107 = -2924;
	int32_t x108 = INT32_MIN;

	t26 = ((x105<=(x106==x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 1140U;
	static int64_t x110 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = -650302LL;

	t27 = ((x109<=(x110==x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int32_t t28 = 491944542;

	t28 = ((x113<=(x114==x115))&x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 22765U;

	t29 = ((x117<=(x118==x119))&x120);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x122 = -466558953;
	static int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	int32_t t30 = -649929365;

	t30 = ((x121<=(x122==x123))&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 17340U;
	uint64_t x126 = 7LLU;
	int8_t x127 = -22;
	int8_t x128 = 16;
	static volatile int32_t t31 = 884317;

	t31 = ((x125<=(x126==x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MAX;
	volatile int64_t t32 = -3319LL;

	t32 = ((x129<=(x130==x131))&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = -7LL;
	int64_t x135 = 63573304223323984LL;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -3267;

	t33 = ((x133<=(x134==x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint16_t x138 = 65U;
	volatile int32_t t34 = 111;

	t34 = ((x137<=(x138==x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	int32_t x143 = -1;
	int32_t t35 = 1;

	t35 = ((x141<=(x142==x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 20;
	uint8_t x146 = 64U;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = 53U;

	t36 = ((x145<=(x146==x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -15;
	int64_t x150 = 228LL;
	static volatile int8_t x151 = 0;
	volatile int32_t x152 = 595505362;
	int32_t t37 = -77;

	t37 = ((x149<=(x150==x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 14099307886847001LLU;
	int64_t x154 = INT64_MIN;
	uint64_t x155 = 7467869196702505LLU;
	volatile uint16_t x156 = 16982U;
	int32_t t38 = -16619;

	t38 = ((x153<=(x154==x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MAX;
	uint64_t x159 = UINT64_MAX;
	static uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t39 = 1165LLU;

	t39 = ((x157<=(x158==x159))&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = 1;
	int32_t t40 = -58598873;

	t40 = ((x161<=(x162==x163))&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	static volatile int32_t x166 = -7415697;
	static volatile int16_t x168 = -1;
	static int32_t t41 = 16324316;

	t41 = ((x165<=(x166==x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 21829U;
	static int64_t x170 = -1LL;
	volatile uint64_t x171 = 6859082622266LLU;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 356734232U;

	t42 = ((x169<=(x170==x171))&x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int64_t x174 = 329640512LL;
	int16_t x176 = 14165;
	int32_t t43 = 48694817;

	t43 = ((x173<=(x174==x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = INT16_MAX;
	uint16_t x180 = 649U;
	volatile int32_t t44 = -14141;

	t44 = ((x177<=(x178==x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x182 = 25U;
	static volatile uint8_t x183 = 1U;
	static int32_t x184 = INT32_MIN;
	static int32_t t45 = 17707329;

	t45 = ((x181<=(x182==x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	static volatile int32_t x188 = -235;
	volatile int32_t t46 = -3201;

	t46 = ((x185<=(x186==x187))&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 7;
	volatile uint32_t x190 = 13565U;
	int32_t x191 = INT32_MIN;
	volatile int64_t t47 = -1864268534LL;

	t47 = ((x189<=(x190==x191))&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 250U;
	int8_t x194 = -7;
	uint32_t x196 = 373631936U;
	volatile uint32_t t48 = 0U;

	t48 = ((x193<=(x194==x195))&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	uint16_t x198 = 707U;
	static uint8_t x199 = UINT8_MAX;
	int32_t x200 = -1;
	static volatile int32_t t49 = -20867;

	t49 = ((x197<=(x198==x199))&x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 2U;
	uint64_t x203 = 492LLU;
	int16_t x204 = INT16_MIN;

	t50 = ((x201<=(x202==x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 97910LLU;
	volatile int64_t x206 = 377294LL;
	static volatile uint16_t x207 = 3983U;
	static uint16_t x208 = UINT16_MAX;

	t51 = ((x205<=(x206==x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 2LLU;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -348572058;

	t52 = ((x209<=(x210==x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 1639932552U;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -11;
	static volatile int32_t t53 = 833105;

	t53 = ((x213<=(x214==x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static volatile uint32_t x218 = 1775377316U;
	int8_t x220 = -1;
	int32_t t54 = 1756;

	t54 = ((x217<=(x218==x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x222 = -1LL;
	uint16_t x223 = UINT16_MAX;
	static volatile int32_t t55 = -879740;

	t55 = ((x221<=(x222==x223))&x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	int32_t t56 = 26103;

	t56 = ((x225<=(x226==x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -1;
	int64_t x231 = -2823LL;
	volatile int32_t x232 = 6778;

	t57 = ((x229<=(x230==x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 923515U;
	uint64_t x234 = 2299864417158885386LLU;
	int32_t x235 = -47707051;
	volatile uint16_t x236 = 1U;
	int32_t t58 = -20;

	t58 = ((x233<=(x234==x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 327626LLU;
	volatile int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int32_t t59 = -49766;

	t59 = ((x237<=(x238==x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = -1;
	volatile uint64_t x242 = UINT64_MAX;
	volatile int16_t x243 = INT16_MIN;
	volatile int32_t x244 = -1;
	static int32_t t60 = -119553237;

	t60 = ((x241<=(x242==x243))&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 513013U;
	uint16_t x246 = UINT16_MAX;
	int64_t x247 = INT64_MAX;
	int64_t x248 = -140480149LL;
	int64_t t61 = 3257915LL;

	t61 = ((x245<=(x246==x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 201376LLU;
	int16_t x251 = -22;
	volatile int8_t x252 = 1;
	volatile int32_t t62 = 3699;

	t62 = ((x249<=(x250==x251))&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = -1LL;

	t63 = ((x253<=(x254==x255))&x256);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 752153898693166LLU;
	int16_t x258 = 284;
	static int64_t x259 = INT64_MIN;
	volatile int64_t x260 = INT64_MIN;
	int64_t t64 = 125675916083952LL;

	t64 = ((x257<=(x258==x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = INT16_MAX;
	static volatile int64_t x262 = 1823896360101407LL;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 59921U;
	uint32_t t65 = 69577615U;

	t65 = ((x261<=(x262==x263))&x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = 8268033LL;
	int16_t x267 = INT16_MAX;
	uint32_t x268 = 172U;
	volatile uint32_t t66 = 45934914U;

	t66 = ((x265<=(x266==x267))&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	static int64_t x271 = INT64_MIN;
	static uint8_t x272 = 3U;
	static volatile int32_t t67 = -667571416;

	t67 = ((x269<=(x270==x271))&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static volatile int16_t x276 = INT16_MIN;

	t68 = ((x273<=(x274==x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 1;
	int16_t x279 = INT16_MAX;

	t69 = ((x277<=(x278==x279))&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 5883U;
	static int8_t x282 = -2;
	uint32_t x283 = UINT32_MAX;
	static int64_t x284 = -69582892852910LL;
	int64_t t70 = -161LL;

	t70 = ((x281<=(x282==x283))&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	int64_t x287 = -1LL;
	int16_t x288 = -10;
	static volatile int32_t t71 = 710804426;

	t71 = ((x285<=(x286==x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 58278475342LLU;
	static uint32_t x290 = UINT32_MAX;
	int8_t x292 = INT8_MIN;

	t72 = ((x289<=(x290==x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	int32_t x295 = 58920;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = 2LLU;

	t73 = ((x293<=(x294==x295))&x296);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	volatile uint32_t x300 = 1U;
	uint32_t t74 = 14038360U;

	t74 = ((x297<=(x298==x299))&x300);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MAX;
	uint16_t x303 = 278U;
	static int32_t t75 = 12;

	t75 = ((x301<=(x302==x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	static uint32_t x306 = UINT32_MAX;
	int16_t x307 = -885;
	uint8_t x308 = UINT8_MAX;

	t76 = ((x305<=(x306==x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	static int32_t x310 = INT32_MIN;
	static volatile int16_t x311 = -21;
	volatile int32_t t77 = -12611;

	t77 = ((x309<=(x310==x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	static int8_t x314 = INT8_MAX;
	volatile int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 8101;

	t78 = ((x313<=(x314==x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 61881LL;
	int8_t x318 = 1;
	volatile int32_t x319 = INT32_MAX;
	static volatile int32_t t79 = -1016;

	t79 = ((x317<=(x318==x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x322 = UINT32_MAX;
	volatile int32_t x324 = 24554985;
	static int32_t t80 = 50918231;

	t80 = ((x321<=(x322==x323))&x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 13279;
	int64_t x326 = 55743736776376LL;
	static volatile int64_t x327 = INT64_MIN;
	int64_t t81 = -17972505LL;

	t81 = ((x325<=(x326==x327))&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 238326650903178687LLU;
	int8_t x330 = -1;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	static volatile int64_t t82 = -189501876837LL;

	t82 = ((x329<=(x330==x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -747LL;
	int8_t x334 = -14;
	volatile int64_t x336 = INT64_MAX;
	volatile int64_t t83 = -1382729208532642LL;

	t83 = ((x333<=(x334==x335))&x336);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x338 = UINT8_MAX;
	static volatile uint16_t x339 = 30737U;
	uint64_t x340 = 368941480757426LLU;
	uint64_t t84 = 122171LLU;

	t84 = ((x337<=(x338==x339))&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x342 = 1332580998U;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = -1;

	t85 = ((x341<=(x342==x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MAX;
	uint64_t x346 = 2LLU;
	int64_t x348 = -1LL;

	t86 = ((x345<=(x346==x347))&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x351 = INT8_MAX;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t87 = 1U;

	t87 = ((x349<=(x350==x351))&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -2508;
	static uint8_t x355 = UINT8_MAX;
	uint32_t x356 = UINT32_MAX;
	uint32_t t88 = 922715552U;

	t88 = ((x353<=(x354==x355))&x356);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	uint16_t x358 = 2111U;
	uint8_t x359 = 1U;
	static int64_t x360 = -40209980150494132LL;

	t89 = ((x357<=(x358==x359))&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 1;
	uint64_t x362 = 44LLU;
	int8_t x363 = INT8_MIN;
	volatile int32_t t90 = -666;

	t90 = ((x361<=(x362==x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 207963052;
	uint16_t x366 = 29U;
	static uint8_t x367 = 2U;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -2;

	t91 = ((x365<=(x366==x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 1;
	static int32_t x370 = -1;
	int8_t x371 = -5;
	int32_t x372 = -8;
	int32_t t92 = -1894662;

	t92 = ((x369<=(x370==x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 1U;
	int32_t x374 = 395;
	int16_t x375 = INT16_MAX;
	uint64_t t93 = 16302165422LLU;

	t93 = ((x373<=(x374==x375))&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	static uint8_t x379 = 4U;
	uint32_t x380 = 17135U;

	t94 = ((x377<=(x378==x379))&x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -36;
	uint32_t x382 = 193622U;
	static volatile int16_t x383 = INT16_MAX;
	int8_t x384 = 0;
	int32_t t95 = -24;

	t95 = ((x381<=(x382==x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = -1;
	int8_t x388 = INT8_MIN;

	t96 = ((x385<=(x386==x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 181143906U;
	int32_t x391 = -1;

	t97 = ((x389<=(x390==x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	static int32_t x395 = INT32_MAX;
	int32_t t98 = 27743;

	t98 = ((x393<=(x394==x395))&x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = 3475;
	volatile int8_t x399 = -1;
	int16_t x400 = INT16_MIN;
	static int32_t t99 = -54255;

	t99 = ((x397<=(x398==x399))&x400);

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

